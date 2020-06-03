#import <UIKit/UIKit.h>
#import "MASettingsManager.h"
#import "MANoiseCancellationController.h"

@class BSTimer;
@protocol SBHIDButtonStateDelegate;

static void settingsChanged(CFNotificationCenterRef center, void *observer, CFStringRef name, const void *object, CFDictionaryRef userInfo) {
    [Settings loadSettings];
}

%ctor {
	[Settings loadSettings];

	@autoreleasepool {
			// listen for notifications from settings
			CFNotificationCenterAddObserver(CFNotificationCenterGetDarwinNotifyCenter(),
																			NULL,
																			(CFNotificationCallback)settingsChanged,
																			CFSTR("com.ericrabil.musica.skinny.changed"),
																			NULL,
																			CFNotificationSuspensionBehaviorDeliverImmediately);
	}
}

@interface SBHIDButtonStateArbiter : NSObject
{
    double _longPressTimeoutAtDownEvent;
}
@end

@interface SBCameraHardwareButton: NSObject

@end

@interface SBVolumeHardwareButtonActions
-(void)volumeIncreasePressDown;
-(void)volumeIncreasePressUp;
-(void)volumeDecreasePressDown;
-(void)volumeDecreasePressUp;
@end

@interface SBVolumeHardwareButton
-(SBVolumeHardwareButtonActions*)buttonActions;
@end

@interface SBLockHardwareButtonActions
-(void)performSinglePressAction;
@end

@interface SBLockHardwareButton
-(SBLockHardwareButtonActions*)buttonActions;
@end

@interface UIApplication (Internal) {}
-(void)_headsetButtonUp:(id*)arg1;
-(BOOL)launchApplicationWithIdentifier:(id)arg1 suspended:(BOOL)arg2;
-(SBVolumeHardwareButton*)volumeHardwareButton;
-(SBLockHardwareButton*)lockHardwareButton;
@end

%hook SBVolumeHardwareButton
-(void)volumeIncreasePress:(id)arg1 {
	NSLog(@"MUSICA || %@", arg1);
	%orig;
}
%end

%hook SBCameraHardwareButton
- (void)performActionsForButtonUp:(SBHIDButtonStateArbiter *)arg1 {
	if (!Settings.enabled) return %orig;
	double timeout = [[arg1 valueForKey:@"_longPressTimeoutAtDownEvent"] doubleValue];
	if (timeout == 0) {
		// bitch its a long press fuck off!!!
		return;
	}
	switch (Settings.pressTrigger) {
		case PressTriggerPlayback:
			[[%c(UIApplication) sharedApplication] _headsetButtonUp:nil];
			break;
		case PressTriggerHardware:
			switch (Settings.hardwareEmulation) {
				case HardwareEmulationVolumeUp:
					[[[[%c(UIApplication) sharedApplication] volumeHardwareButton] buttonActions] volumeIncreasePressDown];
					[[[[%c(UIApplication) sharedApplication] volumeHardwareButton] buttonActions] volumeIncreasePressUp];
					break;
				case HardwareEmulationVolumeDown:
					[[[[%c(UIApplication) sharedApplication] volumeHardwareButton] buttonActions] volumeDecreasePressDown];
					[[[[%c(UIApplication) sharedApplication] volumeHardwareButton] buttonActions] volumeDecreasePressUp];
					break;
				case HardwareEmulationPower:
					[[[[%c(UIApplication) sharedApplication] lockHardwareButton] buttonActions] performSinglePressAction];
					break;
			}
			break;
		case PressTriggerOriginal:
			%orig;
			break;
		case PressTriggerNothing:
			break;
	}
}
- (void) performActionsForButtonLongPress:(id)arg1 {
	if (!Settings.enabled) return %orig;
	switch (Settings.holdTrigger) {
		case HoldTriggerNoiseCancellation:
			[[MANoiseCancellationController sharedController] invertListeningMode];
			break;
		case HoldTriggerOpenApp:
			dispatch_async(dispatch_get_main_queue(), ^{
				[[UIApplication sharedApplication] launchApplicationWithIdentifier: Settings.openApp suspended:0];
			});
			break;
		case HoldTriggerOriginal:
			%orig;
			break;
		case HoldTriggerNothing:
			break;
	}
}
%end
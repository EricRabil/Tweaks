#import <Foundation/Foundation.h>

#define kSettingsChangedNotification @"kSettingsChangedNotification"
#define Settings [MASettingsManager sharedManager]

typedef enum EPressTrigger {
  PressTriggerPlayback = 0,
  PressTriggerHardware = 1,
  PressTriggerOriginal = 2,
  PressTriggerNothing = 3
} PressTrigger;

typedef enum EHoldTrigger {
  HoldTriggerNoiseCancellation = 0,
  HoldTriggerOpenApp = 1,
  HoldTriggerOriginal = 2,
  HoldTriggerNothing = 3
} HoldTrigger;

typedef enum EHardwareEmulationSelection {
  HardwareEmulationVolumeUp = 0,
  HardwareEmulationVolumeDown = 1,
  HardwareEmulationPower = 2
} HardwareEmulationSelection;

@interface MASettingsManager: NSObject
@property (nonatomic, assign, readonly) BOOL enabled;
@property (nonatomic, assign, readonly) HoldTrigger holdTrigger;
@property (nonatomic, assign, readonly) PressTrigger pressTrigger;
@property (nonatomic, retain, readonly) NSString* openApp;
@property (nonatomic, assign, readonly) HardwareEmulationSelection hardwareEmulation;
+ (instancetype) sharedManager;
- (void) loadSettings;
@end
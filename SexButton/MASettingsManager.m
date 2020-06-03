#import "MASettingsManager.h"

#define kPrefsAppID CFSTR("com.ericrabil.musica.skinny")

@implementation MASettingsManager
+ (instancetype) sharedManager {
  static MASettingsManager *sharedManager = nil;
  static dispatch_once_t onceToken;
  dispatch_once(&onceToken, ^{
    sharedManager = [[self alloc] init];
  });
  return sharedManager;
}

- (void) loadSettings {
  NSDictionary *settings = nil;
  CFPreferencesAppSynchronize(kPrefsAppID);
  CFArrayRef keyList = CFPreferencesCopyKeyList(kPrefsAppID, kCFPreferencesCurrentUser, kCFPreferencesAnyHost);
  if (keyList) {
    settings = (NSDictionary *)CFBridgingRelease(CFPreferencesCopyMultiple(keyList, kPrefsAppID, kCFPreferencesCurrentUser, kCFPreferencesAnyHost));
    CFRelease(keyList);
  }

  [self _populateDefaultValues];
  if (settings) [self _loadSettingsFromDictionary: settings];
  [self _notifyObservers];
}

- (void) _populateDefaultValues {
  // enable/disable entire tweak
  _enabled = YES;

  // battery case button hold trigger
  _holdTrigger = HoldTriggerNoiseCancellation;

  // battery case button press trigger
  _pressTrigger = PressTriggerPlayback;

  // app override to open
  _openApp = @"com.apple.camera";

  // hardware button to emulate
  _hardwareEmulation = HardwareEmulationVolumeUp;
}

- (void) _loadSettingsFromDictionary:(NSDictionary*) settings {
  // enable/disable entire tweak
  if (settings[@"enabled"]) _enabled = [settings[@"enabled"] boolValue];

  // battery case button hold trigger
  if (settings[@"com.ericrabil.musica.action.hold"]) _holdTrigger = [settings[@"com.ericrabil.musica.action.hold"] intValue];

  // battery case button press trigger
  if (settings[@"com.ericrabil.musica.action.press"]) _pressTrigger = [settings[@"com.ericrabil.musica.action.press"] intValue];

  // which app to open
  if (settings[@"com.ericrabil.musica.skinny.app-selection"]) _openApp = settings[@"com.ericrabil.musica.skinny.app-selection"];

  // hardware button to emulate
  if (settings[@"com.ericrabil.musica.hardware-emulation"]) _hardwareEmulation = [settings[@"com.ericrabil.musica.hardware-emulation"] intValue];
}

- (void)_notifyObservers {
    [[NSNotificationCenter defaultCenter] postNotificationName:kSettingsChangedNotification object:nil];
}
@end
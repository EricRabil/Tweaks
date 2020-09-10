#import "WECustomTrigger.h"
#import "WFAppInFocusTrigger.h"

%subclass WECustomTrigger: WFTrigger
- (Class) viewControllerClassForConfiguration {
  return [%c(WECustomTriggerConfigurationViewController) class];
}

- (_Bool) hasValidConfiguration {
  return true;
}

+ (NSString*) localizedDisplayName {
  return @"Custom Trigger";
}

+ (NSString*) localizedDisplayExplanation {
  return @"This trigger is fired whenever the fuck I want, you little sissy.";
}

+ (id) triggerTypeIcon {
  return [%c(WFAppInFocusTrigger) triggerTypeIcon];
}

+ (BOOL) isAllowedToRunAutomatically {
  return YES;
}

+ (BOOL) isSupportedOnThisDevice {
  return YES;
}
%end
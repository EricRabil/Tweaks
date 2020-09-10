#import <Foundation/Foundation.h>
#import "WECustomTrigger.h"
#import "WFAutomationSelectTypeViewController.h"

%hook WFAutomationSelectTypeViewController
+ (id)allTriggersByGroupIdentifier {
  NSMutableDictionary* triggers = [%orig mutableCopy];
  [triggers setValue:@[[%c(WECustomTrigger) class]] forKey:@"custom"];

  return triggers;
}
+ (NSArray*) sortedTriggerGroupIdentifiers {
  NSMutableArray* sorted = [NSMutableArray arrayWithArray: %orig];
  [sorted addObject:@"custom"];

  return sorted;
}
+ (NSString*) triggerGroupTitleForIdentifier:(NSString*) identifier {
  if ([identifier isEqualToString:@"custom"]) return @"Custom";
  return %orig;
}
%end
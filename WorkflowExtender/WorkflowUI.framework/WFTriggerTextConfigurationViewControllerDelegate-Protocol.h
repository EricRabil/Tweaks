//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WorkflowUI/NSObject-Protocol.h>

@class NSString, WFTriggerTextConfigurationViewController;

@protocol WFTriggerTextConfigurationViewControllerDelegate <NSObject>
- (void)triggerTextConfigurationViewControllerDidCancel:(WFTriggerTextConfigurationViewController *)arg1;
- (void)triggerTextConfigurationViewController:(WFTriggerTextConfigurationViewController *)arg1 didSelectText:(NSString *)arg2;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WorkflowUI/NSObject-Protocol.h>

@class NSError, WFAction, WFContentCollection, WFRunWorkflowToolbar, WFRunWorkflowViewController, WFWorkflowControllerState;

@protocol WFRunWorkflowViewControllerDelegate <NSObject>

@optional
- (WFRunWorkflowToolbar *)runWorkflowToolbarForWorkflowViewController:(WFRunWorkflowViewController *)arg1;
- (_Bool)workflowViewController:(WFRunWorkflowViewController *)arg1 handleUnsupportedUserInterfaceForAction:(WFAction *)arg2 currentState:(WFWorkflowControllerState *)arg3 completionHandler:(void (^)(void))arg4;
- (_Bool)workflowViewController:(WFRunWorkflowViewController *)arg1 handleUnsupportedEnvironmentForAction:(WFAction *)arg2 currentState:(WFWorkflowControllerState *)arg3 completionHandler:(void (^)(WFContentCollection *, NSError *))arg4;
- (void)workflowViewControllerDidRun:(WFRunWorkflowViewController *)arg1 withOutput:(WFContentCollection *)arg2 error:(NSError *)arg3 cancelled:(_Bool)arg4 continueHandler:(void (^)(void))arg5;
- (void)workflowViewControllerWillRun:(WFRunWorkflowViewController *)arg1 continueHandler:(void (^)(void))arg2;
- (void)workflowViewControllerRequestsDismissal:(WFRunWorkflowViewController *)arg1 withCompletionHandler:(void (^)(void))arg2;
- (_Bool)isDrawerAvailableForWorkflowViewController:(WFRunWorkflowViewController *)arg1;
- (void)workflowViewControllerRequestsActionDrawer:(WFRunWorkflowViewController *)arg1;
@end


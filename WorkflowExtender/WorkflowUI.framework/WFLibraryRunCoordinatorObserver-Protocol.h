//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WorkflowUI/NSObject-Protocol.h>

@class NSError, WFLibraryRunCoordinator, WFWorkflowReference;

@protocol WFLibraryRunCoordinatorObserver <NSObject>

@optional
- (void)runCoordinator:(WFLibraryRunCoordinator *)arg1 didFinishRunningWorkflow:(WFWorkflowReference *)arg2 withError:(NSError *)arg3;
- (void)runCoordinator:(WFLibraryRunCoordinator *)arg1 didChangeRunningStateWithProgress:(double)arg2 forWorkflow:(WFWorkflowReference *)arg3;
@end


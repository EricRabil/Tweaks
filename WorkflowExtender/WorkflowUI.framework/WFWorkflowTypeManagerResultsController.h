//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WorkflowKit/WFDatabaseTableViewResultsController.h>

@class NSString;

@interface WFWorkflowTypeManagerResultsController : WFDatabaseTableViewResultsController
{
    NSString *_workflowType;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *workflowType; // @synthesize workflowType=_workflowType;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForObject:(id)arg2 atIndexPath:(id)arg3;
- (void)updateCell:(id)arg1 withObject:(id)arg2 atIndexPath:(id)arg3;
- (void)_updateCell:(id)arg1 withObject:(id)arg2 atIndexPath:(id)arg3;
- (id)initWithResults:(id)arg1 forSections:(id)arg2 database:(id)arg3 inTableView:(id)arg4 withWorkflowType:(id)arg5;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WorkflowKit/WFDatabaseSectionedResultsController.h>

#import <WorkflowKit/UITableViewDataSource-Protocol.h>

@class NSString;

@interface WFDatabaseTableViewResultsController : WFDatabaseSectionedResultsController <UITableViewDataSource>
{
    _Bool _scrollToInsertions;
    _Bool _lastChangeIsUserDriven;
    _Bool _loaded;
}

@property(nonatomic, getter=isLoaded) _Bool loaded; // @synthesize loaded=_loaded;
@property(nonatomic) _Bool lastChangeIsUserDriven; // @synthesize lastChangeIsUserDriven=_lastChangeIsUserDriven;
@property(nonatomic) _Bool scrollToInsertions; // @synthesize scrollToInsertions=_scrollToInsertions;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)updateCell:(id)arg1 withObject:(id)arg2 atIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForObject:(id)arg2 atIndexPath:(id)arg3;
- (id)initWithCollections:(id)arg1 forSections:(id)arg2 database:(id)arg3 inTableView:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


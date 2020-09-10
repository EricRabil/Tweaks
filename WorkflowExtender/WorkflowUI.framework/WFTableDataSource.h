//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WorkflowUI/UITableViewDataSource-Protocol.h>
#import <WorkflowUI/WFTreeObserver-Protocol.h>

@class NSArray, NSMutableArray, NSString, UITableView, WFTableDataSourceTreeNode;

@interface WFTableDataSource : NSObject <WFTreeObserver, UITableViewDataSource>
{
    UITableView *_tableView;
    WFTableDataSourceTreeNode *_tree;
    NSMutableArray *_mutableSections;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableArray *mutableSections; // @synthesize mutableSections=_mutableSections;
@property(readonly, nonatomic) WFTableDataSourceTreeNode *tree; // @synthesize tree=_tree;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)treeNodeAtTreeIndexPath:(id)arg1;
- (id)treeNodeAtTableViewIndexPath:(id)arg1;
- (void)performBatchUpdates:(CDUnknownBlockType)arg1;
- (id)cellIdentifierForItem:(id)arg1;
- (void)treeNode:(id)arg1 flattenedDescendentsDidChangeFrom:(id)arg2 to:(id)arg3 changeSource:(id)arg4;
- (void)removeSectionAtIndex:(long long)arg1;
- (void)removeSection:(id)arg1;
- (void)insertSection:(id)arg1 atIndex:(long long)arg2;
- (void)addSection:(id)arg1;
- (id)indexPathFromTableViewIndexPath:(id)arg1;
- (id)indexPathForItem:(id)arg1;
- (id)itemAtIndexPath:(id)arg1;
@property(copy, nonatomic) NSArray *sections;
- (id)sectionAtIndex:(unsigned long long)arg1;
- (id)initWithTableView:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


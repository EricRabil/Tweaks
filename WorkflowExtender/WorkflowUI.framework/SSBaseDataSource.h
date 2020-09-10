//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WorkflowUI/UICollectionViewDataSource-Protocol.h>
#import <WorkflowUI/UITableViewDataSource-Protocol.h>

@class NSString, UICollectionView, UITableView, UIView;

@interface SSBaseDataSource : NSObject <UITableViewDataSource, UICollectionViewDataSource>
{
    Class _cellClass;
    CDUnknownBlockType _cellConfigureBlock;
    CDUnknownBlockType _cellCreationBlock;
    UIView *_emptyView;
    UITableView *_tableView;
    long long _rowAnimation;
    CDUnknownBlockType _tableActionBlock;
    CDUnknownBlockType _tableDeletionBlock;
    CDUnknownBlockType _tableMoveBlock;
    UICollectionView *_collectionView;
    Class _collectionViewSupplementaryElementClass;
    CDUnknownBlockType _collectionSupplementaryCreationBlock;
    CDUnknownBlockType _collectionSupplementaryConfigureBlock;
    long long _cachedSeparatorStyle;
}

+ (id)indexPathArrayWithRange:(struct _NSRange)arg1 inSection:(long long)arg2;
+ (id)indexPathArrayWithIndexSet:(id)arg1 inSection:(long long)arg2;
- (void).cxx_destruct;
@property(nonatomic) long long cachedSeparatorStyle; // @synthesize cachedSeparatorStyle=_cachedSeparatorStyle;
@property(copy, nonatomic) CDUnknownBlockType collectionSupplementaryConfigureBlock; // @synthesize collectionSupplementaryConfigureBlock=_collectionSupplementaryConfigureBlock;
@property(copy, nonatomic) CDUnknownBlockType collectionSupplementaryCreationBlock; // @synthesize collectionSupplementaryCreationBlock=_collectionSupplementaryCreationBlock;
@property(nonatomic) __weak Class collectionViewSupplementaryElementClass; // @synthesize collectionViewSupplementaryElementClass=_collectionViewSupplementaryElementClass;
@property(nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(copy, nonatomic) CDUnknownBlockType tableMoveBlock; // @synthesize tableMoveBlock=_tableMoveBlock;
@property(copy, nonatomic) CDUnknownBlockType tableDeletionBlock; // @synthesize tableDeletionBlock=_tableDeletionBlock;
@property(copy, nonatomic) CDUnknownBlockType tableActionBlock; // @synthesize tableActionBlock=_tableActionBlock;
@property(nonatomic) long long rowAnimation; // @synthesize rowAnimation=_rowAnimation;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIView *emptyView; // @synthesize emptyView=_emptyView;
@property(copy, nonatomic) CDUnknownBlockType cellCreationBlock; // @synthesize cellCreationBlock=_cellCreationBlock;
@property(copy, nonatomic) CDUnknownBlockType cellConfigureBlock; // @synthesize cellConfigureBlock=_cellConfigureBlock;
@property(nonatomic) __weak Class cellClass; // @synthesize cellClass=_cellClass;
- (void)reloadData;
- (void)reloadSectionsAtIndexes:(id)arg1;
- (void)deleteSectionsAtIndexes:(id)arg1;
- (void)insertSectionsAtIndexes:(id)arg1;
- (void)moveSectionAtIndex:(long long)arg1 toIndex:(long long)arg2;
- (void)moveCellAtIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (void)reloadCellsAtIndexPaths:(id)arg1;
- (void)deleteCellsAtIndexPaths:(id)arg1;
- (void)insertCellsAtIndexPaths:(id)arg1;
- (void)_updateEmptyView;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)configureCell:(id)arg1 forItem:(id)arg2 parentView:(id)arg3 indexPath:(id)arg4;
- (id)indexPathForItem:(id)arg1;
- (unsigned long long)numberOfItems;
- (unsigned long long)numberOfItemsInSection:(long long)arg1;
- (unsigned long long)numberOfSections;
- (id)itemAtIndexPath:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


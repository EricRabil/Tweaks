//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <WorkflowUI/UICollectionViewDelegateFlowLayout-Protocol.h>
#import <WorkflowUI/UICollectionViewDropDelegate-Protocol.h>
#import <WorkflowUI/UISearchControllerDelegate-Protocol.h>
#import <WorkflowUI/UISearchResultsUpdating-Protocol.h>
#import <WorkflowUI/WFApplicationStateObserver-Protocol.h>
#import <WorkflowUI/WFLibraryWorkflowCellDelegate-Protocol.h>
#import <WorkflowUI/WFRunnableLibraryResultsControllerDelegate-Protocol.h>
#import <WorkflowUI/WFUIKitUserInterface-Protocol.h>

@class NSString, UICollectionView, UICollectionViewFlowLayout, UIView, WFDatabase, WFDatabaseResult, WFLibraryResultsController, WFLibraryRunCoordinator;

@interface WFLibraryViewController : UIViewController <UISearchResultsUpdating, UISearchControllerDelegate, UICollectionViewDelegateFlowLayout, WFLibraryWorkflowCellDelegate, UICollectionViewDropDelegate, WFRunnableLibraryResultsControllerDelegate, WFApplicationStateObserver, WFUIKitUserInterface>
{
    _Bool _needsDelayWhenPresented;
    _Bool _handlesDropsOntoWorkflows;
    WFDatabase *_database;
    UICollectionView *_collectionView;
    WFLibraryResultsController *_resultsController;
    UICollectionViewFlowLayout *_collectionViewLayout;
    WFDatabaseResult *_collection;
    struct UIEdgeInsets _previousLayoutMargins;
}

+ (Class)collectionViewLayoutClass;
+ (Class)resultsControllerClass;
- (void).cxx_destruct;
@property(nonatomic) struct UIEdgeInsets previousLayoutMargins; // @synthesize previousLayoutMargins=_previousLayoutMargins;
@property(readonly, nonatomic) WFDatabaseResult *collection; // @synthesize collection=_collection;
@property(nonatomic) _Bool handlesDropsOntoWorkflows; // @synthesize handlesDropsOntoWorkflows=_handlesDropsOntoWorkflows;
@property(readonly, nonatomic) _Bool needsDelayWhenPresented; // @synthesize needsDelayWhenPresented=_needsDelayWhenPresented;
@property(readonly, nonatomic) UICollectionViewFlowLayout *collectionViewLayout; // @synthesize collectionViewLayout=_collectionViewLayout;
@property(readonly, nonatomic) WFLibraryResultsController *resultsController; // @synthesize resultsController=_resultsController;
@property(readonly, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(readonly, nonatomic) WFDatabase *database; // @synthesize database=_database;
- (id)keyCommands;
- (void)beginSearching;
- (void)endSearching;
- (void)resultsController:(id)arg1 didChangeRunningStateForWorkflow:(id)arg2;
- (void)presentAlert:(id)arg1;
@property(readonly, nonatomic) UIViewController *viewController;
- (void)scrollViewDidScroll:(id)arg1;
- (void)didDismissSearchController:(id)arg1;
- (void)willPresentSearchController:(id)arg1;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)handleDropOfItems:(id)arg1 ontoWorkflow:(id)arg2;
- (void)collectionView:(id)arg1 performDropWithCoordinator:(id)arg2;
- (id)collectionView:(id)arg1 dropSessionDidUpdate:(id)arg2 withDestinationIndexPath:(id)arg3;
- (_Bool)collectionView:(id)arg1 canHandleDropSession:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)workflowAtIndexPath:(id)arg1;
@property(readonly, nonatomic) _Bool needsTopPadding;
- (void)keyboardFrameWillChange;
- (void)viewLayoutMarginsDidChange;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)applicationContext:(id)arg1 applicationStateDidChange:(long long)arg2;
- (_Bool)canBecomeFirstResponder;
- (void)invalidateLayoutMetrics;
@property(readonly, nonatomic) WFLibraryRunCoordinator *runCoordinator;
- (void)loadView;
- (void)dealloc;
- (id)initWithCollection:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) UIView *view;

@end

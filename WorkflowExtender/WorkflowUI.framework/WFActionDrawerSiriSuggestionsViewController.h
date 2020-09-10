//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WorkflowUI/WFActionDrawerCompositeResultsViewController.h>

#import <WorkflowUI/UITableViewDataSource-Protocol.h>
#import <WorkflowUI/UITableViewDelegate-Protocol.h>
#import <WorkflowUI/WFActionDrawerActionTableViewCellDelegate-Protocol.h>
#import <WorkflowUI/WFActionDrawerCategoriesTableViewCellDelegate-Protocol.h>
#import <WorkflowUI/WFActionDrawerSiriSuggestionsTableViewCellDelegate-Protocol.h>
#import <WorkflowUI/WFActionDrawerStateConfigurable-Protocol.h>
#import <WorkflowUI/WFActionDrawerStateRepresentable-Protocol.h>

@class NSArray, NSString, WFActionDrawerCategoriesMetrics, WFActionDrawerResultsController, WFActionDrawerState;
@protocol NSObject, WFActionDrawerSuggestionsViewControllerDelegate;

@interface WFActionDrawerSiriSuggestionsViewController : WFActionDrawerCompositeResultsViewController <UITableViewDelegate, UITableViewDataSource, WFActionDrawerSiriSuggestionsTableViewCellDelegate, WFActionDrawerCategoriesTableViewCellDelegate, WFActionDrawerActionTableViewCellDelegate, WFActionDrawerStateRepresentable, WFActionDrawerStateConfigurable>
{
    _Bool _shouldDisplayCategoriesVertically;
    id <WFActionDrawerSuggestionsViewControllerDelegate> _delegate;
    WFActionDrawerResultsController *_actionDrawerResultsController;
    id <NSObject> _actionRegistryFilledNotificationObserver;
    WFActionDrawerCategoriesMetrics *_categoriesMetrics;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WFActionDrawerCategoriesMetrics *categoriesMetrics; // @synthesize categoriesMetrics=_categoriesMetrics;
@property(nonatomic) _Bool shouldDisplayCategoriesVertically; // @synthesize shouldDisplayCategoriesVertically=_shouldDisplayCategoriesVertically;
@property(retain, nonatomic) id <NSObject> actionRegistryFilledNotificationObserver; // @synthesize actionRegistryFilledNotificationObserver=_actionRegistryFilledNotificationObserver;
@property(readonly, nonatomic) WFActionDrawerResultsController *actionDrawerResultsController; // @synthesize actionDrawerResultsController=_actionDrawerResultsController;
@property(nonatomic) __weak id <WFActionDrawerSuggestionsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)reloadCategoriesSection;
- (_Bool)moveToState:(id)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) WFActionDrawerState *state;
- (void)categoriesTableViewCell:(id)arg1 didSelectCategoryForContentType:(id)arg2 title:(id)arg3;
- (void)categoriesTableViewCellDidSelectCategoryScripting:(id)arg1 title:(id)arg2;
- (void)categoriesTableViewCellDidSelectCategoryFavorites:(id)arg1 title:(id)arg2;
- (void)categoriesTableViewCellDidSelectCategoryApps:(id)arg1 title:(id)arg2;
- (void)siriSuggestionsTableViewCell:(id)arg1 infoButtonTappedForSuggestion:(id)arg2;
- (void)siriSuggestionsTableViewCell:(id)arg1 didSelectAction:(id)arg2;
- (void)actionCell:(id)arg1 infoButtonTappedForAction:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewWillLayoutSubviews;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)scrollToTop;
@property(nonatomic) _Bool scrollsToTop;
- (void)reloadViews;
- (void)viewDidLoad;
- (void)loadView;
@property(readonly, nonatomic) NSArray *contentTypeCategories;
- (void)dealloc;
- (id)initWithActionDrawerResultsController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <WorkflowUI/CNAutocompleteResultsTableViewControllerDelegate-Protocol.h>
#import <WorkflowUI/CNAutocompleteSearchConsumer-Protocol.h>
#import <WorkflowUI/CNComposeRecipientTextViewDelegate-Protocol.h>

@class CNAutocompleteFetchContext, CNAutocompleteResultsTableViewController, CNAutocompleteSearchManager, CNComposeRecipientTextView, CNContactStore, NSArray, NSLayoutConstraint, NSMutableArray, NSNumber, NSSet, NSString, WFContactPickerCoordinator;
@protocol WFRecipientFieldViewControllerDelegate;

@interface WFRecipientFieldViewController : UIViewController <CNComposeRecipientTextViewDelegate, CNAutocompleteResultsTableViewControllerDelegate, CNAutocompleteSearchConsumer>
{
    CNAutocompleteSearchManager *_searchManager;
    NSSet *_supportedPersonProperties;
    NSString *_fieldLabel;
    id <WFRecipientFieldViewControllerDelegate> _delegate;
    WFContactPickerCoordinator *_contactPickerCoordinator;
    CNAutocompleteResultsTableViewController *_autocompleteResultsController;
    NSLayoutConstraint *_composeHeaderHeightConstraint;
    CNComposeRecipientTextView *_composeTextView;
    CNAutocompleteFetchContext *_fetchContext;
    CNContactStore *_contactStore;
    NSMutableArray *_searchResults;
    NSNumber *_lastSearchID;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *lastSearchID; // @synthesize lastSearchID=_lastSearchID;
@property(retain, nonatomic) NSMutableArray *searchResults; // @synthesize searchResults=_searchResults;
@property(readonly, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
@property(readonly, nonatomic) CNAutocompleteFetchContext *fetchContext; // @synthesize fetchContext=_fetchContext;
@property(retain, nonatomic) CNComposeRecipientTextView *composeTextView; // @synthesize composeTextView=_composeTextView;
@property(retain, nonatomic) NSLayoutConstraint *composeHeaderHeightConstraint; // @synthesize composeHeaderHeightConstraint=_composeHeaderHeightConstraint;
@property(readonly, nonatomic) CNAutocompleteResultsTableViewController *autocompleteResultsController; // @synthesize autocompleteResultsController=_autocompleteResultsController;
@property(retain, nonatomic) WFContactPickerCoordinator *contactPickerCoordinator; // @synthesize contactPickerCoordinator=_contactPickerCoordinator;
@property(nonatomic) __weak id <WFRecipientFieldViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *fieldLabel; // @synthesize fieldLabel=_fieldLabel;
@property(copy, nonatomic) NSSet *supportedPersonProperties; // @synthesize supportedPersonProperties=_supportedPersonProperties;
- (void)_updateFetchContextChosenAddresses;
- (void)_resetSearchResults;
- (void)_cancelActiveSearchClearingText:(_Bool)arg1;
- (_Bool)hasActiveSearch;
- (void)_finishedSearching;
- (void)_startSearch:(id)arg1;
- (void)_addSearchResults:(id)arg1 forTask:(id)arg2;
@property(copy, nonatomic) NSArray *recipients;
@property(readonly, nonatomic) CNAutocompleteSearchManager *searchManager; // @synthesize searchManager=_searchManager;
- (void)_presentContactViewControllerForRecipient:(id)arg1;
- (void)autocompleteResultsController:(id)arg1 didSelectRecipient:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)autocompleteResultsController:(id)arg1 didRequestInfoAboutRecipient:(id)arg2;
- (_Bool)recipientViewShouldIgnoreFirstResponderChanges:(id)arg1;
- (void)composeHeaderView:(id)arg1 didChangeSize:(struct CGSize)arg2;
- (id)composeRecipientView:(id)arg1 composeRecipientForAddress:(id)arg2;
- (void)composeRecipientViewDidFinishPickingRecipient:(id)arg1;
- (void)composeRecipientViewRequestAddRecipient:(id)arg1;
- (void)composeRecipientView:(id)arg1 didFinishEnteringAddress:(id)arg2;
- (void)composeRecipientView:(id)arg1 didRemoveRecipient:(id)arg2;
- (void)composeRecipientView:(id)arg1 didAddRecipient:(id)arg2;
- (void)composeRecipientView:(id)arg1 textDidChange:(id)arg2;
- (void)finishedTaskWithID:(id)arg1;
- (void)finishedSearchingForCorecipients;
- (void)consumeCorecipientSearchResults:(id)arg1 taskID:(id)arg2;
- (void)finishedSearchingForAutocompleteResults;
- (void)consumeAutocompleteSearchResults:(id)arg1 taskID:(id)arg2;
@property(copy, nonatomic) NSArray *entries;
- (void)commitRemainingText;
- (void)done:(id)arg1;
- (void)cancel:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (void)loadView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


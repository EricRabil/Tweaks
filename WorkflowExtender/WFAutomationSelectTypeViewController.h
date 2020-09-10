//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@class NSArray, NSString, WFTriggerManager;
@protocol WFAutomationSelectTypeViewControllerDelegate;

@interface WFAutomationSelectTypeViewController: NSObject
{
    id <WFAutomationSelectTypeViewControllerDelegate> _delegate;
    WFTriggerManager *_triggerManager;
    NSArray *_tableContent;
}

+ (id)buildTableContent;
+ (id)allKnownTriggersSortedAsInUI;
+ (id)allTriggersByGroupIdentifier;
+ (id)triggerGroupTitleForIdentifier:(id)arg1;
+ (id)sortedTriggerGroupIdentifiers;
@property(readonly, nonatomic) NSArray *tableContent; // @synthesize tableContent=_tableContent;
@property(readonly, nonatomic) WFTriggerManager *triggerManager; // @synthesize triggerManager=_triggerManager;
@property(nonatomic) __weak id <WFAutomationSelectTypeViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (Class)triggerSourceClassForIndexPath:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidLoad;
- (id)initWithTriggerManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

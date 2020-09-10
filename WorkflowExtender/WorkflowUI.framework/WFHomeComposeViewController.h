//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WorkflowUI/WFComposeViewController.h>

@class HMHome;
@protocol WFHomeComposeViewControllerDelegate;

@interface WFHomeComposeViewController : WFComposeViewController
{
    HMHome *_home;
}

+ (void)preloadActionRegistryIfNeeded;
+ (void)preloadHomeManager;
- (void).cxx_destruct;
@property(retain, nonatomic) HMHome *home; // @synthesize home=_home;
- (void)didTapDone;
- (id)doneBarButtonItem;
- (void)dismissForTutorial:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithWorkflow:(id)arg1;
- (id)initWithHomeWorkflow:(id)arg1 actionSetBuilder:(id)arg2;
- (id)initWithHomeWorkflow:(id)arg1 actionSetBuilder:(id)arg2 home:(id)arg3;

// Remaining properties
@property(nonatomic) __weak id <WFHomeComposeViewControllerDelegate> delegate; // @dynamic delegate;

@end


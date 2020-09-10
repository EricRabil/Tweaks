//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WorkflowUI/CNContactPickerDelegate-Protocol.h>
#import <WorkflowUI/CNContactViewControllerDelegate-Protocol.h>
#import <WorkflowUI/UIPopoverPresentationControllerDelegate-Protocol.h>

@class NSSet, NSString, UIViewController, WFAlertPresentationSource;

@interface WFContactPickerCoordinator : NSObject <CNContactPickerDelegate, CNContactViewControllerDelegate, UIPopoverPresentationControllerDelegate>
{
    NSSet *_supportedPersonProperties;
    WFAlertPresentationSource *_presentationSource;
    UIViewController *_presentingViewController;
    CDUnknownBlockType _completionHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(retain, nonatomic) WFAlertPresentationSource *presentationSource; // @synthesize presentationSource=_presentationSource;
@property(copy, nonatomic) NSSet *supportedPersonProperties; // @synthesize supportedPersonProperties=_supportedPersonProperties;
- (void)presentationControllerDidDismiss:(id)arg1;
- (void)contactPicker:(id)arg1 didSelectContactProperty:(id)arg2;
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)contactPickerDidCancel:(id)arg1;
- (_Bool)contactViewController:(id)arg1 shouldPerformDefaultActionForContactProperty:(id)arg2;
- (id)supportedContactProperties;
- (id)contactWithMatchingPropertyAndMultivalueIndex:(id)arg1;
- (void)finishWithContact:(id)arg1;
- (void)dismissPersonViewController;
- (void)presentViewController:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)presentHandlePickerForContact:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)presentContactPickerWithCompletionHandler:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


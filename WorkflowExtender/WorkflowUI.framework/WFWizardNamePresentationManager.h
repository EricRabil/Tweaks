//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UINavigationController, WFWorkflowWizardNameViewController;

@interface WFWizardNamePresentationManager : NSObject
{
    _Bool _presentsModally;
    UINavigationController *_navigationController;
    WFWorkflowWizardNameViewController *_wizardNameViewController;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool presentsModally; // @synthesize presentsModally=_presentsModally;
@property(readonly, nonatomic) WFWorkflowWizardNameViewController *wizardNameViewController; // @synthesize wizardNameViewController=_wizardNameViewController;
@property(readonly, nonatomic) UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
- (void)dismiss;
- (void)presentModal;
- (void)present;
- (id)initWithNavigationController:(id)arg1 wizardNameViewController:(id)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIInputView.h>

@class UIButton;
@protocol WFVariableConfigurationAccessoryViewDelegate;

@interface WFVariableConfigurationAccessoryView : UIInputView
{
    id <WFVariableConfigurationAccessoryViewDelegate> _delegate;
    unsigned long long _exitAccessory;
    UIButton *_keyboardButton;
    UIButton *_clearButton;
    UIButton *_renameButton;
    UIButton *_revealActionButton;
    UIButton *_doneButton;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIButton *doneButton; // @synthesize doneButton=_doneButton;
@property(nonatomic) __weak UIButton *revealActionButton; // @synthesize revealActionButton=_revealActionButton;
@property(nonatomic) __weak UIButton *renameButton; // @synthesize renameButton=_renameButton;
@property(nonatomic) __weak UIButton *clearButton; // @synthesize clearButton=_clearButton;
@property(nonatomic) __weak UIButton *keyboardButton; // @synthesize keyboardButton=_keyboardButton;
@property(nonatomic) unsigned long long exitAccessory; // @synthesize exitAccessory=_exitAccessory;
@property(nonatomic) __weak id <WFVariableConfigurationAccessoryViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool canRevealAction;
@property(nonatomic) _Bool canRename;
- (void)revealActionPressed;
- (void)donePressed;
- (void)renamePressed;
- (void)returnToKeyboardPressed;
- (void)clearPressed;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end


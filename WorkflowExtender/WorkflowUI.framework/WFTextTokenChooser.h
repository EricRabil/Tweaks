//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSIndexSet, NSSet, NSString, WFAlert, WFVariable;
@protocol WFUIKitUserInterface;

@interface WFTextTokenChooser : NSObject
{
    _Bool _showsClearButton;
    _Bool _showsDoneButton;
    _Bool _prefersItemPickerSheetPresentation;
    NSString *_title;
    NSString *_message;
    NSString *_noChoicesMessage;
    NSSet *_allowedVariableTypes;
    NSArray *_additionalButtons;
    WFVariable *_selectedVariable;
    NSIndexSet *_selectedButtonIndexes;
    CDUnknownBlockType _choiceHandler;
    CDUnknownBlockType _cancelHandler;
    WFAlert *_presentedAlert;
    NSArray *_auxiliaryButtons;
    id <WFUIKitUserInterface> _userInterface;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WFUIKitUserInterface> userInterface; // @synthesize userInterface=_userInterface;
@property(copy, nonatomic) NSArray *auxiliaryButtons; // @synthesize auxiliaryButtons=_auxiliaryButtons;
@property(retain, nonatomic) WFAlert *presentedAlert; // @synthesize presentedAlert=_presentedAlert;
@property(copy, nonatomic) CDUnknownBlockType cancelHandler; // @synthesize cancelHandler=_cancelHandler;
@property(copy, nonatomic) CDUnknownBlockType choiceHandler; // @synthesize choiceHandler=_choiceHandler;
@property(retain, nonatomic) NSIndexSet *selectedButtonIndexes; // @synthesize selectedButtonIndexes=_selectedButtonIndexes;
@property(retain, nonatomic) WFVariable *selectedVariable; // @synthesize selectedVariable=_selectedVariable;
@property(nonatomic) _Bool prefersItemPickerSheetPresentation; // @synthesize prefersItemPickerSheetPresentation=_prefersItemPickerSheetPresentation;
@property(nonatomic) _Bool showsDoneButton; // @synthesize showsDoneButton=_showsDoneButton;
@property(nonatomic) _Bool showsClearButton; // @synthesize showsClearButton=_showsClearButton;
@property(copy, nonatomic) NSArray *additionalButtons; // @synthesize additionalButtons=_additionalButtons;
@property(copy, nonatomic) NSSet *allowedVariableTypes; // @synthesize allowedVariableTypes=_allowedVariableTypes;
@property(copy, nonatomic) NSString *noChoicesMessage; // @synthesize noChoicesMessage=_noChoicesMessage;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)alertButtonForVariable:(id)arg1 selected:(_Bool)arg2;
- (void)updateButtonsInAlert:(id)arg1;
- (void)dismissWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)presentWithVariableProvider:(id)arg1 variableUIDelegate:(id)arg2 userInterface:(id)arg3 fromSource:(id)arg4;
- (id)init;

@end


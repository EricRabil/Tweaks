//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WorkflowUI/NSObject-Protocol.h>

@class WFAction, WFParameter, WFParameterPickerViewController;

@protocol WFParameterPickerViewControllerDelegate <NSObject>
- (void)parameterPicker:(WFParameterPickerViewController *)arg1 didFinishWithParameter:(WFParameter *)arg2 ofAction:(WFAction *)arg3;
- (void)parameterPickerDidCancel:(WFParameterPickerViewController *)arg1;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WorkflowUI/HUServiceGridViewControllerDelegate-Protocol.h>
#import <WorkflowUI/NSObject-Protocol.h>

@class HUServicePickerViewController, NSSet;

@protocol HUServicePickerViewControllerDelegate <NSObject, HUServiceGridViewControllerDelegate>
- (void)servicePickerDidCancel:(HUServicePickerViewController *)arg1;
- (void)servicePickerDidFinish:(HUServicePickerViewController *)arg1 selectedServices:(NSSet *)arg2;
@end

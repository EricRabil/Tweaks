//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WorkflowUI/NSObject-Protocol.h>

@class WFGalleryImportViewController, WFWorkflow;

@protocol WFGalleryImportViewControllerDelegate <NSObject>
- (void)galleryImportViewController:(WFGalleryImportViewController *)arg1 didFinishWithWorkflow:(WFWorkflow *)arg2;
- (void)galleryImportViewControllerDidCancel:(WFGalleryImportViewController *)arg1;
@end

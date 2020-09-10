//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import <WorkflowUI/UIDocumentPickerDelegate-Protocol.h>
#import <WorkflowUI/UIImagePickerControllerDelegate-Protocol.h>
#import <WorkflowUI/UINavigationControllerDelegate-Protocol.h>
#import <WorkflowUI/WFWorkflowWizardNameCellDelegate-Protocol.h>

@class NSString, WFAddToHomeIconPreviewCell, WFHomeScreenIcon, WFWorkflow, WFWorkflowWizardNameCell;
@protocol WFAddToHomeScreenViewControllerDelegate;

@interface WFAddToHomeScreenViewController : UITableViewController <WFWorkflowWizardNameCellDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate, UIDocumentPickerDelegate>
{
    id <WFAddToHomeScreenViewControllerDelegate> _delegate;
    WFWorkflow *_workflow;
    WFHomeScreenIcon *_icon;
    WFAddToHomeIconPreviewCell *_previewCell;
    WFWorkflowWizardNameCell *_editorCell;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WFWorkflowWizardNameCell *editorCell; // @synthesize editorCell=_editorCell;
@property(retain, nonatomic) WFAddToHomeIconPreviewCell *previewCell; // @synthesize previewCell=_previewCell;
@property(retain, nonatomic) WFHomeScreenIcon *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) WFWorkflow *workflow; // @synthesize workflow=_workflow;
@property(nonatomic) __weak id <WFAddToHomeScreenViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)documentPicker:(id)arg1 didPickDocumentsAtURLs:(id)arg2;
- (void)didTapAdd;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)presentPickerControllerWithSourceType:(long long)arg1;
- (void)workflowWizardNameCellDidSelectEditIcon:(id)arg1;
- (void)workflowWizardNameCell:(id)arg1 didUpdateName:(id)arg2;
- (void)registerCells;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)initWithWorkflow:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

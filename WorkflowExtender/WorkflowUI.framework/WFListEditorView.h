//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <WorkflowUI/UITableViewDataSource-Protocol.h>
#import <WorkflowUI/UITableViewDelegate-Protocol.h>
#import <WorkflowUI/WFListEditorViewCellDelegate-Protocol.h>

@class NSArray, NSSet, NSString, UITableView;
@protocol WFComponentNavigationContext, WFListEditorViewDelegate, WFVariableProvider, WFVariableUIDelegate;

@interface WFListEditorView : UIView <UITableViewDataSource, UITableViewDelegate, WFListEditorViewCellDelegate>
{
    _Bool _variablesDisabled;
    _Bool _standaloneVariablesAsContentItems;
    NSString *_localizedNewItemTypeName;
    id <WFListEditorViewDelegate> _delegate;
    NSArray *_items;
    NSSet *_allowedValueTypes;
    id <WFVariableProvider> _variableProvider;
    id <WFVariableUIDelegate> _variableUIDelegate;
    NSSet *_allowedVariableTypes;
    id <WFComponentNavigationContext> _navigationContext;
    CDUnknownBlockType _updateBlock;
    UITableView *_tableView;
}

+ (Class)cellClass;
- (void).cxx_destruct;
@property(readonly, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) CDUnknownBlockType updateBlock; // @synthesize updateBlock=_updateBlock;
@property(nonatomic) __weak id <WFComponentNavigationContext> navigationContext; // @synthesize navigationContext=_navigationContext;
@property(nonatomic) _Bool standaloneVariablesAsContentItems; // @synthesize standaloneVariablesAsContentItems=_standaloneVariablesAsContentItems;
@property(nonatomic) _Bool variablesDisabled; // @synthesize variablesDisabled=_variablesDisabled;
@property(copy, nonatomic) NSSet *allowedVariableTypes; // @synthesize allowedVariableTypes=_allowedVariableTypes;
@property(nonatomic) __weak id <WFVariableUIDelegate> variableUIDelegate; // @synthesize variableUIDelegate=_variableUIDelegate;
@property(nonatomic) __weak id <WFVariableProvider> variableProvider; // @synthesize variableProvider=_variableProvider;
@property(copy, nonatomic) NSSet *allowedValueTypes; // @synthesize allowedValueTypes=_allowedValueTypes;
@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) __weak id <WFListEditorViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)accessibilityElements;
- (_Bool)isAccessibilityElement;
- (void)keyboardWillChangeFrame:(id)arg1;
- (void)listEditorCell:(id)arg1 didUpdateToValue:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)addNewItemIndexPath;
- (void)configureCell:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)configureCell:(id)arg1 withItem:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)insertNewItemOfType:(long long)arg1;
- (void)updateCells;
- (void)beginEditingWithContext:(id)arg1;
- (void)appendNewItem;
- (void)deleteItemAtIndex:(unsigned long long)arg1;
- (void)movedItemAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)insertItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)updatedItem:(id)arg1 atIndex:(unsigned long long)arg2;
@property(nonatomic, getter=isScrollEnabled) _Bool scrollEnabled;
@property(copy, nonatomic) NSString *localizedNewItemTypeName; // @synthesize localizedNewItemTypeName=_localizedNewItemTypeName;
@property(nonatomic, getter=isEditable) _Bool editable;
- (void)_setItems:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

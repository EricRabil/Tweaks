//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WorkflowUI/NSObject-Protocol.h>

@class UIDragItem, UIDropInteraction, UIDropProposal, UITargetedDragPreview;
@protocol UIDragAnimating, UIDropSession;

@protocol UIDropInteractionDelegate <NSObject>

@optional
- (void)dropInteraction:(UIDropInteraction *)arg1 item:(UIDragItem *)arg2 willAnimateDropWithAnimator:(id <UIDragAnimating>)arg3;
- (UITargetedDragPreview *)dropInteraction:(UIDropInteraction *)arg1 previewForDroppingItem:(UIDragItem *)arg2 withDefault:(UITargetedDragPreview *)arg3;
- (void)dropInteraction:(UIDropInteraction *)arg1 sessionDidEnd:(id <UIDropSession>)arg2;
- (void)dropInteraction:(UIDropInteraction *)arg1 concludeDrop:(id <UIDropSession>)arg2;
- (void)dropInteraction:(UIDropInteraction *)arg1 performDrop:(id <UIDropSession>)arg2;
- (void)dropInteraction:(UIDropInteraction *)arg1 sessionDidExit:(id <UIDropSession>)arg2;
- (UIDropProposal *)dropInteraction:(UIDropInteraction *)arg1 sessionDidUpdate:(id <UIDropSession>)arg2;
- (void)dropInteraction:(UIDropInteraction *)arg1 sessionDidEnter:(id <UIDropSession>)arg2;
- (_Bool)dropInteraction:(UIDropInteraction *)arg1 canHandleSession:(id <UIDropSession>)arg2;
@end


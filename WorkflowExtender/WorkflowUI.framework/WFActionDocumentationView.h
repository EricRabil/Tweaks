//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIStackView, UITextView, WFAction, WFActionDrawerButton;
@protocol WFActionDocumentationViewDelegate;

@interface WFActionDocumentationView : UIView
{
    id <WFActionDocumentationViewDelegate> _delegate;
    WFAction *_action;
    WFActionDrawerButton *_favoriteButton;
    WFActionDrawerButton *_addToWorkflowButton;
    UIStackView *_buttonStackView;
    UITextView *_descriptionView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UITextView *descriptionView; // @synthesize descriptionView=_descriptionView;
@property(nonatomic) __weak UIStackView *buttonStackView; // @synthesize buttonStackView=_buttonStackView;
@property(nonatomic) __weak WFActionDrawerButton *addToWorkflowButton; // @synthesize addToWorkflowButton=_addToWorkflowButton;
@property(nonatomic) __weak WFActionDrawerButton *favoriteButton; // @synthesize favoriteButton=_favoriteButton;
@property(retain, nonatomic) WFAction *action; // @synthesize action=_action;
@property(nonatomic) __weak id <WFActionDocumentationViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateFavoriteButton;
- (void)didSelectAddToThisWorkflow;
- (void)didSelectFavorite;
- (void)configureWithAction:(id)arg1;
- (void)updateButtonVisibility;
- (id)init;

@end


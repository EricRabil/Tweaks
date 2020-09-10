//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class NSArray, NSLayoutConstraint, UIImageView, UILabel, UIView, WFModuleAppearance;
@protocol WFContentClassesToolbarDelegate;

@interface WFContentClassesToolbar : UICollectionReusableView
{
    _Bool _toolbarDisabled;
    _Bool _highlighted;
    WFModuleAppearance *_appearance;
    id <WFContentClassesToolbarDelegate> _delegate;
    NSArray *_contentClasses;
    double _horizontalInset;
    UIView *_contentView;
    UILabel *_typesLabel;
    UIImageView *_chevronImageView;
    NSLayoutConstraint *_contentViewLeadingConstraint;
    NSLayoutConstraint *_contentViewTrailingConstraint;
    NSLayoutConstraint *_chevronVisibleConstraint;
    NSLayoutConstraint *_chevronHiddenConstraint;
}

+ (double)preferredHeight;
+ (id)headingFont;
+ (struct NSDirectionalEdgeInsets)contentViewInsets;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSLayoutConstraint *chevronHiddenConstraint; // @synthesize chevronHiddenConstraint=_chevronHiddenConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *chevronVisibleConstraint; // @synthesize chevronVisibleConstraint=_chevronVisibleConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *contentViewTrailingConstraint; // @synthesize contentViewTrailingConstraint=_contentViewTrailingConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *contentViewLeadingConstraint; // @synthesize contentViewLeadingConstraint=_contentViewLeadingConstraint;
@property(nonatomic) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic) __weak UIImageView *chevronImageView; // @synthesize chevronImageView=_chevronImageView;
@property(nonatomic) __weak UILabel *typesLabel; // @synthesize typesLabel=_typesLabel;
@property(nonatomic) __weak UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) double horizontalInset; // @synthesize horizontalInset=_horizontalInset;
@property(nonatomic) _Bool toolbarDisabled; // @synthesize toolbarDisabled=_toolbarDisabled;
@property(copy, nonatomic) NSArray *contentClasses; // @synthesize contentClasses=_contentClasses;
@property(nonatomic) __weak id <WFContentClassesToolbarDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)accessibilityActivate;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (_Bool)isAccessibilityElement;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)fadeOutHighlight;
- (void)unhighlight;
- (void)highlight;
- (void)typesLabelTapped;
- (void)updateTypesLabel;
- (void)updateAppearance;
@property(retain, nonatomic) WFModuleAppearance *appearance; // @synthesize appearance=_appearance;
- (id)initWithFrame:(struct CGRect)arg1;

@end


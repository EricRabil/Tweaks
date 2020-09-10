//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIButton, UIImage;
@protocol WFVariableConfigurationHeaderViewDelegate;

@interface WFVariableConfigurationHeaderView : UIView
{
    id <WFVariableConfigurationHeaderViewDelegate> _delegate;
    UIButton *_titleButton;
    UIButton *_typeButton;
}

+ (id)disclosureImage;
- (void).cxx_destruct;
@property(nonatomic) __weak UIButton *typeButton; // @synthesize typeButton=_typeButton;
@property(nonatomic) __weak UIButton *titleButton; // @synthesize titleButton=_titleButton;
@property(nonatomic) __weak id <WFVariableConfigurationHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)typeButtonTapped;
@property(nonatomic) _Bool showsVariableType;
@property(copy, nonatomic) NSString *variableType;
@property(copy, nonatomic) NSString *variableTitle;
@property(retain, nonatomic) UIImage *variableIcon;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end


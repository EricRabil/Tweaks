//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel, UIStackView, WFRowOfIconsView;

@interface WFAutomationNotificationContentView : UIView
{
    UIStackView *_stackView;
    WFRowOfIconsView *_actionIconsView;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) WFRowOfIconsView *actionIconsView; // @synthesize actionIconsView=_actionIconsView;
@property(readonly, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
- (void)updateUIFromNotification:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end


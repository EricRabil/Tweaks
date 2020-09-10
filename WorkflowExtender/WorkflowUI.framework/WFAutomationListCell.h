//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class HFTriggerItem, UIColor, UILabel, WFAutomationSummaryIconsView, WFConfiguredTrigger, WFWorkflow;

@interface WFAutomationListCell : UITableViewCell
{
    WFConfiguredTrigger *_configuredTrigger;
    WFWorkflow *_workflow;
    HFTriggerItem *_homeTrigger;
    WFAutomationSummaryIconsView *_summaryIconsView;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    UIColor *_normalBackgroundColor;
    UIColor *_selectedBackgroundColor;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIColor *selectedBackgroundColor; // @synthesize selectedBackgroundColor=_selectedBackgroundColor;
@property(readonly, nonatomic) UIColor *normalBackgroundColor; // @synthesize normalBackgroundColor=_normalBackgroundColor;
@property(readonly, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) WFAutomationSummaryIconsView *summaryIconsView; // @synthesize summaryIconsView=_summaryIconsView;
@property(retain, nonatomic) HFTriggerItem *homeTrigger; // @synthesize homeTrigger=_homeTrigger;
@property(retain, nonatomic) WFWorkflow *workflow; // @synthesize workflow=_workflow;
@property(retain, nonatomic) WFConfiguredTrigger *configuredTrigger; // @synthesize configuredTrigger=_configuredTrigger;
- (void)prepareForReuse;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updateUI;
- (void)setConfiguredTrigger:(id)arg1 workflow:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end


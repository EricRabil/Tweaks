//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UILabel, UIStackView, WFRowOfIconsView;

@interface WFShortcutSummaryCell : UITableViewCell
{
    WFRowOfIconsView *_actionIconsView;
    UILabel *_summaryLabel;
    UIStackView *_mainStackView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIStackView *mainStackView; // @synthesize mainStackView=_mainStackView;
@property(retain, nonatomic) UILabel *summaryLabel; // @synthesize summaryLabel=_summaryLabel;
@property(retain, nonatomic) WFRowOfIconsView *actionIconsView; // @synthesize actionIconsView=_actionIconsView;
- (void)addActionViewIfNeeded;
- (void)removeActionViewIfNeeded;
- (void)configureWithTitle:(id)arg1 actionIcons:(id)arg2;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

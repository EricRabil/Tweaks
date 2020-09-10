//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel;

@interface WFTriggerTypeCell : UITableViewCell
{
    Class _triggerTypeClass;
    UIImageView *_triggerIconView;
    UILabel *_triggerTitleLabel;
    UILabel *_triggerDescriptionLabel;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UILabel *triggerDescriptionLabel; // @synthesize triggerDescriptionLabel=_triggerDescriptionLabel;
@property(readonly, nonatomic) UILabel *triggerTitleLabel; // @synthesize triggerTitleLabel=_triggerTitleLabel;
@property(readonly, nonatomic) UIImageView *triggerIconView; // @synthesize triggerIconView=_triggerIconView;
@property(retain, nonatomic) Class triggerTypeClass; // @synthesize triggerTypeClass=_triggerTypeClass;
- (void)updateUI;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

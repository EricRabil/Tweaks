//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSArray, UISegmentedControl, WFSegmentedControlTableItem, WFSegmentedControlValue;

@interface WFSegmentedControlTableCell : UITableViewCell
{
    WFSegmentedControlTableItem *_tableItem;
    UISegmentedControl *_segmentedControl;
    NSArray *_possibleValues;
    WFSegmentedControlValue *_selectedValue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WFSegmentedControlValue *selectedValue; // @synthesize selectedValue=_selectedValue;
@property(copy, nonatomic) NSArray *possibleValues; // @synthesize possibleValues=_possibleValues;
@property(retain, nonatomic) UISegmentedControl *segmentedControl; // @synthesize segmentedControl=_segmentedControl;
@property(nonatomic) __weak WFSegmentedControlTableItem *tableItem; // @synthesize tableItem=_tableItem;
- (void)valueChanged:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end


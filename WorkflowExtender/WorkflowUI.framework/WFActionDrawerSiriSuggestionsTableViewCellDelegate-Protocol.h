//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WorkflowUI/NSObject-Protocol.h>

@class WFAction, WFActionDrawerSiriSuggestionsTableViewCell;

@protocol WFActionDrawerSiriSuggestionsTableViewCellDelegate <NSObject>
- (void)siriSuggestionsTableViewCell:(WFActionDrawerSiriSuggestionsTableViewCell *)arg1 infoButtonTappedForSuggestion:(WFAction *)arg2;
- (void)siriSuggestionsTableViewCell:(WFActionDrawerSiriSuggestionsTableViewCell *)arg1 didSelectAction:(WFAction *)arg2;
@end


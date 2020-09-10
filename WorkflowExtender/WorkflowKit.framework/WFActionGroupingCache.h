//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface WFActionGroupingCache : NSObject
{
    NSMutableDictionary *_actionsByGroupingIdentifier;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableDictionary *actionsByGroupingIdentifier; // @synthesize actionsByGroupingIdentifier=_actionsByGroupingIdentifier;
- (id)actionsForGroupingIdentifier:(id)arg1;
- (void)sortActionsForGroupingIdentifier:(id)arg1 withWorkflowActions:(id)arg2;
- (void)removeAction:(id)arg1;
- (void)addAction:(id)arg1 sortingWithWorkflowActions:(id)arg2;
- (id)init;

@end


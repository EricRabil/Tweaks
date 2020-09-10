//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WorkflowKit/NSObject-Protocol.h>

@class NSArray, NSOrderedSet, NSString, WFAction;
@protocol WFOutputTraversalContext, WFVariableObserver;

@protocol WFVariableProvider <NSObject>
@property(readonly, nonatomic) NSArray *workflowInputClasses;
@property(readonly, nonatomic) NSArray *availableOutputActions;
@property(readonly, nonatomic) NSArray *availableVariableNames;
- (void)removeVariableObserver:(id <WFVariableObserver>)arg1;
- (void)addVariableObserver:(id <WFVariableObserver>)arg1;
- (NSArray *)actionsProvidingVariableName:(NSString *)arg1;
- (WFAction *)actionProvidingVariableWithOutputUUID:(NSString *)arg1;
- (_Bool)isVariableWithOutputUUIDAvailable:(NSString *)arg1;
- (_Bool)hasAvailableActionOutputVariables;
- (NSOrderedSet *)possibleContentClassesForVariableNamed:(NSString *)arg1 context:(id <WFOutputTraversalContext>)arg2;
- (_Bool)isVariableWithNameAvailable:(NSString *)arg1;
- (_Bool)hasAvailableVariables;
@end

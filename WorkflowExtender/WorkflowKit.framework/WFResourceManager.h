//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WorkflowKit/WFResourceNodeDelegate-Protocol.h>

@class NSArray, NSMapTable, NSMutableArray, NSMutableOrderedSet, NSOrderedSet, NSSet, NSString;
@protocol OS_dispatch_queue;

@interface WFResourceManager : NSObject <WFResourceNodeDelegate>
{
    NSMutableArray *_resourceNodes;
    _Bool _resourcesAvailable;
    _Bool _resourcesRequiredForDisplayAvailable;
    _Bool _didEvaluateAvailabilityOfNodes;
    NSMutableOrderedSet *_unavailableResources;
    NSOrderedSet *_unavailableResourceErrors;
    NSMapTable *_targetSelectorTable;
    NSObject<OS_dispatch_queue> *_stateAccessQueue;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *stateAccessQueue; // @synthesize stateAccessQueue=_stateAccessQueue;
@property(readonly, nonatomic) _Bool didEvaluateAvailabilityOfNodes; // @synthesize didEvaluateAvailabilityOfNodes=_didEvaluateAvailabilityOfNodes;
@property(retain, nonatomic) NSMapTable *targetSelectorTable; // @synthesize targetSelectorTable=_targetSelectorTable;
@property(retain, nonatomic) NSArray *resourceNodes; // @synthesize resourceNodes=_resourceNodes;
@property(retain, nonatomic) NSMutableOrderedSet *unavailableResources; // @synthesize unavailableResources=_unavailableResources;
@property(nonatomic) _Bool resourcesRequiredForDisplayAvailable; // @synthesize resourcesRequiredForDisplayAvailable=_resourcesRequiredForDisplayAvailable;
- (void)addResource:(id)arg1 withRequiredResources:(id)arg2;
- (void)addResource:(id)arg1;
- (void)removeTarget:(id)arg1 selector:(SEL)arg2;
- (void)addTarget:(id)arg1 selector:(SEL)arg2;
- (id)selectorSetForTarget:(id)arg1;
- (void)notifyTargets;
@property(retain, nonatomic) NSOrderedSet *unavailableResourceErrors; // @synthesize unavailableResourceErrors=_unavailableResourceErrors;
@property(nonatomic) _Bool resourcesAvailable; // @synthesize resourcesAvailable=_resourcesAvailable;
- (void)resourceNodeAvailabilityChanged:(id)arg1;
- (void)evaluateAvailabilityOfNodesIfNeeded;
- (void)evaluateAvailabilityOfNodesWithChangedNode:(id)arg1;
- (_Bool)nodeIsAvailable:(id)arg1 error:(id *)arg2;
- (_Bool)nodeIsRelevant:(id)arg1;
- (id)relevantNodes;
- (void)addResourceObjectsOfClassesOrProtocols:(id)arg1 withinNode:(id)arg2 toSet:(id)arg3;
- (id)resourceObjectsOfClasses:(id)arg1;
- (id)resourceObjectsConformingToProtocol:(id)arg1;
- (id)resourceObjectsOfClass:(Class)arg1;
- (void)makeAccessResourcesAvailableAtWorkflowLevelWithUserInterface:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)makeAccessResourcesAvailableAtGlobalLevelWithUserInterface:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)currentlyRequiredResourcesOfClass:(Class)arg1;
@property(readonly, nonatomic) NSSet *accessResources;
- (_Bool)currentlyRequiresResourceOfClass:(Class)arg1;
- (id)initWithDefinitions:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


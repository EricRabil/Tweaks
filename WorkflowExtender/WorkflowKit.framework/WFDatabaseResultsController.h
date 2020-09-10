//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WorkflowKit/WFDatabaseResultObserver-Protocol.h>

@class NSMapTable, NSOrderedSet, WFDatabase, WFDatabaseResult;

@interface WFDatabaseResultsController : NSObject <WFDatabaseResultObserver>
{
    WFDatabase *_database;
    WFDatabaseResult *_result;
    NSOrderedSet *_currentObjects;
    NSMapTable *_observers;
    CDUnknownBlockType _block;
    struct _WFDatabaseResultsSlice _slice;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(readonly, nonatomic) NSMapTable *observers; // @synthesize observers=_observers;
@property(copy, nonatomic) NSOrderedSet *currentObjects; // @synthesize currentObjects=_currentObjects;
@property(nonatomic) struct _WFDatabaseResultsSlice slice; // @synthesize slice=_slice;
@property(readonly, nonatomic) WFDatabaseResult *result; // @synthesize result=_result;
@property(readonly, nonatomic) WFDatabase *database; // @synthesize database=_database;
- (void)_databaseResult:(id)arg1 didUpdateObjects:(id)arg2 inserted:(id)arg3 removed:(id)arg4;
- (void)databaseResult:(id)arg1 didUpdateObjects:(id)arg2 inserted:(id)arg3 removed:(id)arg4;
- (void)removeObserver:(id)arg1;
- (void)addUpdateObserver:(id)arg1 selector:(SEL)arg2;
- (void)notify;
- (void)update;
- (unsigned long long)indexOfDescriptor:(id)arg1;
- (id)descriptorAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long count;
- (id)initWithResult:(id)arg1 slice:(struct _WFDatabaseResultsSlice)arg2 database:(id)arg3 block:(CDUnknownBlockType)arg4;

@end

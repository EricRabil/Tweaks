//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CKTransactionalComponentDataSourceState;
@protocol CKTransactionalComponentDataSourceStateModifying;

@interface CKTransactionalComponentDataSourceModificationPair : NSObject
{
    id <CKTransactionalComponentDataSourceStateModifying> _modification;
    CKTransactionalComponentDataSourceState *_state;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CKTransactionalComponentDataSourceState *state; // @synthesize state=_state;
@property(readonly, nonatomic) id <CKTransactionalComponentDataSourceStateModifying> modification; // @synthesize modification=_modification;
- (id)initWithModification:(id)arg1 state:(id)arg2;

@end

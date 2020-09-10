//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_source;

@interface WFDispatchSourceTimer : NSObject
{
    NSObject<OS_dispatch_source> *_source;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_dispatch_source> *source; // @synthesize source=_source;
- (void)cancel;
- (void)start;
- (_Bool)isCancelled;
- (void)dealloc;
- (id)initWithInterval:(double)arg1 repeatIntervalInt:(unsigned long long)arg2 queue:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (id)initWithInterval:(double)arg1 repeatInterval:(double)arg2 queue:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (id)initWithInterval:(double)arg1 queue:(id)arg2 handler:(CDUnknownBlockType)arg3;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WFActionEnvironment : NSObject
{
}

+ (id)currentEnvironment;
+ (id)environmentForWorkflowType:(id)arg1;
@property(readonly, nonatomic) _Bool isAppExtension;
@property(readonly, nonatomic) _Bool isWatchOS;
@property(readonly, nonatomic) _Bool isMemoryConstrained;

@end


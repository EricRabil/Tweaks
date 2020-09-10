//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WorkflowKit/NSObject-Protocol.h>

@class HMAddAccessoryRequest, HMHome, HMHomeManager;

@protocol HMHomeManagerDelegate <NSObject>

@optional
- (void)homeManager:(HMHomeManager *)arg1 didReceiveAddAccessoryRequest:(HMAddAccessoryRequest *)arg2;
- (void)homeManager:(HMHomeManager *)arg1 didRemoveHome:(HMHome *)arg2;
- (void)homeManager:(HMHomeManager *)arg1 didAddHome:(HMHome *)arg2;
- (void)homeManagerDidUpdatePrimaryHome:(HMHomeManager *)arg1;
- (void)homeManagerDidUpdateHomes:(HMHomeManager *)arg1;
- (void)homeManager:(HMHomeManager *)arg1 didUpdateAuthorizationStatus:(unsigned long long)arg2;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WorkflowKit/WFAppInstalledResource.h>

@class INCIntentExecutionInfo;

@interface WFIntentAvailableResource : WFAppInstalledResource
{
    INCIntentExecutionInfo *_executionInfo;
}

- (void).cxx_destruct;
- (void)updateAvailabilityWithUpdatedVersionRequirementError:(id)arg1;
- (void)refreshAvailability;
- (id)appIdentifier;
@property(readonly, nonatomic) INCIntentExecutionInfo *executionInfo; // @synthesize executionInfo=_executionInfo;

@end


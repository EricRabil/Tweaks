//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ComponentKit/CKStatefulViewComponentController.h>

#import <WorkflowUI/WFContactFieldDelegate-Protocol.h>

@class NSString;

@interface WFContactFieldComponentController : CKStatefulViewComponentController <WFContactFieldDelegate>
{
    _Bool _mounted;
}

+ (void)configureStatefulView:(id)arg1 forComponent:(id)arg2;
+ (id)newStatefulView:(id)arg1;
@property(nonatomic, getter=isMounted) _Bool mounted; // @synthesize mounted=_mounted;
- (id)viewControllerContainingContactField:(id)arg1;
- (void)willRelinquishStatefulView:(id)arg1;
- (void)didMount;
- (void)willUnmount;
- (void)didAcquireStatefulView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


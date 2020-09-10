//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ComponentKit/CKMemoizingComponent.h>

#import <WorkflowUI/WFActionEventObserver-Protocol.h>
#import <WorkflowUI/WFParameterEventObserver-Protocol.h>

@class NSString, WFModuleModel;

@interface WFModuleComponent : CKMemoizingComponent <WFParameterEventObserver, WFActionEventObserver>
{
    WFModuleModel *_model;
}

+ (id)newWithModel:(id)arg1 navigationContext:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) WFModuleModel *model; // @synthesize model=_model;
- (void)action:(id)arg1 parameterStateDidChangeForKey:(id)arg2;
- (void)actionNameDidChange:(id)arg1;
- (void)parameterAttributesDidChange:(id)arg1;
- (void)reflowComponentSynchronously;
- (void)reflowComponentAsynchronously;
- (struct CKComponentBoundsAnimation)boundsAnimationFromPreviousComponent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


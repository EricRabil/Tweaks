//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WorkflowUI/WFParameterComponent.h>

@class WFArrayParameter, WFArrayParameterState;

@interface WFArrayParameterComponent : WFParameterComponent
{
    WFArrayParameterState *_state;
    WFArrayParameter *_parameter;
    CDUnknownBlockType _updateBlock;
}

+ (id)newWithParameter:(id)arg1 state:(id)arg2 updateBlock:(CDUnknownBlockType)arg3 options:(struct WFParameterComponentOptions)arg4 variableProvider:(id)arg5 variableUIDelegate:(id)arg6 navigationContext:(id)arg7 labelsToAlignTo:(id)arg8;
+ (_Bool)standaloneVariablesAsContentItems;
+ (Class)stateClass;
- (void).cxx_destruct;
- (CDUnknownBlockType)updateBlock;
@property(readonly, nonatomic) __weak WFArrayParameter *parameter; // @synthesize parameter=_parameter;
- (void)arrayEditor:(id)arg1 confirmDeletion:(id)arg2;
- (void)notifyParameterObserverWithValues:(id)arg1 updateItem:(id)arg2;

@end


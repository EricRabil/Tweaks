//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ComponentKit/CKStatefulViewComponent.h>

@interface WFTextInputComponent : CKStatefulViewComponent
{
    CDUnknownBlockType _updateBlock;
    CKTypedComponentAction_789af415 _beginAction;
    CKTypedComponentAction_789af415 _doneAction;
    struct WFTextInputAttributes _attributes;
}

+ (id)newWithAttributes:(const struct WFTextInputAttributes *)arg1 updateBlock:(CDUnknownBlockType)arg2 beginAction:(CKTypedComponentAction_789af415)arg3 doneAction:(CKTypedComponentAction_789af415)arg4 size:(const struct CKComponentSize *)arg5;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) CKTypedComponentAction_789af415 doneAction; // @synthesize doneAction=_doneAction;
@property(readonly, nonatomic) CKTypedComponentAction_789af415 beginAction; // @synthesize beginAction=_beginAction;
@property(readonly, nonatomic) CDUnknownBlockType updateBlock; // @synthesize updateBlock=_updateBlock;
@property(readonly, nonatomic) struct WFTextInputAttributes attributes; // @synthesize attributes=_attributes;

@end

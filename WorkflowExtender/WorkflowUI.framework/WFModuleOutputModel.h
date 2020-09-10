//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIImage, WFAction;

@interface WFModuleOutputModel : NSObject
{
    _Bool _extensionInput;
    WFAction *_action;
    NSString *_name;
    UIImage *_icon;
    CKTypedComponentAction_173db1b5 _tapAction;
}

+ (id)modelForExtensionInputWithTapAction:(CKTypedComponentAction_173db1b5)arg1;
+ (id)modelForAction:(id)arg1 withTapAction:(CKTypedComponentAction_173db1b5)arg2;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) CKTypedComponentAction_173db1b5 tapAction; // @synthesize tapAction=_tapAction;
@property(readonly, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic, getter=isExtensionInput) _Bool extensionInput; // @synthesize extensionInput=_extensionInput;
@property(readonly, nonatomic) WFAction *action; // @synthesize action=_action;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithExtensionInputAndTapAction:(CKTypedComponentAction_173db1b5)arg1;
- (id)initWithAction:(id)arg1 tapAction:(CKTypedComponentAction_173db1b5)arg2;

@end


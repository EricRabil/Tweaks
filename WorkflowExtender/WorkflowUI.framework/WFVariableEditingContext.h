//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WFVariable;

@interface WFVariableEditingContext : NSObject
{
    _Bool _editingVariable;
    WFVariable *_variable;
    struct _NSRange _range;
}

+ (id)newWithVariable:(id)arg1 range:(struct _NSRange)arg2 editingVariable:(_Bool)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool editingVariable; // @synthesize editingVariable=_editingVariable;
@property(readonly, nonatomic) struct _NSRange range; // @synthesize range=_range;
@property(readonly, nonatomic) WFVariable *variable; // @synthesize variable=_variable;

@end


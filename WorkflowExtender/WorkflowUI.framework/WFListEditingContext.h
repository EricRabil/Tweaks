//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WFListEditorUpdateItem, WFVariableEditingContext;

@interface WFListEditingContext : NSObject
{
    _Bool _key;
    _Bool _nested;
    WFVariableEditingContext *_variableContext;
    WFListEditorUpdateItem *_updateItem;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool nested; // @synthesize nested=_nested;
@property(nonatomic) _Bool key; // @synthesize key=_key;
@property(retain, nonatomic) WFListEditorUpdateItem *updateItem; // @synthesize updateItem=_updateItem;
@property(retain, nonatomic) WFVariableEditingContext *variableContext; // @synthesize variableContext=_variableContext;

@end


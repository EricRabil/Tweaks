//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol NSObject;

@interface WFTriggerEvent : NSObject
{
    NSString *_triggerID;
    id <NSObject> _currentValue;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <NSObject> currentValue; // @synthesize currentValue=_currentValue;
@property(readonly, copy, nonatomic) NSString *triggerID; // @synthesize triggerID=_triggerID;
- (id)description;
- (id)initWithTriggerID:(id)arg1 currentValue:(id)arg2;

@end

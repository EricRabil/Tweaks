//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WFDrawerAnimation;

@interface WFDrawerAnimationManager : NSObject
{
    WFDrawerAnimation *_heightAnimation;
    unsigned long long _heightAnimationPushCount;
}

- (void).cxx_destruct;
- (void)popHeightAnimation;
- (void)pushHeightAnimation:(id)arg1;
@property(readonly, nonatomic) WFDrawerAnimation *heightAnimation;
- (id)defaultHeightAnimation;

@end


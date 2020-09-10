//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WorkflowUI/NSObject-Protocol.h>

@class NSString, WFAction;

@protocol WFActionEventObserver <NSObject>

@optional
- (void)action:(WFAction *)arg1 supplementalParameterValueDidChangeForKey:(NSString *)arg2;
- (void)action:(WFAction *)arg1 parameterStateDidChangeForKey:(NSString *)arg2;
- (void)actionRunningStateDidChange:(WFAction *)arg1;
- (void)actionOutputDetailsDidChange:(WFAction *)arg1;
- (void)actionNameDidChange:(WFAction *)arg1;
@end

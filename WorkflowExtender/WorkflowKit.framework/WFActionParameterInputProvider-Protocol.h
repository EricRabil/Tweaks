//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WorkflowKit/NSObject-Protocol.h>

@class NSDictionary, NSOrderedSet, WFAction, WFParameter;

@protocol WFActionParameterInputProvider <NSObject>
- (_Bool)action:(WFAction *)arg1 canProvideInputForParameter:(WFParameter *)arg2;
- (void)action:(WFAction *)arg1 provideInputForParameters:(NSOrderedSet *)arg2 withDefaultStates:(NSDictionary *)arg3 completionHandler:(void (^)(_Bool, NSDictionary *))arg4;
@end


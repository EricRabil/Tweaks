//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@interface CKAsyncLayer : CALayer
{
    int _displaySentinel;
    _Bool _needsAsyncDisplayOnly;
}

+ (void)drawInContext:(struct CGContext *)arg1 parameters:(id)arg2;
+ (void)drawAsyncLayerInContext:(struct CGContext *)arg1 parameters:(id)arg2;
+ (CDUnknownBlockType)asyncDisplayBlockWithBounds:(struct CGRect)arg1 contentsScale:(double)arg2 opaque:(_Bool)arg3 backgroundColor:(struct CGColor *)arg4 displaySentinel:(int *)arg5 expectedDisplaySentinelValue:(int)arg6 drawingDelegate:(id)arg7 drawParameters:(id)arg8;
+ (id)defaultValueForKey:(id)arg1;
+ (id)displayQueue;
- (id)drawParameters;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)didDisplayAsynchronously:(id)arg1 withDrawParameters:(id)arg2;
- (id)willDisplayAsynchronouslyWithDrawParameters:(id)arg1;
- (void)display;
- (void)cancelAsyncDisplay;
- (void)setNeedsAsyncDisplay;
- (void)setNeedsDisplay;
- (id)name;

// Remaining properties
@property unsigned long long displayMode; // @dynamic displayMode;

@end


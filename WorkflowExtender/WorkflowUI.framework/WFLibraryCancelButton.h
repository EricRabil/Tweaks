//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class CAShapeLayer;

@interface WFLibraryCancelButton : UIControl
{
    CAShapeLayer *_outlineLayer;
    CAShapeLayer *_glyphLayer;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CAShapeLayer *glyphLayer; // @synthesize glyphLayer=_glyphLayer;
@property(readonly, nonatomic) CAShapeLayer *outlineLayer; // @synthesize outlineLayer=_outlineLayer;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)finishWithDuration:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)reset;
- (void)didMoveToWindow;
- (void)setHighlighted:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end


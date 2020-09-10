//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIImageView, WFVariable;

@interface WFVariableCell : UICollectionViewCell
{
    WFVariable *_variable;
    UIImageView *_imageView;
}

+ (double)widthWithVariable:(id)arg1 height:(double)arg2;
+ (id)titleFont;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) WFVariable *variable; // @synthesize variable=_variable;
- (unsigned long long)accessibilityTraits;
- (_Bool)isAccessibilityElement;
- (void)setHighlighted:(_Bool)arg1;
- (void)tintColorDidChange;
- (void)updateVariableImage;
- (id)initWithFrame:(struct CGRect)arg1;

@end


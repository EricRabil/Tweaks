//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class WFCircularGlyphView;

@interface WFLibraryWorkflowCellSelectionView : UIView
{
    WFCircularGlyphView *_selectedCheckmarkView;
    WFCircularGlyphView *_unselectedCheckmarkView;
    struct CGRect _glyphFrame;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WFCircularGlyphView *unselectedCheckmarkView; // @synthesize unselectedCheckmarkView=_unselectedCheckmarkView;
@property(retain, nonatomic) WFCircularGlyphView *selectedCheckmarkView; // @synthesize selectedCheckmarkView=_selectedCheckmarkView;
@property(nonatomic) struct CGRect glyphFrame; // @synthesize glyphFrame=_glyphFrame;
@property(nonatomic) _Bool selected;
- (id)init;

@end


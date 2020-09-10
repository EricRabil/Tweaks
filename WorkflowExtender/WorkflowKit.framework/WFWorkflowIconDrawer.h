//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, WFColor;

@interface WFWorkflowIconDrawer : NSObject
{
    _Bool _drawBackground;
    _Bool _useCustomImage;
    _Bool _rounded;
    unsigned short _glyphCharacter;
    WFColor *_backgroundColor;
    NSData *_customImageData;
    WFColor *_glyphColor;
    double _cornerRadius;
    struct CGSize _glyphSize;
}

+ (id)pngDataForImageWithIcon:(id)arg1 size:(struct CGSize)arg2;
+ (id)glyphImageWithIcon:(id)arg1 size:(struct CGSize)arg2;
+ (id)imageWithIcon:(id)arg1 size:(struct CGSize)arg2;
- (void).cxx_destruct;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) _Bool rounded; // @synthesize rounded=_rounded;
@property(nonatomic) _Bool useCustomImage; // @synthesize useCustomImage=_useCustomImage;
@property(nonatomic) _Bool drawBackground; // @synthesize drawBackground=_drawBackground;
@property(nonatomic) struct CGSize glyphSize; // @synthesize glyphSize=_glyphSize;
@property(retain, nonatomic) WFColor *glyphColor; // @synthesize glyphColor=_glyphColor;
@property(copy, nonatomic) NSData *customImageData; // @synthesize customImageData=_customImageData;
@property(retain, nonatomic) WFColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) unsigned short glyphCharacter; // @synthesize glyphCharacter=_glyphCharacter;
- (id)imageWithSize:(struct CGSize)arg1;
- (void)drawInContext:(id)arg1 inRect:(struct CGRect)arg2;
- (id)init;
- (id)initWithHomeScreenIcon:(id)arg1;
- (void)setIcon:(id)arg1;
- (id)initWithIcon:(id)arg1;

@end


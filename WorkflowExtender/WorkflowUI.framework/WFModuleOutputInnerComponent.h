//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ComponentKit/CKCompositeComponent.h>

@class WFModuleOutputModel;

@interface WFModuleOutputInnerComponent : CKCompositeComponent
{
    WFModuleOutputModel *_model;
}

+ (id)newWithModel:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) WFModuleOutputModel *model; // @synthesize model=_model;
- (void)buttonTapped;

@end


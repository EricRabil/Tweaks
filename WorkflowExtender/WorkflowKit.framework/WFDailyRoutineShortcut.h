//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, WFDailyRoutineShortcutSetupFlow, WFImage;

@interface WFDailyRoutineShortcut : NSObject
{
    NSString *_title;
    NSString *_subtitle;
    WFImage *_bannerImage;
    WFDailyRoutineShortcutSetupFlow *_setupFlow;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) WFDailyRoutineShortcutSetupFlow *setupFlow; // @synthesize setupFlow=_setupFlow;
@property(readonly, copy, nonatomic) WFImage *bannerImage; // @synthesize bannerImage=_bannerImage;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 bannerImage:(id)arg3 setupFlow:(id)arg4;

@end


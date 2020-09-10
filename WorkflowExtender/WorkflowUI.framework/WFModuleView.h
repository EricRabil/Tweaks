//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <WorkflowUI/WFActionEventObserver-Protocol.h>

@class NSProgress, NSString, UIColor, WFAction;

@interface WFModuleView : UIView <WFActionEventObserver>
{
    _Bool _showing;
    WFAction *_action;
    UIColor *_progressBackgroundColor;
    NSProgress *_progress;
    UIView *_progressView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property(retain, nonatomic) UIColor *progressBackgroundColor; // @synthesize progressBackgroundColor=_progressBackgroundColor;
@property(nonatomic) __weak WFAction *action; // @synthesize action=_action;
- (id)accessibilityLabel;
- (long long)accessibilityContainerType;
- (void)actionRunningStateDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


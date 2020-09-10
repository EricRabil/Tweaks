//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CKComponent, UIView;

@interface CKComponentController : NSObject
{
    unsigned long long _state;
    _Bool _updatingComponent;
    _Bool _performedInitialMount;
    CKComponent *_previousComponent;
    struct CKComponentControllerAnimationWrapper _animationData;
    CKComponent *_component;
    UIView *_view;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIView *view; // @synthesize view=_view;
@property(readonly, nonatomic) __weak CKComponent *component; // @synthesize component=_component;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)targetForAction:(SEL)arg1 withSender:(id)arg2;
- (id)nextResponder;
- (void)component:(id)arg1 didAcquireView:(id)arg2;
- (void)component:(id)arg1 willRelinquishView:(id)arg2;
- (void)_cleanupAppliedAnimations;
- (void)_relinquishView;
- (void)componentDidUnmount:(id)arg1;
- (void)componentWillUnmount:(id)arg1;
- (void)componentDidMount:(id)arg1;
- (void)componentWillMount:(id)arg1;
- (void)componentTreeDidDisappear;
- (void)componentTreeWillAppear;
- (void)componentDidAcquireView;
- (void)componentWillRelinquishView;
- (void)didUpdateComponent;
- (void)willUpdateComponent;
- (void)didUnmount;
- (void)willUnmount;
- (void)didRemount;
- (void)willRemount;
- (void)didMount;
- (void)willMount;
- (id)initWithComponent:(id)arg1;

@end


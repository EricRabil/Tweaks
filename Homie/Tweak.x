#import <UIKit/UIKit.h>

@interface CSPageControl: UIView
@end

@interface SBIconListPageControl: UIView<UIContextMenuInteractionDelegate>
@property (nonatomic) long long numberOfPages;
- (long long)numberOfPages;
- (void)setNumberOfPages:(long long)arg1;
- (UIContextMenuConfiguration *)contextMenuInteraction:(UIContextMenuInteraction *)interaction configurationForMenuAtLocation:(CGPoint)location;
- (UITargetedPreview *)contextMenuInteraction:(UIContextMenuInteraction *)interaction previewForHighlightingMenuWithConfiguration:(UIContextMenuConfiguration *)configuration;
@end

UIPageControl *pageControl = nil;
UIVisualEffectView *visualEffectView = nil;

%hook SBIconListPageControl
%new
- (UIContextMenuConfiguration *)contextMenuInteraction:(UIContextMenuInteraction *)interaction configurationForMenuAtLocation:(CGPoint)location {
	return [UIContextMenuConfiguration configurationWithIdentifier:nil previewProvider:nil actionProvider:^UIMenu * _Nullable(NSArray<UIMenuElement *> * _Nonnull suggestedActions) {
		NSMutableArray *actions = [[NSMutableArray alloc] init];

		UIAction *myFuckingAction = [UIAction actionWithTitle:@"Shit in mouth" image:nil identifier:nil handler:^(__kindof UIAction * _Nonnull action) {
			// the fat bitch clicked me.
		}];

		[actions addObject:myFuckingAction];

		return [UIMenu menuWithTitle:@"My fucking menu, bitch." children:actions];
	}];
}
%new
- (UITargetedPreview *)contextMenuInteraction:(UIContextMenuInteraction *)interaction previewForHighlightingMenuWithConfiguration:(UIContextMenuConfiguration *)configuration {
	UIPreviewParameters *parameters = [[UIPreviewParameters alloc] init];
	parameters.backgroundColor = [UIColor clearColor];
	parameters.visiblePath = [UIBezierPath bezierPathWithRoundedRect:visualEffectView.frame cornerRadius: visualEffectView.layer.cornerRadius];

	return [[UITargetedPreview alloc] initWithView:self parameters:parameters target:[[UIPreviewTarget alloc] initWithContainer:visualEffectView.contentView center:visualEffectView.contentView.center]];
}
// %new
// - (void)contextMenuInteraction:(UIContextMenuInteraction *)interaction willEndForConfiguration:(UIContextMenuConfiguration *)configuration animator:(id<UIContextMenuInteractionAnimating>)animator {
// 	[animator addCompletion:^{
		
// 	}];
// }
-(void) didMoveToSuperview {
	pageControl = [[UIPageControl alloc] init];
	pageControl.numberOfPages = self.numberOfPages;
	pageControl.translatesAutoresizingMaskIntoConstraints = NO;
	pageControl.alpha = 0;

	[self addSubview:pageControl];

	[pageControl.centerXAnchor constraintEqualToAnchor:self.centerXAnchor].active = YES;
	[pageControl.centerYAnchor constraintEqualToAnchor:self.centerYAnchor].active = YES;

	[pageControl layoutIfNeeded];

	%orig;

	self.transform = CGAffineTransformTranslate(self.transform, 0, -10);

	UIBlurEffect *blurEffect = [UIBlurEffect effectWithStyle:UIBlurEffectStyleLight];
	visualEffectView = [[UIVisualEffectView alloc] initWithEffect:blurEffect];
	visualEffectView.translatesAutoresizingMaskIntoConstraints = NO;
	// visualEffectView.frame = self.bounds;
	// visualEffectView.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
	
	[self addSubview:visualEffectView];

	// // set visualeffectview to cover pagecontrol view
	// UIView *csPageControl = [self viewWithKindOfClass:%c(CSPageControl)];
	[visualEffectView.leftAnchor constraintEqualToAnchor:pageControl.leftAnchor].active = YES;
	[visualEffectView.rightAnchor constraintEqualToAnchor:pageControl.rightAnchor].active = YES;
	[visualEffectView.topAnchor constraintEqualToAnchor:pageControl.topAnchor constant:4.5].active = YES;
	[visualEffectView.bottomAnchor constraintEqualToAnchor:pageControl.bottomAnchor constant:-4.5].active = YES;
	visualEffectView.layer.cornerRadius = 15;
	visualEffectView.layer.masksToBounds = YES;

	UIContextMenuInteraction *interaction = [[UIContextMenuInteraction alloc] initWithDelegate:self];
	[visualEffectView addInteraction:interaction];
}
- (void)setNumberOfPages:(long long)arg1 {
	[pageControl setNumberOfPages:arg1 + 2];
	%orig;
}
%end

@interface SBDockView: UIView
@end

%hook SBDockView
-(void) didMoveToSuperview {
	%orig;
	// [self removeFromSuperview];
}
%end
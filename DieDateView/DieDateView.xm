#import <UIKit/UIKit.h>

@interface SBFLockScreenDateView: UIView
@end

@interface SBUIProudLockIconView: UIView
@end

// %hook SBUIProudLockIconView
// -(void)setState:(NSInteger)state {
// 	[self setHidden:YES];
// 	%orig;
// }
// -(void) setHidden:(BOOL)hide {
// 	%orig(YES);
// }
// %end

%hook SBFLockScreenDateView
-(void) didMoveToSuperview {
	if ([self superview] == nil) %orig;
	else [self setHidden:YES];
}
-(void) setDate:(id)date {
	[self setHidden:YES];
	%orig;
}
-(void) _updateLabels {
	[self setHidden:YES];
	%orig;
}
-(void) setHidden:(BOOL)hide {
	%orig(YES);
}
%end
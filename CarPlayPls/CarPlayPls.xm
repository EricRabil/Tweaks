#import <UIKit/UIKit.h>

@interface UIScreen (Internal)
-(id)displayConfiguration;
@end

@interface FBSDisplayConfiguration: NSObject
-(BOOL)isCarDisplay;
@end

// %hook FBSDisplayConfiguration
// -(BOOL)isCarDisplay {
// 	return YES;
// }
// %end

@interface SBStarkScreenManager
@end

// %hook SpringBoard
// -(void)applicationDidFinishLaunching:(UIApplication *)application {
// 	%orig;
// 	// [[%c(SBStarkScreenManager) sharedInstance] screenManager:[%c(SBStarkScreenManager) sharedInstance] didTriggerConnectionHandlerEvent: nil forScreen: [UIScreen mainScreen]];

// 	for (UIWindow *window in [UIApplication sharedApplication].windows) {
// 		if ([window isKindOfClass:%c(SBAppWindow)]) {
// 			window.hidden = YES;
// 		}
// 	}
// }
// %end

// %hook UIScreen
// -(BOOL)_isCarScreen {
// 	return YES;
// }

// - (CGRect)bounds {
// 	CGRect screenBounds = %orig;

// 	BOOL shouldFlipWidth = screenBounds.size.height > screenBounds.size.width;
//   if (shouldFlipWidth) {
//     screenBounds = CGRectMake(screenBounds.origin.x, screenBounds.origin.y, screenBounds.size.height, screenBounds.size.width);
//   }

// 	if ([[UIApplication sharedApplication].delegate isKindOfClass:%c(MAAppDelegate)] ||
//       [[UIApplication sharedApplication].delegate isKindOfClass:%c(SMSApplication)] ||
//       [[UIApplication sharedApplication].delegate isKindOfClass:%c(MobilePhoneApplication)]) {
//     return CGRectMake(88, 0.0, screenBounds.size.width - 88, screenBounds.size.height);
//   }

// 	return screenBounds;
// }

// -(UIScreen *)_carScreen {
// 	return [UIScreen mainScreen];
// }

// - (NSUInteger)_userInterfaceIdiom
// {
//   return 3;
// }

// - (void)_setUserInterfaceIdiom:(NSUInteger)idiom
// {
//   %orig(3);
// }
// %end

%ctor {
	// [[[UIScreen mainScreen] displayConfiguration] setValue:@(YES) forKey:@"carDisplay"];
}
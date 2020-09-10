#import <Foundation/Foundation.h>

@interface SBIconController: NSObject
@end

%hook SBIconController
-(BOOL) isAppLibrarySupported {
	return YES;
}
%end

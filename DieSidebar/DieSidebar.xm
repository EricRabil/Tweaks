#import <UIKit/UIKit.h>

%hook SBRootFolderView
-(BOOL)_isSidebarEnabledForCurrentOrientation {
	return NO;
}
-(BOOL)_isSidebarEnabledForCurrentPage {
	return NO;
}
%end
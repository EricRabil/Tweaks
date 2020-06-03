#import <spawn.h>
#include <UIKit/UIKit.h>

@interface Cydia
- (void) reloadSpringBoard;
@end

@interface HomeController: UIViewController
-(UIWebView*)view;
-(void)didFinishLoading;
-(void)_didFinishLoading;
@end

%hook Cydia
- (void) reloadSpringBoard {
	pid_t pid;
	int status;

	const char* args[] = {"killall", "-9", "backboardd", NULL};

	posix_spawn(&pid, "/usr/bin/killall", NULL, NULL, (char* const*)args, NULL);

	waitpid(pid, &status, WEXITED);
}
- (void) applicationDidFinishLaunching:(id)unused {
	[[UITabBar appearance] setBarStyle:UIBarStyleBlack];
	[[UINavigationBar appearance] setBarStyle:UIBarStyleBlack];
	[[UITextField appearance] setKeyboardAppearance:UIKeyboardAppearanceDark];
	[[UITextView appearance] setKeyboardAppearance:UIKeyboardAppearanceDark];
	[[UITableView appearance] setBackgroundColor:[UIColor blackColor]];
	[[UITableView appearance] setSeparatorColor:[UIColor colorWithWhite:0.3 alpha:1.0]];
	[[UITableViewCell appearance] setBackgroundColor:[UIColor blackColor]];
	UIView *selectionView = [[UIView alloc] init];
	[selectionView setBackgroundColor:[UIColor colorWithWhite:0.5 alpha:1.0]];
	[[UITableViewCell appearance] setSelectedBackgroundView:selectionView];
	[[UITextField appearanceWhenContainedIn:[UISearchBar class], nil] setBackgroundColor:[UIColor blackColor]];
	[[UITextField appearanceWhenContainedIn:[UISearchBar class], nil] setDefaultTextAttributes:@{NSForegroundColorAttributeName:[UIColor redColor]}];
	%orig;
}
%end

%hook HomeController
-(void)_didFinishLoading {
	NSString *cssString = @"body { color: white; } panel > div a { text-shadow: none; } panel > fieldset { background-color: rgb(30,30,34); } fieldset[style='background-color:#eefff0'] { background-color: #336338 !important; } panel > fieldset { border-top: 1px solid rgb(58, 58, 60) !important; } fieldset > a { border-bottom: 1px solid rgb(58, 58, 60) !important; } fieldset.half > a { border-right: 1px solid rgb(58, 58, 60) !important; } fieldset>.left {border-right: 1px solid rgb(58, 58, 60) !important;}"; // 1
    NSString *javascriptString = @"var style = document.createElement('style'); style.innerHTML = `%@`; document.head.appendChild(style)"; // 2
    NSString *javascriptWithCSSString = [NSString stringWithFormat:javascriptString, cssString]; // 3
    [[self view] stringByEvaluatingJavaScriptFromString:javascriptWithCSSString]; // 4
	%orig;
	UIView *scroller_ = MSHookIvar<UIView*>(self, "scroller_");
	[scroller_ setBackgroundColor:[UIColor blackColor]];
}
%end

@interface SourceCell: UIView
-(UIView *)content;
-(NSString *)origin_;
-(bool)highlighted;
@end

%hook SourceCell
-(SourceCell *) initWithFrame:(CGRect)frame reuseIdentifier:(NSString *)reuseIdentifier {
	%orig;
	[self.content setBackgroundColor:[UIColor blackColor]];
	[self setBackgroundColor:[UIColor blackColor]];
	return self;
}
- (void) drawContentRect:(CGRect)rect {
	%orig;
    bool highlighted(self.highlighted);
    float width(rect.size.width);

    if (!highlighted)
        CGContextSetFillColorWithColor(UIGraphicsGetCurrentContext(), [[UIColor whiteColor] CGColor]);
    [MSHookIvar<NSString*>(self, "origin_") drawAtPoint:CGPointMake(52, 8) forWidth:(width - 49) withFont:[UIFont boldSystemFontOfSize:18] lineBreakMode:NSLineBreakByTruncatingTail];
}
%end

@interface SectionCell: UIView
-(UIView *)content;
-(bool)highlighted;
@end

%hook SectionCell
- (id) initWithFrame:(CGRect)frame reuseIdentifier:(NSString *)reuseIdentifier {
	%orig;
	[self.content setBackgroundColor:[UIColor blackColor]];
	[self setBackgroundColor:[UIColor blackColor]];
	return self;
}
- (void) drawContentRect:(CGRect)rect {
	%orig;

	bool highlighted(self.highlighted);
    float width(rect.size.width);
	if (!highlighted)
        CGContextSetFillColorWithColor(UIGraphicsGetCurrentContext(), [[UIColor whiteColor] CGColor]);
    [MSHookIvar<NSString*>(self, "name_") drawAtPoint:CGPointMake(48, 12) forWidth:(width - 58) withFont:[UIFont systemFontOfSize:18] lineBreakMode:NSLineBreakByTruncatingTail];
}
%end

@interface PackageCell: UIView
-(UIView *)content;
-(bool)highlighted;
@end

%hook PackageCell
- (id) init {
	%orig;

	[self.content setBackgroundColor:[UIColor blackColor]];
	[self setBackgroundColor:[UIColor blackColor]];
	return self;
}
- (void) drawSummaryContentRect:(CGRect)rect {
	%orig;

    bool highlighted(self.highlighted);
    float width([self bounds].size.width);

	if (MSHookIvar<BOOL>(self, "commercial_")) return;

	if (!highlighted)
        CGContextSetFillColorWithColor(UIGraphicsGetCurrentContext(), [[UIColor whiteColor] CGColor]);
    [MSHookIvar<NSString*>(self, "name_") drawAtPoint:CGPointMake(36, 8) forWidth:(width - (MSHookIvar<UIImage*>(self, "placard_") == nil ? 68 : 94)) withFont:[UIFont boldSystemFontOfSize:18] lineBreakMode:NSLineBreakByTruncatingTail];
}
- (void) drawNormalContentRect:(CGRect)rect {
	%orig;

    bool highlighted(self.highlighted);
    float width([self bounds].size.width);

	if (MSHookIvar<BOOL>(self, "commercial_")) return;

	if (!highlighted)
        CGContextSetFillColorWithColor(UIGraphicsGetCurrentContext(), [MSHookIvar<bool>(self, "commercial_") ? [UIColor purpleColor] : [UIColor whiteColor] CGColor]);
    [MSHookIvar<NSString*>(self, "name_") drawAtPoint:CGPointMake(48, 8) forWidth:(width - (MSHookIvar<UIImage*>(self, "placard_") == nil ? 80 : 106)) withFont:[UIFont boldSystemFontOfSize:18] lineBreakMode:NSLineBreakByTruncatingTail];
    [MSHookIvar<NSString*>(self, "source_") drawAtPoint:CGPointMake(58, 29) forWidth:(width - 95) withFont:[UIFont systemFontOfSize:12] lineBreakMode:NSLineBreakByTruncatingTail];

    if (!highlighted)
        CGContextSetFillColorWithColor(UIGraphicsGetCurrentContext(), [MSHookIvar<bool>(self, "commercial_") ? [UIColor purpleColor] : [UIColor grayColor] CGColor]);
    [MSHookIvar<NSString*>(self, "description_") drawAtPoint:CGPointMake(12, 46) forWidth:(width - 46) withFont:[UIFont systemFontOfSize:14] lineBreakMode:NSLineBreakByTruncatingTail];
}
- (void) setPackage:(id*)package asSummary:(bool)summary {
	%orig;
	if ([[self.content backgroundColor] isEqual:[UIColor whiteColor]]) {
		[self.content setBackgroundColor:[UIColor blackColor]];
	}
}
%end

%hook SearchController
- (id) initWithDatabase:(id*)database query:(NSString *)query {
	%orig;
	UITextField *textField = [MSHookIvar<UISearchBar*>(self, "search_") valueForKey:@"searchField"];
	[textField setBackgroundColor:[UIColor blackColor]];
	[textField setTextColor:[UIColor whiteColor]];
	return self;
}
%end

%hook CydiaLoadingView
- (id) initWithFrame:(CGRect)frame {
	%orig;
	[MSHookIvar<UILabel*>(self, "label_") setTextColor:[UIColor whiteColor]];
	[MSHookIvar<UILabel*>(self, "label_") setShadowColor:[UIColor clearColor]];
	[MSHookIvar<UIActivityIndicatorView*>(self, "spinner_") setColor:[UIColor whiteColor]];
	return self;
}
%end

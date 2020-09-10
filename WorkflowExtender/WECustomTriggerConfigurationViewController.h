#import <Foundation/Foundation.h>
#import "WFTriggerConfigurationViewController.h"
#import <UIKit/UIKit.h>

@interface WECustomTriggerConfigurationViewController: WFTriggerConfigurationViewController
- (UITableViewCell*) tableView: (UITableView*) tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath;
- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section;
- (NSInteger) numberOfSectionsInTableView: (UITableView*)tableView;
- (UIView*) headerViewWithTitle: (NSString*)title;
@end

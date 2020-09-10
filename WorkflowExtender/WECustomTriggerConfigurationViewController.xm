#import <UIKit/UIKit.h>
#import "WECustomTrigger.h"
#import "WECustomTriggerConfigurationViewController.h"
#import "WFTriggerConfigurationHeaderCell.h"

typedef UIView *(*penisEnlargement)( void );

%subclass WECustomTriggerConfigurationViewController: WFTriggerConfigurationViewController
- (void) loadView {
  UITableView* tableView = [[UITableView alloc] initWithFrame:CGRectZero style:UITableViewStyleInsetGrouped];
  tableView.dataSource = self;
  tableView.delegate = self;
  self.view = tableView;
}

%new
- (NSInteger) numberOfSectionsInTableView: (UITableView*)tableView {
  return 1;
}

%new
- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section {
  return 1;
}

%new
- (UITableViewCell*) tableView: (UITableView*) tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath {
  if (indexPath.row == 0 && indexPath.section == 0) {
    WFTriggerConfigurationHeaderCell* headerCell = [%c(WFTriggerConfigurationHeaderCell) new];
    headerCell.triggerTypeClass = [%c(WECustomTrigger) class];
    headerCell.selectionStyle = UITableViewCellSelectionStyleNone;
    return headerCell;
  }
  return [UITableViewCell new];
}

%new
- (UIView *)tableView:(UITableView *)tableView viewForHeaderInSection:(NSInteger)section {
  return [self headerViewWithTitle:@"When"];
}

%new
- (UIView*) headerViewWithTitle: (NSString*)title {
    UIView *headerView = [UIView new];
    UILabel *headerLabel = [UILabel new];
    UIFontDescriptor *fontDescriptor = [UIFontDescriptor preferredFontDescriptorWithTextStyle:UIFontTextStyleTitle2];
    fontDescriptor = [fontDescriptor fontDescriptorWithSymbolicTraits:UIFontDescriptorTraitBold];
    UIFont *font = [UIFont fontWithDescriptor:fontDescriptor size:24];
    [headerLabel setFont:font];
    [headerLabel setText:title];
    [headerView addSubview:headerLabel];
    
    return headerView;
}
%end
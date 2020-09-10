//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <WorkflowUI/MTAlarmDataSourceObserver-Protocol.h>
#import <WorkflowUI/UITableViewDataSource-Protocol.h>
#import <WorkflowUI/UITableViewDelegate-Protocol.h>

@class MTAlarmDataSource, NSMutableOrderedSet, NSString, UITableView;
@protocol WFAlarmChooserViewControllerDelegate;

@interface WFAlarmChooserViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, MTAlarmDataSourceObserver>
{
    id <WFAlarmChooserViewControllerDelegate> _delegate;
    UITableView *_tableView;
    MTAlarmDataSource *_alarmDataSource;
    NSMutableOrderedSet *_checkedAlarmIDs;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableOrderedSet *checkedAlarmIDs; // @synthesize checkedAlarmIDs=_checkedAlarmIDs;
@property(readonly, nonatomic) MTAlarmDataSource *alarmDataSource; // @synthesize alarmDataSource=_alarmDataSource;
@property(readonly, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <WFAlarmChooserViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)cancel:(id)arg1;
- (void)finish:(id)arg1;
- (void)updateDoneButtonEnabled;
- (void)checkForValidCheckedAlarmIDs;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)dataSourceDidReload:(id)arg1;
- (_Bool)isModalInPresentation;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithAlarmDataSource:(id)arg1 checkedAlarmIDs:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


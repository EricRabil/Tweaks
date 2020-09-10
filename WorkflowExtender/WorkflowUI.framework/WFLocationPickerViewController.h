//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <WorkflowUI/CLLocationManagerDelegate-Protocol.h>
#import <WorkflowUI/HULocationTriggerEditorMapDragRadiusViewDelegate-Protocol.h>
#import <WorkflowUI/MKMapViewDelegate-Protocol.h>
#import <WorkflowUI/MKMapViewDelegatePrivate-Protocol.h>
#import <WorkflowUI/UISearchBarDelegate-Protocol.h>
#import <WorkflowUI/UITableViewDataSource-Protocol.h>
#import <WorkflowUI/UITableViewDelegate-Protocol.h>

@class CLLocation, CLLocationManager, HULocationTriggerEditorMapDragRadiusView, MKLocalSearch, MKMapView, NSArray, NSIndexPath, NSLayoutConstraint, NSString, UISearchBar, UITableView, UIView, WFLocationValue;
@protocol WFLocationPickerViewControllerDelegate;

@interface WFLocationPickerViewController : UIViewController <UISearchBarDelegate, UITableViewDelegate, UITableViewDataSource, MKMapViewDelegate, MKMapViewDelegatePrivate, HULocationTriggerEditorMapDragRadiusViewDelegate, CLLocationManagerDelegate>
{
    _Bool _allowsTextOnlyLocation;
    _Bool _allowsPickingCurrentLocation;
    _Bool _resolvesCurrentLocationToPlacemark;
    int _currentAppLocationAuthorizationStatus;
    id <WFLocationPickerViewControllerDelegate> _delegate;
    unsigned long long _pickerType;
    WFLocationValue *_value;
    unsigned long long _regionCondition;
    UISearchBar *_searchBar;
    UIView *_dividerView;
    UITableView *_tableView;
    MKMapView *_mapView;
    HULocationTriggerEditorMapDragRadiusView *_dragView;
    NSIndexPath *_selectedIndexPath;
    NSArray *_constraints;
    NSLayoutConstraint *_mapHeightConstraint;
    NSArray *_recents;
    MKLocalSearch *_localSearch;
    NSArray *_localSearchResults;
    CLLocationManager *_locationManager;
    CLLocation *_currentLocation;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CLLocation *currentLocation; // @synthesize currentLocation=_currentLocation;
@property(nonatomic) int currentAppLocationAuthorizationStatus; // @synthesize currentAppLocationAuthorizationStatus=_currentAppLocationAuthorizationStatus;
@property(retain, nonatomic) CLLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property(copy, nonatomic) NSArray *localSearchResults; // @synthesize localSearchResults=_localSearchResults;
@property(retain, nonatomic) MKLocalSearch *localSearch; // @synthesize localSearch=_localSearch;
@property(copy, nonatomic) NSArray *recents; // @synthesize recents=_recents;
@property(retain, nonatomic) NSLayoutConstraint *mapHeightConstraint; // @synthesize mapHeightConstraint=_mapHeightConstraint;
@property(retain, nonatomic) NSArray *constraints; // @synthesize constraints=_constraints;
@property(retain, nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
@property(retain, nonatomic) HULocationTriggerEditorMapDragRadiusView *dragView; // @synthesize dragView=_dragView;
@property(retain, nonatomic) MKMapView *mapView; // @synthesize mapView=_mapView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIView *dividerView; // @synthesize dividerView=_dividerView;
@property(retain, nonatomic) UISearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(nonatomic) _Bool resolvesCurrentLocationToPlacemark; // @synthesize resolvesCurrentLocationToPlacemark=_resolvesCurrentLocationToPlacemark;
@property(nonatomic) unsigned long long regionCondition; // @synthesize regionCondition=_regionCondition;
@property(nonatomic) _Bool allowsPickingCurrentLocation; // @synthesize allowsPickingCurrentLocation=_allowsPickingCurrentLocation;
@property(nonatomic) _Bool allowsTextOnlyLocation; // @synthesize allowsTextOnlyLocation=_allowsTextOnlyLocation;
@property(retain, nonatomic) WFLocationValue *value; // @synthesize value=_value;
@property(readonly, nonatomic) unsigned long long pickerType; // @synthesize pickerType=_pickerType;
@property(nonatomic) __weak id <WFLocationPickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)resetSearchResults;
- (id)mapRadiusView:(id)arg1 overlayForRadius:(double)arg2;
- (CDStruct_90e2a262)mapRadiusView:(id)arg1 boundingMapRectForOverlay:(id)arg2;
- (id)overlayWithCenterCoordinate:(struct CLLocationCoordinate2D)arg1 radius:(double)arg2;
- (void)mapRadiusView:(id)arg1 radiusDidChange:(double)arg2;
- (void)mapViewDidChangeVisibleRegion:(id)arg1;
- (id)mapView:(id)arg1 rendererForOverlay:(id)arg2;
- (void)mapView:(id)arg1 didDeselectAnnotationView:(id)arg2;
- (void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(_Bool)arg2;
- (void)mapView:(id)arg1 regionWillChangeAnimated:(_Bool)arg2;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)setRegionValueWithPlacemark:(id)arg1 radius:(double)arg2;
- (void)setLocationValueWithPlacemark:(id)arg1;
- (void)updateValueWithRadius:(double)arg1;
- (void)updateValueWithMapItem:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (_Bool)hasSufficientLocationAuthorization;
- (void)checkLocationAuthorization;
- (void)done:(id)arg1;
- (void)cancel:(id)arg1;
- (id)circularRegion;
- (void)showMapRegionForCoordinate:(struct CLLocationCoordinate2D)arg1 radius:(double)arg2;
- (id)locationFromRecentContact:(id)arg1;
- (void)getPlacemarkFromLocation:(id)arg1 streetAddress:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)getMapItemFromRecentContact:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)displayLocationCoordinate:(struct CLLocationCoordinate2D)arg1;
- (unsigned long long)proximityType;
- (_Bool)hasLocation;
- (void)updateMapHeight;
- (double)mapHeight;
- (void)setupMap;
- (void)reloadData;
- (long long)firstLocalSearchResultRowIndex;
- (long long)lastRecentRowIndex;
- (long long)firstRecentRowIndex;
- (long long)currentLocationRowIndex;
- (_Bool)shouldShowCurrentLocationItem;
- (void)updateRecentsWithSearchText:(id)arg1;
- (void)updateUIWithValue:(id)arg1;
- (void)updateUI;
- (_Bool)showsMapView;
- (void)updateViewConstraints;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (id)initWithPickerType:(unsigned long long)arg1 value:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


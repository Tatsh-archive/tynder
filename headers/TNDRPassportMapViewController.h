//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "MKMapViewDelegate.h"
#import "SMCalloutViewDelegate.h"
#import "TNDRPassportMapSearchViewControllerDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class CALayer, CLLocation, MKAnnotationView, MKPlacemark, NSDate, NSString, NSTimer, TNDRPassportMapAnnotation, TNDRPassportMapAnnotationLookup, TNDRPassportMapView, TNDRPassportMapViewCalloutView, UILongPressGestureRecognizer, UIPanGestureRecognizer, UITapGestureRecognizer;

@interface TNDRPassportMapViewController : UIViewController <UIGestureRecognizerDelegate, MKMapViewDelegate, SMCalloutViewDelegate, TNDRPassportMapSearchViewControllerDelegate>
{
    CALayer *_mapLayer;
    NSTimer *_timer;
    BOOL _usingCurrentUserLocation;
    BOOL _dismissCurrentCallout;
    BOOL _userPinDrop;
    BOOL _notZoomed;
    BOOL _movedMapWithAFingerOrANipple;
    BOOL _mapRegionIsChanging;
    id <TNDRPassportPaywallDelegate> _paywallDelegate;
    id <TNDRPassportMapViewDelegate> _delegate;
    CLLocation *_activeLocation;
    MKPlacemark *_activePlacemark;
    TNDRPassportMapView *_mapView;
    TNDRPassportMapViewCalloutView *_calloutView;
    TNDRPassportMapAnnotationLookup *_annotationLookup;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    CDUnknownBlockType _moveToAnnotateMapLocationCompletionBlock;
    MKAnnotationView *_selectedAnnotationView;
    NSTimer *_pinDropCalloutAnimTimer;
    int _calloutViewLoadingState;
    TNDRPassportMapAnnotation *_lastAnnotationOperation;
    MKPlacemark *_placemarkSelectedFromSearch;
    MKAnnotationView *_lastSelectedAnnotationView;
    NSDate *_startDate;
    UIPanGestureRecognizer *_mapMoveGestureRecognizer;
    CDStruct_2c43369c _currentLocation;
}

- (void).cxx_destruct;
- (void)_handleDoubleTap;
@property(retain, nonatomic) CLLocation *activeLocation; // @synthesize activeLocation=_activeLocation;
@property(retain, nonatomic) MKPlacemark *activePlacemark; // @synthesize activePlacemark=_activePlacemark;
@property(retain, nonatomic) TNDRPassportMapAnnotationLookup *annotationLookup; // @synthesize annotationLookup=_annotationLookup;
@property(retain, nonatomic) TNDRPassportMapViewCalloutView *calloutView; // @synthesize calloutView=_calloutView;
- (void)calloutViewClicked:(id)arg1;
@property(nonatomic) int calloutViewLoadingState; // @synthesize calloutViewLoadingState=_calloutViewLoadingState;
- (id)checkmarkImage;
@property CDStruct_2c43369c currentLocation; // @synthesize currentLocation=_currentLocation;
@property(nonatomic) __weak id <TNDRPassportMapViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didSelectToCloseMapView;
@property(nonatomic) BOOL dismissCurrentCallout; // @synthesize dismissCurrentCallout=_dismissCurrentCallout;
- (void)dropPin:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)handleMapMovePanGestureRecognizer:(id)arg1;
@property(nonatomic, getter=hasMovedMapWithAFingerOrANipple) BOOL movedMapWithAFingerOrANipple; // @synthesize movedMapWithAFingerOrANipple=_movedMapWithAFingerOrANipple;
- (id)init;
@property(nonatomic, getter=isNotZoomed) BOOL notZoomed; // @synthesize notZoomed=_notZoomed;
@property(nonatomic, getter=isUserPinDrop) BOOL userPinDrop; // @synthesize userPinDrop=_userPinDrop;
@property(nonatomic, getter=isUsingCurrentUserLocation) BOOL usingCurrentUserLocation; // @synthesize usingCurrentUserLocation=_usingCurrentUserLocation;
@property(retain, nonatomic) TNDRPassportMapAnnotation *lastAnnotationOperation; // @synthesize lastAnnotationOperation=_lastAnnotationOperation;
@property(retain, nonatomic) MKAnnotationView *lastSelectedAnnotationView; // @synthesize lastSelectedAnnotationView=_lastSelectedAnnotationView;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer; // @synthesize longPressGestureRecognizer=_longPressGestureRecognizer;
@property(retain, nonatomic) UIPanGestureRecognizer *mapMoveGestureRecognizer; // @synthesize mapMoveGestureRecognizer=_mapMoveGestureRecognizer;
@property(nonatomic) BOOL mapRegionIsChanging; // @synthesize mapRegionIsChanging=_mapRegionIsChanging;
@property(retain, nonatomic) TNDRPassportMapView *mapView; // @synthesize mapView=_mapView;
- (void)mapView:(id)arg1 didAddAnnotationViews:(id)arg2;
- (void)mapView:(id)arg1 didDeselectAnnotationView:(id)arg2;
- (void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(BOOL)arg2;
- (void)mapView:(id)arg1 regionWillChangeAnimated:(BOOL)arg2;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
@property(copy, nonatomic) CDUnknownBlockType moveToAnnotateMapLocationCompletionBlock; // @synthesize moveToAnnotateMapLocationCompletionBlock=_moveToAnnotateMapLocationCompletionBlock;
- (void)moveToAnnotatedMapLocation:(id)arg1;
- (void)moveToAnnotatedMapLocation:(id)arg1 animated:(BOOL)arg2;
- (void)moveToAnnotatedMapLocation:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)moveToAnnotatedMapLocation:(id)arg1 moveMap:(BOOL)arg2 zoomed:(BOOL)arg3 animated:(BOOL)arg4 completion:(CDUnknownBlockType)arg5;
@property(nonatomic) __weak id <TNDRPassportPaywallDelegate> paywallDelegate; // @synthesize paywallDelegate=_paywallDelegate;
@property(retain, nonatomic) NSTimer *pinDropCalloutAnimTimer; // @synthesize pinDropCalloutAnimTimer=_pinDropCalloutAnimTimer;
- (void)pinTapped;
@property(retain, nonatomic) MKPlacemark *placemarkSelectedFromSearch; // @synthesize placemarkSelectedFromSearch=_placemarkSelectedFromSearch;
@property(retain, nonatomic) MKAnnotationView *selectedAnnotationView; // @synthesize selectedAnnotationView=_selectedAnnotationView;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
- (void)setupAndDisplayAnnotation:(id)arg1 forAnnotationView:(id)arg2;
- (void)setupCalloutViewForTraveling;
- (void)setupCalloutViewWithLeftAirplaneIcon:(BOOL)arg1;
- (void)setupMapTapGestureRecognizers;
- (void)showAnnotation:(id)arg1 moveMap:(BOOL)arg2 zoomed:(BOOL)arg3 animated:(BOOL)arg4 fromSearch:(BOOL)arg5 completion:(CDUnknownBlockType)arg6;
- (void)showAnnotation:(id)arg1 zoomed:(BOOL)arg2 animated:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)showAnnotation:(id)arg1 zoomed:(BOOL)arg2 animated:(BOOL)arg3 fromSearch:(BOOL)arg4 completion:(CDUnknownBlockType)arg5;
- (void)showAnnotationAtLocation:(id)arg1 moveMap:(BOOL)arg2 zoomed:(BOOL)arg3 animated:(BOOL)arg4 completion:(CDUnknownBlockType)arg5;
- (void)showAnnotationAtLocation:(id)arg1 moveMap:(BOOL)arg2 zoomed:(BOOL)arg3 animated:(BOOL)arg4 isCurrentUserLocation:(BOOL)arg5 completion:(CDUnknownBlockType)arg6;
- (void)showTravelingCalloutViewWithTitle:(id)arg1 andSubtitle:(id)arg2;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


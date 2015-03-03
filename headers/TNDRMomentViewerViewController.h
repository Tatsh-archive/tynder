//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "TNDRActionSheetDelegate.h"
#import "TNDRMomentViewerViewModelDelegate.h"
#import "TNDRURLNavigableProtocol.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UIScrollViewDelegate.h"
#import "UIViewControllerTransitioningDelegate.h"

@class MBProgressHUD, NSIndexPath, NSString, TNDRActionSheet, TNDRCircularProgressView, TNDRMomentLikesViewController, TNDRMomentTimeLeftViewController, TNDRMomentViewerToLikesAnimationController, TNDRMomentViewerToTimeLeftAnimationController, TNDRMomentViewerViewModel, UIAlertView, UIButton, UICollectionView, UITapGestureRecognizer;

@interface TNDRMomentViewerViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, UIScrollViewDelegate, UIViewControllerTransitioningDelegate, UIGestureRecognizerDelegate, TNDRActionSheetDelegate, TNDRMomentViewerViewModelDelegate, TNDRURLNavigableProtocol>
{
    BOOL _shouldReturnToStartIndexPathOnDismissal;
    id <TNDRMomentViewerViewControllerDelegate> _delegate;
    NSIndexPath *_startIndexPath;
    UICollectionView *_collectionView;
    TNDRCircularProgressView *_expirationProgressView;
    TNDRCircularProgressView *_likesProgressView;
    UIButton *_moreOptionsButton;
    TNDRMomentViewerViewModel *_viewModel;
    UITapGestureRecognizer *_expirationTapGestureRecognizer;
    UITapGestureRecognizer *_likesTapGestureRecognizer;
    TNDRMomentViewerToTimeLeftAnimationController *_toTimeLeftAnimationController;
    TNDRMomentViewerToLikesAnimationController *_toLikesAnimationController;
    TNDRActionSheet *_actionSheet;
    MBProgressHUD *_progressHUD;
    UIAlertView *_deleteAlertView;
    TNDRMomentTimeLeftViewController *_timeLeftViewController;
    TNDRMomentLikesViewController *_likesViewController;
}

+ (id)viewControllerNavigationKey;
- (void).cxx_destruct;
- (void)_animateCollectionViewUpReversed:(BOOL)arg1 duration:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_buildAccessoryViewsArray;
- (void)_configureCell:(id)arg1 atIndexPath:(id)arg2;
- (void)_configureFooterForMomentAtIndexPath:(id)arg1;
- (void)_configureProgressViewsForIndexPath:(id)arg1;
- (void)_retrieveLikesForMomentCellAtIndexPath:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) TNDRActionSheet *actionSheet; // @synthesize actionSheet=_actionSheet;
- (void)actionSheet:(id)arg1 triggeredButtonWithId:(int)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)animateAccessoryViewAppearanceWithCompletion:(CDUnknownBlockType)arg1;
- (void)animateAccessoryViewDisappearanceExcludingView:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)animateCollectionViewOffscreenWithCompletion:(CDUnknownBlockType)arg1;
- (void)animateCollectionViewOnScreenWithCompletion:(CDUnknownBlockType)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (float)cardHeight;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
@property(nonatomic) __weak id <TNDRMomentViewerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIAlertView *deleteAlertView; // @synthesize deleteAlertView=_deleteAlertView;
- (void)deleteMomentTapped;
@property(retain, nonatomic) TNDRCircularProgressView *expirationProgressView; // @synthesize expirationProgressView=_expirationProgressView;
@property(retain, nonatomic) UITapGestureRecognizer *expirationTapGestureRecognizer; // @synthesize expirationTapGestureRecognizer=_expirationTapGestureRecognizer;
- (void)expirationTapped:(id)arg1;
- (void)finishedSavingImageWithError:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)indexPathFromScrollViewContentOffset;
- (id)initWithMoments:(id)arg1;
- (id)layout;
@property(retain, nonatomic) TNDRCircularProgressView *likesProgressView; // @synthesize likesProgressView=_likesProgressView;
@property(retain, nonatomic) UITapGestureRecognizer *likesTapGestureRecognizer; // @synthesize likesTapGestureRecognizer=_likesTapGestureRecognizer;
- (void)likesTapped:(id)arg1;
@property(nonatomic) __weak TNDRMomentLikesViewController *likesViewController; // @synthesize likesViewController=_likesViewController;
- (void)loadView;
@property(retain, nonatomic) UIButton *moreOptionsButton; // @synthesize moreOptionsButton=_moreOptionsButton;
- (void)moreOptionsTapped:(id)arg1;
- (int)numberOfSectionsInCollectionView:(id)arg1;
@property(retain, nonatomic) MBProgressHUD *progressHUD; // @synthesize progressHUD=_progressHUD;
- (void)saveToCameraRollTapped;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
@property(nonatomic) BOOL shouldReturnToStartIndexPathOnDismissal; // @synthesize shouldReturnToStartIndexPathOnDismissal=_shouldReturnToStartIndexPathOnDismissal;
@property(retain, nonatomic) NSIndexPath *startIndexPath; // @synthesize startIndexPath=_startIndexPath;
@property(nonatomic) __weak TNDRMomentTimeLeftViewController *timeLeftViewController; // @synthesize timeLeftViewController=_timeLeftViewController;
@property(retain, nonatomic) TNDRMomentViewerToLikesAnimationController *toLikesAnimationController; // @synthesize toLikesAnimationController=_toLikesAnimationController;
@property(retain, nonatomic) TNDRMomentViewerToTimeLeftAnimationController *toTimeLeftAnimationController; // @synthesize toTimeLeftAnimationController=_toTimeLeftAnimationController;
@property(retain, nonatomic) TNDRMomentViewerViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)transitionTo:(id)arg1 optionsDict:(id)arg2 animated:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


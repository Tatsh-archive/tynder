//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TNDRCardCellManager.h"

#import "TNDRAdContentViewDelegate.h"
#import "TNDRAdWebViewControllerDelegate.h"
#import "TNDRLiveRailClientURLSessionDelegate.h"
#import "UIViewControllerTransitioningDelegate.h"

@class AVPlayer, NSDate, NSString, NSURLSession, SharkfoodMuteSwitchDetector, TNDRAdCardCell, TNDRAdContentLoader, TNDRLiveRailClient, TNDRLiveRailVASTXMLParser, UIImage;

@interface TNDRAdCardCellManager : TNDRCardCellManager <UIViewControllerTransitioningDelegate, TNDRAdContentViewDelegate, TNDRAdWebViewControllerDelegate, TNDRLiveRailClientURLSessionDelegate>
{
    BOOL _adCardPending;
    BOOL _internal_isTinderPlusSubscriber;
    BOOL _removingCellFromStack;
    BOOL _videoWasPlayingBeforeDismissal;
    TNDRLiveRailClient *_liveRailClient;
    TNDRAdContentLoader *_videoLoader;
    AVPlayer *_player;
    SharkfoodMuteSwitchDetector *_muteSwitchDetector;
    NSURLSession *_liveRailURLSession;
    unsigned int _numberOfAdsReadyForDisplay;
    TNDRAdCardCell *_currentCell;
    NSDate *_cellAppearanceTimestamp;
    NSDate *_adDetailsAppearanceTimestamp;
    TNDRLiveRailVASTXMLParser *_currentVAST;
    id _timeObserverToken;
    UIImage *_footerImage;
    unsigned int _numberOfCompletedPlays;
}

+ (void)resetUserDefaultsValues;
- (void).cxx_destruct;
- (id)adContentViewOverlayActionButtonText;
- (id)adContentViewOverlayTitleText;
@property(retain, nonatomic) NSDate *adDetailsAppearanceTimestamp; // @synthesize adDetailsAppearanceTimestamp=_adDetailsAppearanceTimestamp;
- (BOOL)adIsInProgress;
- (void)adWebViewControllerDidDisappear:(id)arg1;
- (id)adWebViewControllerShareText;
- (id)adWebViewControllerShareURL;
- (void)addBoundaries;
- (void)addObserversForKeyPathsOfCurrentPlayerItem:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (unsigned int)cardSwipeCount;
@property(retain, nonatomic) NSDate *cellAppearanceTimestamp; // @synthesize cellAppearanceTimestamp=_cellAppearanceTimestamp;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (void)collectionView:(id)arg1 willDisplayCardCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)configureForTinderPlusSubscriptionStatus:(BOOL)arg1;
@property(nonatomic) __weak TNDRAdCardCell *currentCell; // @synthesize currentCell=_currentCell;
@property(retain, nonatomic) TNDRLiveRailVASTXMLParser *currentVAST; // @synthesize currentVAST=_currentVAST;
- (void)dealloc;
- (void)didFailPreloadingAdContent;
- (void)didFinishPreloadingAdContent:(id)arg1;
@property(retain, nonatomic) UIImage *footerImage; // @synthesize footerImage=_footerImage;
- (void)handleUserDidOpenAd;
- (void)incrementCardSwipeCounter;
- (id)initWithDelegate:(id)arg1;
@property(nonatomic) BOOL internal_isTinderPlusSubscriber; // @synthesize internal_isTinderPlusSubscriber=_internal_isTinderPlusSubscriber;
- (void)invalidateCurrentAdLoadingAttempt;
@property(nonatomic, getter=isAdCardPending) BOOL adCardPending; // @synthesize adCardPending=_adCardPending;
- (BOOL)isExternalAudioPlaying;
@property(nonatomic, getter=isRemovingCellFromStack) BOOL removingCellFromStack; // @synthesize removingCellFromStack=_removingCellFromStack;
@property(retain, nonatomic) TNDRLiveRailClient *liveRailClient; // @synthesize liveRailClient=_liveRailClient;
- (void)liveRailClientDidFailToRetrieveVASTPayload;
- (void)liveRailClientVASTPayloadDidFinishChanging;
@property(retain, nonatomic) NSURLSession *liveRailURLSession; // @synthesize liveRailURLSession=_liveRailURLSession;
@property(retain, nonatomic) SharkfoodMuteSwitchDetector *muteSwitchDetector; // @synthesize muteSwitchDetector=_muteSwitchDetector;
@property(nonatomic) unsigned int numberOfAdsReadyForDisplay; // @synthesize numberOfAdsReadyForDisplay=_numberOfAdsReadyForDisplay;
@property(nonatomic) unsigned int numberOfCompletedPlays; // @synthesize numberOfCompletedPlays=_numberOfCompletedPlays;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)pauseTheAd;
- (unsigned int)percentageWatchedOfCurrentItem;
- (void)playOrReplayOrPauseTheAdUsingButton:(BOOL)arg1;
- (void)playTheAd;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
- (BOOL)playerIsPlaying;
- (void)removeAllQueuedAdCardCells;
- (void)removeCellFromStack:(id)arg1 direction:(int)arg2 performDismissal:(BOOL)arg3 trackAnalytics:(BOOL)arg4;
- (void)removeObserversForKeyPathsOfCurrentPlayerItem:(id)arg1;
- (void)resetCardSwipeCounter;
- (void)secondaryViewTapped:(id)arg1;
- (void)setCardSwipeCount:(unsigned int)arg1;
@property(retain, nonatomic) id timeObserverToken; // @synthesize timeObserverToken=_timeObserverToken;
@property(retain, nonatomic) TNDRAdContentLoader *videoLoader; // @synthesize videoLoader=_videoLoader;
@property(nonatomic) BOOL videoWasPlayingBeforeDismissal; // @synthesize videoWasPlayingBeforeDismissal=_videoWasPlayingBeforeDismissal;
- (void)setupAudio;
- (void)stackViewDidAppear;
- (void)stackViewDidDisappear;
- (void)subscribeToNotifications;
- (void)threadSafeUpdateCurrentPlayerItem:(id)arg1;
- (void)tinderPlusSubscriptionStatusPossiblyChanged;
- (void)toggleMuting;
- (void)trackLiveRailEventURL:(id)arg1;
- (void)trackVASTMuting;
- (void)unsubscribeToNotifications;
- (void)updatePlayerControlsForMuted:(BOOL)arg1;
- (id)urlSessionForLiveRailClientRequests;
- (void)userDidSwipeCard;
- (void)userDidTapAdContentView:(id)arg1;
- (void)userDidTapMoreInfoInOverlayViewOnAdContentView:(id)arg1;
- (void)userDidTapPauseButtonForAdContentView:(id)arg1;
- (void)userDidTapPlayInOverlayViewOnAdContentView:(id)arg1;
- (void)userDidToggleAudioForAdContentView:(id)arg1;
- (void)userSwipedLeftForCardCell:(id)arg1;
- (void)userSwipedRightForCardCell:(id)arg1;
- (void)userTappedCardCell:(id)arg1;
- (void)userTappedInfoButtonForCardCell:(id)arg1;
- (void)userTappedLeftAccessoryForCardCell:(id)arg1;
- (void)userTappedLeftForCardCell:(id)arg1;
- (void)userTappedRightForCardCell:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


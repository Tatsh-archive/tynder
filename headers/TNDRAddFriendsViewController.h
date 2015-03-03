//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "NSFetchedResultsControllerDelegate.h"
#import "TNDRActionSheetDelegate.h"
#import "TNDRFriendsChangeMyIDViewControllerDelegate.h"
#import "TNDRURLNavigableProtocol.h"
#import "UIAlertViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UISearchBarDelegate.h"
#import "UISearchDisplayDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UITextFieldDelegate.h"

@class NSFetchedResultsController, NSMutableArray, NSString, NSTimer, TNDRAddFriendCell, TNDRFriend, TNDRFriendsChangeMyIDViewController, TNDRUISearchDisplayController, UIAlertView, UIImage, UINavigationBar, UISearchBar, UITableView, UIView;

@interface TNDRAddFriendsViewController : UIViewController <NSFetchedResultsControllerDelegate, TNDRActionSheetDelegate, UIGestureRecognizerDelegate, UIAlertViewDelegate, UITextFieldDelegate, TNDRFriendsChangeMyIDViewControllerDelegate, UISearchDisplayDelegate, UITableViewDelegate, UITableViewDataSource, UISearchBarDelegate, TNDRURLNavigableProtocol>
{
    UISearchBar *_searchBar;
    NSString *_lastSearchedText;
    float _topOffset;
    UIImage *_imageForNoFriends;
    TNDRFriend *_selectedFriend;
    TNDRUISearchDisplayController *_searchController;
    int _retryCount;
    NSMutableArray *_friends;
    NSFetchedResultsController *_fetchedResultsController;
    NSFetchedResultsController *_fetchedResultsControllerForSearch;
    UIView *_searchBarContainer;
    UIView *_searchBarBackground;
    float _keyboardAnimationDuration;
    TNDRFriend *_friend;
    UIAlertView *_friendAlertView;
    TNDRFriend *_friendToPresentFromSearch;
    UIAlertView *_requestFriendAlertView;
    UINavigationBar *_navigationBar;
    UITableView *_tableView;
    TNDRAddFriendCell *_cellForAddingFriendByTinderID;
    UIView *_tellUserToGetATinderID;
    TNDRFriendsChangeMyIDViewController *_adjustTinderIDViewController;
    NSTimer *_refreshFriendsTimer;
}

+ (id)viewControllerNavigationKey;
- (void).cxx_destruct;
- (void)addObservers;
- (void)addTinderIDAndMarkRequestAsSent:(id)arg1 userID:(id)arg2;
- (void)adjustTableViewContentOffset;
@property(retain, nonatomic) TNDRFriendsChangeMyIDViewController *adjustTinderIDViewController; // @synthesize adjustTinderIDViewController=_adjustTinderIDViewController;
- (void)applicationWillEnterForeground:(id)arg1;
@property(retain, nonatomic) TNDRAddFriendCell *cellForAddingFriendByTinderID; // @synthesize cellForAddingFriendByTinderID=_cellForAddingFriendByTinderID;
- (void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned int)arg4 newIndexPath:(id)arg5;
- (void)controller:(id)arg1 didChangeSection:(id)arg2 atIndex:(unsigned int)arg3 forChangeType:(unsigned int)arg4;
- (void)controllerDidChangeContent:(id)arg1;
- (void)controllerWillChangeContent:(id)arg1;
- (unsigned int)countCurrentUsersShown;
- (void)dealloc;
- (void)didFinishChangingID;
- (void)didReceiveMemoryWarning;
- (void)doneButtonTapped;
@property(retain, nonatomic) NSFetchedResultsController *fetchedResultsController; // @synthesize fetchedResultsController=_fetchedResultsController;
@property(retain, nonatomic) NSFetchedResultsController *fetchedResultsControllerForSearch; // @synthesize fetchedResultsControllerForSearch=_fetchedResultsControllerForSearch;
- (struct CGRect)frameForTableView;
@property(retain, nonatomic) TNDRFriend *friend; // @synthesize friend=_friend;
@property(retain, nonatomic) UIAlertView *friendAlertView; // @synthesize friendAlertView=_friendAlertView;
@property(retain, nonatomic) TNDRFriend *friendToPresentFromSearch; // @synthesize friendToPresentFromSearch=_friendToPresentFromSearch;
@property(retain, nonatomic) NSMutableArray *friends; // @synthesize friends=_friends;
- (void)friendsDataReady;
- (void)handleDataModelChange:(id)arg1;
- (void)inviteFriendToTinder:(id)arg1;
- (BOOL)isThereAlreadyAPendingRequest:(id)arg1;
@property(nonatomic) float keyboardAnimationDuration; // @synthesize keyboardAnimationDuration=_keyboardAnimationDuration;
- (void)markRequestAsSent;
- (void)matchRequestAlert:(id)arg1;
@property(retain, nonatomic) UINavigationBar *navigationBar; // @synthesize navigationBar=_navigationBar;
- (void)notifyUserThatRequestFailed;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)parseURLParams:(id)arg1;
- (void)performSearch:(id)arg1;
@property(retain, nonatomic) NSTimer *refreshFriendsTimer; // @synthesize refreshFriendsTimer=_refreshFriendsTimer;
- (void)remindUserToGetATinderIDIfNecessary;
@property(retain, nonatomic) UIAlertView *requestFriendAlertView; // @synthesize requestFriendAlertView=_requestFriendAlertView;
@property(retain, nonatomic) UIView *searchBarBackground; // @synthesize searchBarBackground=_searchBarBackground;
@property(retain, nonatomic) UIView *searchBarContainer; // @synthesize searchBarContainer=_searchBarContainer;
- (struct CGRect)searchBarFrame;
- (BOOL)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2;
- (void)searchDisplayControllerDidEndSearch:(id)arg1;
- (void)searchDisplayControllerWillBeginSearch:(id)arg1;
- (id)sectionHeaderLabelForRect:(struct CGRect)arg1;
- (void)sendMatchRequest:(id)arg1;
- (void)sendMatchRequestToServerForFacebookFriend;
- (void)sendMatchRequestToServerForFacebookFriendOnTinder;
- (void)sendMatchRequestToServerForTinderID:(id)arg1;
- (void)sendMatchRequestToTinderID:(id)arg1;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIView *tellUserToGetATinderID; // @synthesize tellUserToGetATinderID=_tellUserToGetATinderID;
- (void)setupFriendsData;
- (void)setupNavBar;
- (void)setupPlaceholderText;
- (void)setupSearchDisplayController;
- (void)setupTableHeaderView;
- (void)setupTableView;
- (void)setupTemporaryCellForTinderID;
- (void)setupTimer;
- (void)showAddTinderIDController;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 configureCell:(id)arg2 atIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (void)transitionTo:(id)arg1 optionsDict:(id)arg2 animated:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)userDidLogout:(id)arg1;
- (void)userWantsATinderID;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


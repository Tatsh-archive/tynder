//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

@class NSArray, UIView;

@interface TNDRFacebookPhotoAlbumListController : UITableViewController
{
    NSArray *_albums;
    BOOL _fbAlbumsCompleted;
    BOOL _fbMyTaggedPhotosCompleted;
    UIView *_activityContainerView;
    id _photoPickerDelegate;
}

- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)hideLoadingView;
- (id)initWithStyle:(int)arg1;
- (void)loadAlbums;
- (void)makeFBRequestForPhotosTaggedWithMe;
- (int)numberOfSectionsInTableView:(id)arg1;
@property(nonatomic) __weak id photoPickerDelegate; // @synthesize photoPickerDelegate=_photoPickerDelegate;
- (void)setup;
- (void)showLoadingView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)viewDidLoad;

@end


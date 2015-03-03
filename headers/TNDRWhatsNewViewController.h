//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSString, UIButton, UIImage, UIImageView, UILabel, UITableView, UIView;

@interface TNDRWhatsNewViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>
{
    UIImage *_blurredImageBackground;
    UILabel *_introducingLabel;
    UILabel *_titleLabel;
    UITableView *_tableView;
    UIButton *_closeButton;
    NSArray *_items;
    UIView *_backgroundOverlay;
    UIImageView *_blurredImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *backgroundOverlay; // @synthesize backgroundOverlay=_backgroundOverlay;
@property(retain, nonatomic) UIImage *blurredImageBackground; // @synthesize blurredImageBackground=_blurredImageBackground;
@property(retain, nonatomic) UIImageView *blurredImageView; // @synthesize blurredImageView=_blurredImageView;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
- (void)closeButtonPressed:(id)arg1;
- (void)didReceiveMemoryWarning;
- (id)initWithItems:(id)arg1;
@property(retain, nonatomic) UILabel *introducingLabel; // @synthesize introducingLabel=_introducingLabel;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
- (void)loadView;
- (int)numberOfSectionsInTableView:(id)arg1;
- (int)preferredStatusBarStyle;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)setupCloseButton;
- (void)setupTableView;
- (void)setupTitle;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
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


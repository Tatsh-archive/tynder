//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "MFMailComposeViewControllerDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class FBTweakStore, NSArray, NSString, UITableView, UIToolbar;

@interface _FBTweakCategoryViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UIAlertViewDelegate, MFMailComposeViewControllerDelegate>
{
    UITableView *_tableView;
    UIToolbar *_toolbar;
    NSArray *_sortedCategories;
    FBTweakStore *_store;
    id <_FBTweakCategoryViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_done;
- (void)_export;
- (void)_reset;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)dealloc;
@property(nonatomic) __weak id <_FBTweakCategoryViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithStore:(id)arg1;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3;
- (int)numberOfSectionsInTableView:(id)arg1;
@property(readonly, nonatomic) FBTweakStore *store; // @synthesize store=_store;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

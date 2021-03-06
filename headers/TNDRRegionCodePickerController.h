//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NBPhoneNumberUtil, NSArray, NSIndexPath, NSNumber, NSString, UIBarButtonItem, UINavigationBar, UITableView;

@interface TNDRRegionCodePickerController : UIViewController <UITableViewDataSource, UITableViewDelegate>
{
    id <TNDRRegionCodePickerDelegate> _delegate;
    NSNumber *_selectedRegionPrefix;
    NSString *_selectedRegionCode;
    UITableView *_tableView;
    UINavigationBar *_navigationBar;
    NSArray *_regionData;
    NBPhoneNumberUtil *_sharedPhoneUtil;
    UIBarButtonItem *_barButtonChoose;
    NSString *_cellIdentifier;
    NSIndexPath *_selectedIndexPath;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIBarButtonItem *barButtonChoose; // @synthesize barButtonChoose=_barButtonChoose;
@property(retain, nonatomic) NSString *cellIdentifier; // @synthesize cellIdentifier=_cellIdentifier;
@property(retain, nonatomic) id <TNDRRegionCodePickerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didReceiveMemoryWarning;
- (void)handleChooseRegionTapped:(id)arg1;
- (void)handleCloseTapped:(id)arg1;
- (id)init;
@property(retain, nonatomic) UINavigationBar *navigationBar; // @synthesize navigationBar=_navigationBar;
- (int)numberOfSectionsInTableView:(id)arg1;
@property(retain, nonatomic) NSArray *regionData; // @synthesize regionData=_regionData;
- (void)scrollToSelectedCountry;
@property(retain, nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
@property(retain, nonatomic) NSString *selectedRegionCode; // @synthesize selectedRegionCode=_selectedRegionCode;
@property(retain, nonatomic) NSNumber *selectedRegionPrefix; // @synthesize selectedRegionPrefix=_selectedRegionPrefix;
@property(retain, nonatomic) NBPhoneNumberUtil *sharedPhoneUtil; // @synthesize sharedPhoneUtil=_sharedPhoneUtil;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void)setup;
- (void)setupData;
- (void)setupNavigationBar;
- (void)setupTableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


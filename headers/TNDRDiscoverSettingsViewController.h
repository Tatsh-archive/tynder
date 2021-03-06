//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

#import "TNDROptionsTableViewControllerDelegate.h"
#import "TNDRSliderCellDelegate.h"
#import "TNDRSwitchCellDelegate.h"
#import "TNDRURLNavigableProtocol.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSString, TNDRDescriptionFooterView, TNDRSliderCell, UISwitch, UITableViewCell;

@interface TNDRDiscoverSettingsViewController : UITableViewController <TNDRSliderCellDelegate, TNDRSwitchCellDelegate, TNDROptionsTableViewControllerDelegate, UITableViewDataSource, UITableViewDelegate, TNDRURLNavigableProtocol>
{
    BOOL _preventUpdateOfSettings;
    UITableViewCell *_showMeCell;
    TNDRDescriptionFooterView *_showMeDescriptionFooter;
    TNDRSliderCell *_distanceSliderCell;
    TNDRSliderCell *_ageSliderCell;
    UITableViewCell *_genderPreferenceCell;
    UITableViewCell *_momentsPollingCell;
    UISwitch *_momentsPollingSwitch;
    UISwitch *_showMeSwitch;
}

+ (id)viewControllerNavigationKey;
- (void).cxx_destruct;
- (void)adjustAgeSliderCellValuesForCurrentUser:(id)arg1;
@property(retain, nonatomic) TNDRSliderCell *ageSliderCell; // @synthesize ageSliderCell=_ageSliderCell;
- (void)configureDistanceSliderCellForMetricMeasurement:(id)arg1;
- (void)configureDistanceSliderCellForStandardMeasurement:(id)arg1;
- (void)configureForCurrentUser;
- (int)currentSelectedGender;
- (void)didChangeSliderValue:(id)arg1;
- (void)didSelectOptionWithIndex:(int)arg1;
- (void)didToggleSwitch:(id)arg1;
@property(retain, nonatomic) TNDRSliderCell *distanceSliderCell; // @synthesize distanceSliderCell=_distanceSliderCell;
@property(retain, nonatomic) UITableViewCell *genderPreferenceCell; // @synthesize genderPreferenceCell=_genderPreferenceCell;
- (void)handleDiscoverSwitchChanged:(id)arg1;
- (void)handleMomentsPollingSwitchChange:(id)arg1;
- (id)init;
@property(retain, nonatomic) UITableViewCell *momentsPollingCell; // @synthesize momentsPollingCell=_momentsPollingCell;
@property(retain, nonatomic) UISwitch *momentsPollingSwitch; // @synthesize momentsPollingSwitch=_momentsPollingSwitch;
- (int)numberOfSectionsInTableView:(id)arg1;
@property(nonatomic) BOOL preventUpdateOfSettings; // @synthesize preventUpdateOfSettings=_preventUpdateOfSettings;
@property(retain, nonatomic) UITableViewCell *showMeCell; // @synthesize showMeCell=_showMeCell;
@property(retain, nonatomic) TNDRDescriptionFooterView *showMeDescriptionFooter; // @synthesize showMeDescriptionFooter=_showMeDescriptionFooter;
@property(retain, nonatomic) UISwitch *showMeSwitch; // @synthesize showMeSwitch=_showMeSwitch;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(int)arg2;
- (void)updateServerWithChangedSettings;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

// Remaining properties
@property(readonly, nonatomic) id <UIViewControllerAnimatedTransitioning> animationController;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


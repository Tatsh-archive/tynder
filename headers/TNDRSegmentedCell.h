//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TNDRSettingsCell.h"

@class UISegmentedControl;

@interface TNDRSegmentedCell : TNDRSettingsCell
{
    id <TNDRSegmentedCellDelegate> _delegate;
    UISegmentedControl *_segmentedControl;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <TNDRSegmentedCellDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)segmentChanged:(id)arg1;
@property(retain, nonatomic) UISegmentedControl *segmentedControl; // @synthesize segmentedControl=_segmentedControl;
- (void)setup;

@end


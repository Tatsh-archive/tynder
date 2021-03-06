//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class MPSurveyTableViewCellBackground, NSLayoutConstraint, UIImageView, UILabel;

@interface MPSurveyTableViewCell : UITableViewCell
{
    BOOL _checked;
    UILabel *_label;
    UILabel *_selectedLabel;
    UIImageView *_checkmark;
    MPSurveyTableViewCellBackground *_customBackgroundView;
    MPSurveyTableViewCellBackground *_customSelectedBackgroundView;
    NSLayoutConstraint *_selectedLabelLeadingSpace;
    NSLayoutConstraint *_checkmarkLeadingSpace;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *checkmark; // @synthesize checkmark=_checkmark;
@property(retain, nonatomic) NSLayoutConstraint *checkmarkLeadingSpace; // @synthesize checkmarkLeadingSpace=_checkmarkLeadingSpace;
@property(retain, nonatomic) MPSurveyTableViewCellBackground *customBackgroundView; // @synthesize customBackgroundView=_customBackgroundView;
@property(retain, nonatomic) MPSurveyTableViewCellBackground *customSelectedBackgroundView; // @synthesize customSelectedBackgroundView=_customSelectedBackgroundView;
@property(nonatomic, getter=isChecked) BOOL checked; // @synthesize checked=_checked;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UILabel *selectedLabel; // @synthesize selectedLabel=_selectedLabel;
@property(retain, nonatomic) NSLayoutConstraint *selectedLabelLeadingSpace; // @synthesize selectedLabelLeadingSpace=_selectedLabelLeadingSpace;
- (void)setChecked:(BOOL)arg1 animatedWithCompletion:(CDUnknownBlockType)arg2;

@end


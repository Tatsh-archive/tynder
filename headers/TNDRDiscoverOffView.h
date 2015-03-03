//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIButton, UIImageView, UILabel;

@interface TNDRDiscoverOffView : UIView
{
    NSString *_discoverOffTitle;
    NSString *_discoverOffDescription;
    NSString *_discoverButtonTitle;
    id <TNDRDiscoverOffViewDelegate> _delegate;
    UIButton *_discoverButton;
    UILabel *_discoverOffTitleLabel;
    UILabel *_discoverOffDescriptionLabel;
    UIImageView *_cardOutlines;
    UIImageView *_gamePadInactive;
}

- (void).cxx_destruct;
- (void)animateOut:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) UIImageView *cardOutlines; // @synthesize cardOutlines=_cardOutlines;
@property(nonatomic) __weak id <TNDRDiscoverOffViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didTapDiscoverButton:(id)arg1;
@property(retain, nonatomic) UIButton *discoverButton; // @synthesize discoverButton=_discoverButton;
@property(retain, nonatomic) UILabel *discoverOffDescriptionLabel; // @synthesize discoverOffDescriptionLabel=_discoverOffDescriptionLabel;
@property(retain, nonatomic) UILabel *discoverOffTitleLabel; // @synthesize discoverOffTitleLabel=_discoverOffTitleLabel;
@property(retain, nonatomic) UIImageView *gamePadInactive; // @synthesize gamePadInactive=_gamePadInactive;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setup;

@end


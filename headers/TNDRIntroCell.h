//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class UIImageView, UILabel;

@interface TNDRIntroCell : UICollectionViewCell
{
    UILabel *_descriptionLabel;
    UIImageView *_screenshotImageView;
    UIImageView *_phoneWireFrameImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
- (id)initWithFrame:(struct CGRect)arg1;
@property(retain, nonatomic) UIImageView *phoneWireFrameImageView; // @synthesize phoneWireFrameImageView=_phoneWireFrameImageView;
- (void)prepareForReuse;
@property(retain, nonatomic) UIImageView *screenshotImageView; // @synthesize screenshotImageView=_screenshotImageView;
- (void)setup;

@end


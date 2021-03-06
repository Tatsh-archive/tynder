//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SMCalloutBackgroundView.h"

@class UIImage, UIImageView;

@interface SMCalloutImageBackgroundView : SMCalloutBackgroundView
{
    UIImageView *leftCap;
    UIImageView *rightCap;
    UIImageView *topAnchor;
    UIImageView *bottomAnchor;
    UIImageView *leftBackground;
    UIImageView *rightBackground;
    UIImage *_leftCapImage;
    UIImage *_rightCapImage;
    UIImage *_topAnchorImage;
    UIImage *_bottomAnchorImage;
    UIImage *_backgroundImage;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(retain, nonatomic) UIImage *bottomAnchorImage; // @synthesize bottomAnchorImage=_bottomAnchorImage;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(retain, nonatomic) UIImage *leftCapImage; // @synthesize leftCapImage=_leftCapImage;
@property(retain, nonatomic) UIImage *rightCapImage; // @synthesize rightCapImage=_rightCapImage;
- (void)setArrowPoint:(struct CGPoint)arg1;
@property(retain, nonatomic) UIImage *topAnchorImage; // @synthesize topAnchorImage=_topAnchorImage;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIImageView, UILabel;

@interface TNDRPullToRefreshView : UIView
{
    NSString *_pullDownText;
    NSString *_releaseText;
    UIImageView *_arrowImageView;
    UILabel *_refreshLabel;
}

- (void).cxx_destruct;
- (void)adjustPullToRefreshArrowToOffsetAmount:(float)arg1;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)notifyForHeaderItemAdjustment:(float)arg1;
@property(retain, nonatomic) UILabel *refreshLabel; // @synthesize refreshLabel=_refreshLabel;
- (void)reset;
- (void)setup;

@end


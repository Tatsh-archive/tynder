//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TNDRDialogViewController.h"

@class NSAttributedString, UIImage;

@interface TNDRReportDialogViewController : TNDRDialogViewController
{
    NSAttributedString *_titleText;
    NSAttributedString *_detailText;
    UIImage *_reportIcon;
    unsigned int _footerOptions;
}

+ (id)reportIcon;
- (void).cxx_destruct;
@property(retain, nonatomic) NSAttributedString *detailText; // @synthesize detailText=_detailText;
@property(nonatomic) unsigned int footerOptions; // @synthesize footerOptions=_footerOptions;
- (id)init;
@property(retain, nonatomic) UIImage *reportIcon; // @synthesize reportIcon=_reportIcon;
@property(retain, nonatomic) NSAttributedString *titleText; // @synthesize titleText=_titleText;
- (void)viewDidLoad;

@end

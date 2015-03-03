//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MFMailComposeViewControllerDelegate.h"
#import "TNDRActionSheetDelegate.h"

@class NSString, TNDRActionSheet, UIImageView, UIViewController;

@interface TNDRSupportContacter : NSObject <MFMailComposeViewControllerDelegate, TNDRActionSheetDelegate>
{
    UIViewController *_viewController;
    TNDRActionSheet *_actionSheet;
    UIImageView *_blurredBackgroundView;
    int _mailSendType;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TNDRActionSheet *actionSheet; // @synthesize actionSheet=_actionSheet;
- (void)actionSheet:(id)arg1 triggeredButtonWithId:(int)arg2;
@property(retain, nonatomic) UIImageView *blurredBackgroundView; // @synthesize blurredBackgroundView=_blurredBackgroundView;
- (id)defaultEmailBody;
- (id)initWithViewControllerToPresentOn:(id)arg1;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3;
@property(nonatomic) int mailSendType; // @synthesize mailSendType=_mailSendType;
- (void)makeBlurredBackground:(id)arg1;
- (void)makeSuggestion;
- (void)partner;
- (void)report;
@property(retain, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
- (void)show;
- (void)showContactUsOnView:(id)arg1;
- (void)trackMailSentEvent;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TNDRDialogViewController.h"

#import "UIGestureRecognizerDelegate.h"
#import "UITextFieldDelegate.h"

@class NSAttributedString, NSString, TNDRUser, UIButton, UITapGestureRecognizer, UITextField;

@interface TNDROtherReasonDialogViewController : TNDRDialogViewController <UITextFieldDelegate, UIGestureRecognizerDelegate>
{
    TNDRUser *_user;
    NSAttributedString *_titleText;
    NSAttributedString *_detailText;
    UITapGestureRecognizer *_contentTapGestureRecognizer;
    unsigned int _dialogType;
    struct CGPoint _defaultCenter;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIButton *cancelButton;
@property(retain, nonatomic) UITapGestureRecognizer *contentTapGestureRecognizer; // @synthesize contentTapGestureRecognizer=_contentTapGestureRecognizer;
@property(nonatomic) struct CGPoint defaultCenter; // @synthesize defaultCenter=_defaultCenter;
@property(retain, nonatomic) NSAttributedString *detailText; // @synthesize detailText=_detailText;
@property(nonatomic) unsigned int dialogType; // @synthesize dialogType=_dialogType;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)handleCancelButtonTap;
- (void)handleReportButtonTap;
- (void)handleTapInContainerView:(id)arg1;
- (id)initWithOtherReasonDialogType:(unsigned int)arg1 user:(id)arg2;
@property(readonly, nonatomic) UITextField *messageTextField;
- (void)registerNotifications;
@property(readonly, nonatomic) UIButton *reportButton;
- (id)reportIcon;
@property(retain, nonatomic) NSAttributedString *titleText; // @synthesize titleText=_titleText;
@property(retain, nonatomic) TNDRUser *user; // @synthesize user=_user;
- (void)setupContentTapGestureRecognizer;
- (void)setupControls;
- (void)setupTitleAndDetail;
- (void)setupViews;
- (void)textFieldDidFinish;
- (BOOL)textFieldShouldEndEditing:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)willHideKeyboard:(id)arg1;
- (void)willShowKeyboard:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <TNDROtherReasonDialogDelegate><TNDRDialogViewControllerDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


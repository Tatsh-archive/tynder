//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MPSurveyQuestionViewController.h"

#import "UITextViewDelegate.h"

@class MPSurveyTextQuestion, NSLayoutConstraint, NSString, UILabel, UITextView, UIView;

@interface MPSurveyTextQuestionViewController : MPSurveyQuestionViewController <UITextViewDelegate>
{
    NSLayoutConstraint *_promptTopSpace;
    UITextView *_textView;
    NSLayoutConstraint *_textViewHeight;
    UIView *_keyboardAccessory;
    NSLayoutConstraint *_keyboardAccessoryWidth;
    UILabel *_charactersLeftLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *charactersLeftLabel; // @synthesize charactersLeftLabel=_charactersLeftLabel;
- (void)hideKeyboard;
@property(retain, nonatomic) UIView *keyboardAccessory; // @synthesize keyboardAccessory=_keyboardAccessory;
@property(retain, nonatomic) NSLayoutConstraint *keyboardAccessoryWidth; // @synthesize keyboardAccessoryWidth=_keyboardAccessoryWidth;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
@property(retain, nonatomic) NSLayoutConstraint *promptTopSpace; // @synthesize promptTopSpace=_promptTopSpace;
- (void)registerForKeyboardNotifications;
@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) NSLayoutConstraint *textViewHeight; // @synthesize textViewHeight=_textViewHeight;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(retain, nonatomic) MPSurveyTextQuestion *question;
@property(readonly) Class superclass;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "MPSurveyQuestionViewControllerDelegate.h"

@class MPSurvey, NSMutableArray, NSMutableDictionary, NSString, UIButton, UIColor, UIImage, UIImageView, UILabel, UIView;

@interface MPSurveyNavigationController : UIViewController <MPSurveyQuestionViewControllerDelegate>
{
    MPSurvey *_survey;
    UIImage *_backgroundImage;
    id <MPSurveyNavigationControllerDelegate> _delegate;
    UIColor *_highlightColor;
    UIView *_containerView;
    UILabel *_pageNumberLabel;
    UIButton *_nextButton;
    UIButton *_previousButton;
    UIImageView *_logo;
    UIButton *_exitButton;
    UIView *_header;
    UIView *_footer;
    NSMutableArray *_questionControllers;
    UIViewController *_currentQuestionController;
    NSMutableDictionary *_answers;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *answers; // @synthesize answers=_answers;
@property(retain, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
- (void)beginAppearanceTransition:(BOOL)arg1 animated:(BOOL)arg2;
- (void)constrainQuestionView:(id)arg1;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
- (unsigned int)currentIndex;
@property(nonatomic) __weak UIViewController *currentQuestionController; // @synthesize currentQuestionController=_currentQuestionController;
@property(nonatomic) __weak id <MPSurveyNavigationControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dismiss;
- (void)endAppearanceTransition;
@property(retain, nonatomic) UIButton *exitButton; // @synthesize exitButton=_exitButton;
@property(retain, nonatomic) UIView *footer; // @synthesize footer=_footer;
@property(retain, nonatomic) UIView *header; // @synthesize header=_header;
@property(retain, nonatomic) UIColor *highlightColor; // @synthesize highlightColor=_highlightColor;
- (void)loadQuestion:(unsigned int)arg1;
@property(retain, nonatomic) UIImageView *logo; // @synthesize logo=_logo;
@property(retain, nonatomic) UIButton *nextButton; // @synthesize nextButton=_nextButton;
@property(retain, nonatomic) UILabel *pageNumberLabel; // @synthesize pageNumberLabel=_pageNumberLabel;
- (int)preferredStatusBarStyle;
- (int)preferredStatusBarUpdateAnimation;
@property(retain, nonatomic) UIButton *previousButton; // @synthesize previousButton=_previousButton;
- (void)questionController:(id)arg1 didReceiveAnswerProperties:(id)arg2;
@property(retain, nonatomic) NSMutableArray *questionControllers; // @synthesize questionControllers=_questionControllers;
@property(retain, nonatomic) MPSurvey *survey; // @synthesize survey=_survey;
- (void)showNextQuestion;
- (void)showPreviousQuestion;
- (void)showQuestionAtIndex:(unsigned int)arg1 animatingForward:(BOOL)arg2;
- (void)updateButtons:(unsigned int)arg1;
- (void)updatePageNumber:(unsigned int)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIImageView *view;

@end


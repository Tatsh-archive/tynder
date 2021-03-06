//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "NJKWebViewProgressDelegate.h"
#import "UIWebViewDelegate.h"

@class NJKWebViewProgress, NJKWebViewProgressView, NSString, UIBarButtonItem, UIWebView;

@interface TNDRSansNavigationWebViewController : UIViewController <UIWebViewDelegate, NJKWebViewProgressDelegate>
{
    NJKWebViewProgress *_progressProxy;
    NJKWebViewProgressView *_progressView;
    UIBarButtonItem *_backButtonItem;
    UIBarButtonItem *_forwardButtonItem;
    UIBarButtonItem *_shareButtonItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIBarButtonItem *backButtonItem; // @synthesize backButtonItem=_backButtonItem;
- (void)doneSelected:(id)arg1;
@property(retain, nonatomic) UIBarButtonItem *forwardButtonItem; // @synthesize forwardButtonItem=_forwardButtonItem;
- (void)goBack:(id)arg1;
- (void)goForward:(id)arg1;
- (void)loadURL:(id)arg1;
- (void)loadView;
- (void)moreSelected:(id)arg1;
@property(retain, nonatomic) NJKWebViewProgress *progressProxy; // @synthesize progressProxy=_progressProxy;
@property(retain, nonatomic) NJKWebViewProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UIBarButtonItem *shareButtonItem; // @synthesize shareButtonItem=_shareButtonItem;
- (void)setupNavigationBarItems;
- (void)setupToolbarItems;
- (void)viewDidLoad;
@property(readonly, nonatomic) UIWebView *webView;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewProgress:(id)arg1 updateProgress:(float)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


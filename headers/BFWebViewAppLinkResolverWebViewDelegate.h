//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIWebViewDelegate.h"

@class NSString;

@interface BFWebViewAppLinkResolverWebViewDelegate : NSObject <UIWebViewDelegate>
{
    BOOL _hasLoaded;
    CDUnknownBlockType _didFinishLoad;
    CDUnknownBlockType _didFailLoadWithError;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType didFailLoadWithError; // @synthesize didFailLoadWithError=_didFailLoadWithError;
@property(copy, nonatomic) CDUnknownBlockType didFinishLoad; // @synthesize didFinishLoad=_didFinishLoad;
@property(nonatomic) BOOL hasLoaded; // @synthesize hasLoaded=_hasLoaded;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


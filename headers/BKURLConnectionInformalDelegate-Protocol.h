//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSError, NSURLAuthenticationChallenge, NSURLConnection, NSURLProtectionSpace, NSURLResponse;

@protocol BKURLConnectionInformalDelegate <NSObject>
- (BOOL)connection:(NSURLConnection *)arg1 canAuthenticateAgainstProtectionSpace:(NSURLProtectionSpace *)arg2;
- (void)connection:(NSURLConnection *)arg1 didFailWithError:(NSError *)arg2;
- (void)connection:(NSURLConnection *)arg1 didReceiveAuthenticationChallenge:(NSURLAuthenticationChallenge *)arg2;
- (void)connection:(NSURLConnection *)arg1 didReceiveData:(NSData *)arg2;
- (void)connection:(NSURLConnection *)arg1 didReceiveResponse:(NSURLResponse *)arg2;
- (void)connection:(NSURLConnection *)arg1 didSendBodyData:(int)arg2 totalBytesWritten:(int)arg3 totalBytesExpectedToWrite:(int)arg4;
- (void)connectionDidFinishLoading:(NSURLConnection *)arg1;
@end

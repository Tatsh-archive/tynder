//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURLRequest;

@protocol UMKMockURLRequest <NSObject>
- (BOOL)matchesURLRequest:(NSURLRequest *)arg1;
- (id <UMKMockURLResponder>)responderForURLRequest:(NSURLRequest *)arg1;

@optional
- (BOOL)shouldRemoveAfterServicingRequest:(NSURLRequest *)arg1;
@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL;

@interface CLSBetaUpdate : NSObject
{
    NSURL *url;
    NSString *version;
    NSString *promptMessage;
    NSString *promptTitle;
    NSString *cancelLabel;
    NSString *installLabel;
}

@property(retain, nonatomic) NSString *cancelLabel; // @synthesize cancelLabel;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1;
@property(retain, nonatomic) NSString *installLabel; // @synthesize installLabel;
@property(retain, nonatomic) NSString *promptMessage; // @synthesize promptMessage;
@property(retain, nonatomic) NSString *promptTitle; // @synthesize promptTitle;
@property(retain, nonatomic) NSURL *url; // @synthesize url;
@property(retain, nonatomic) NSString *version; // @synthesize version;

@end


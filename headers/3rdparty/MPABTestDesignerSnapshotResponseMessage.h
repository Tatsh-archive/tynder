//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MPAbstractABTestDesignerMessage.h"

@class NSDictionary, NSString, UIImage;

@interface MPABTestDesignerSnapshotResponseMessage : MPAbstractABTestDesignerMessage
{
    NSString *_imageHash;
}

+ (id)message;
- (void).cxx_destruct;
- (id)getImageHash:(id)arg1;
@property(readonly, nonatomic) NSString *imageHash; // @synthesize imageHash=_imageHash;
@property(retain, nonatomic) UIImage *screenshot;
@property(copy, nonatomic) NSDictionary *serializedObjects;

@end


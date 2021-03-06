//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ABRecord.h"

@class NSString;

@interface ABPerson : ABRecord
{
}

+ (unsigned int)compositeNameFormat;
+ (id)localizedNameOfProperty:(int)arg1;
+ (unsigned int)sortOrdering;
+ (unsigned int)typeOfProperty:(int)arg1;
- (int)compare:(id)arg1;
- (int)compare:(id)arg1 sortOrdering:(unsigned int)arg2;
- (id)description;
@property(readonly, getter=getFirstName) NSString *firstName;
@property(readonly, getter=getLastName) NSString *lastName;
@property(readonly, nonatomic) BOOL hasImageData;
- (id)imageData;
- (id)init;
- (id)initInSource:(id)arg1;
- (id)localizedAddressStringForLabel:(id)arg1 addCountryName:(BOOL)arg2;
- (id)localizedAddressStringsWithCountryName:(BOOL)arg1;
- (BOOL)removeImageData:(id *)arg1;
- (BOOL)setImageData:(id)arg1 error:(id *)arg2;
- (id)thumbnailImageData;
- (id)viewController;

@end


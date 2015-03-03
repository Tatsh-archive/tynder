//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NBPhoneNumberDesc, NSMutableArray, NSNumber, NSString;

@interface NBPhoneMetaData : NSObject
{
    BOOL _sameMobileAndFixedLinePattern;
    BOOL _mainCountryForCode;
    BOOL _leadingZeroPossible;
    NBPhoneNumberDesc *_generalDesc;
    NBPhoneNumberDesc *_fixedLine;
    NBPhoneNumberDesc *_mobile;
    NBPhoneNumberDesc *_tollFree;
    NBPhoneNumberDesc *_premiumRate;
    NBPhoneNumberDesc *_sharedCost;
    NBPhoneNumberDesc *_personalNumber;
    NBPhoneNumberDesc *_voip;
    NBPhoneNumberDesc *_pager;
    NBPhoneNumberDesc *_uan;
    NBPhoneNumberDesc *_emergency;
    NBPhoneNumberDesc *_voicemail;
    NBPhoneNumberDesc *_noInternationalDialling;
    NSString *_codeID;
    NSNumber *_countryCode;
    NSString *_internationalPrefix;
    NSString *_preferredInternationalPrefix;
    NSString *_nationalPrefix;
    NSString *_preferredExtnPrefix;
    NSString *_nationalPrefixForParsing;
    NSString *_nationalPrefixTransformRule;
    NSMutableArray *_numberFormats;
    NSMutableArray *_intlNumberFormats;
    NSString *_leadingDigits;
}

- (void).cxx_destruct;
- (void)buildData:(id)arg1;
@property(retain, nonatomic) NSString *codeID; // @synthesize codeID=_codeID;
@property(retain, nonatomic) NSNumber *countryCode; // @synthesize countryCode=_countryCode;
- (id)description;
@property(retain, nonatomic) NBPhoneNumberDesc *emergency; // @synthesize emergency=_emergency;
- (void)encodeWithCoder:(id)arg1;
@property(retain, nonatomic) NBPhoneNumberDesc *fixedLine; // @synthesize fixedLine=_fixedLine;
@property(retain, nonatomic) NBPhoneNumberDesc *generalDesc; // @synthesize generalDesc=_generalDesc;
- (id)init;
- (id)initWithCoder:(id)arg1;
@property(retain, nonatomic) NSString *internationalPrefix; // @synthesize internationalPrefix=_internationalPrefix;
@property(retain, nonatomic) NSMutableArray *intlNumberFormats; // @synthesize intlNumberFormats=_intlNumberFormats;
@property(retain, nonatomic) NSString *leadingDigits; // @synthesize leadingDigits=_leadingDigits;
@property(nonatomic) BOOL leadingZeroPossible; // @synthesize leadingZeroPossible=_leadingZeroPossible;
@property(nonatomic) BOOL mainCountryForCode; // @synthesize mainCountryForCode=_mainCountryForCode;
@property(retain, nonatomic) NBPhoneNumberDesc *mobile; // @synthesize mobile=_mobile;
@property(retain, nonatomic) NSString *nationalPrefix; // @synthesize nationalPrefix=_nationalPrefix;
@property(retain, nonatomic) NSString *nationalPrefixForParsing; // @synthesize nationalPrefixForParsing=_nationalPrefixForParsing;
@property(retain, nonatomic) NSString *nationalPrefixTransformRule; // @synthesize nationalPrefixTransformRule=_nationalPrefixTransformRule;
@property(retain, nonatomic) NBPhoneNumberDesc *noInternationalDialling; // @synthesize noInternationalDialling=_noInternationalDialling;
- (id)numberFormatArrayFromData:(id)arg1;
@property(retain, nonatomic) NSMutableArray *numberFormats; // @synthesize numberFormats=_numberFormats;
@property(retain, nonatomic) NBPhoneNumberDesc *pager; // @synthesize pager=_pager;
@property(retain, nonatomic) NBPhoneNumberDesc *personalNumber; // @synthesize personalNumber=_personalNumber;
@property(retain, nonatomic) NSString *preferredExtnPrefix; // @synthesize preferredExtnPrefix=_preferredExtnPrefix;
@property(retain, nonatomic) NSString *preferredInternationalPrefix; // @synthesize preferredInternationalPrefix=_preferredInternationalPrefix;
@property(retain, nonatomic) NBPhoneNumberDesc *premiumRate; // @synthesize premiumRate=_premiumRate;
@property(nonatomic) BOOL sameMobileAndFixedLinePattern; // @synthesize sameMobileAndFixedLinePattern=_sameMobileAndFixedLinePattern;
@property(retain, nonatomic) NBPhoneNumberDesc *sharedCost; // @synthesize sharedCost=_sharedCost;
@property(retain, nonatomic) NBPhoneNumberDesc *tollFree; // @synthesize tollFree=_tollFree;
@property(retain, nonatomic) NBPhoneNumberDesc *uan; // @synthesize uan=_uan;
@property(retain, nonatomic) NBPhoneNumberDesc *voicemail; // @synthesize voicemail=_voicemail;
@property(retain, nonatomic) NBPhoneNumberDesc *voip; // @synthesize voip=_voip;

@end


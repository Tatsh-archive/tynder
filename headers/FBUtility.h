//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FBUtility : NSObject
{
}

+ (void)addBasicInfoPermission:(id)arg1;
+ (id)advertiserID;
+ (unsigned int)advertisingTrackingStatus;
+ (BOOL)areAllPermissionsReadPermissions:(id)arg1;
+ (id)attributionID;
+ (id)buildFacebookUrlWithPre:(id)arg1;
+ (id)buildFacebookUrlWithPre:(id)arg1 post:(id)arg2 version:(id)arg3;
+ (id)buildFacebookUrlWithPre:(id)arg1 withPost:(id)arg2;
+ (void)callTheFetchAppSettingsCallback:(CDUnknownBlockType)arg1;
+ (void)centerView:(id)arg1 tableView:(id)arg2;
+ (unsigned long)currentTimeInMilliseconds;
+ (void)deleteFacebookCookies;
+ (id)dialogBaseURL;
+ (id)dictionaryByParsingURLQueryPart:(id)arg1;
+ (id)expirationDateFromExpirationTimeIntervalString:(id)arg1;
+ (id)expirationDateFromExpirationUnixTimeString:(id)arg1;
+ (id)facebookSDKBundle;
+ (void)fetchAppSettings:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (id)fetchedAppSettings;
+ (id)graphObjectInArray:(id)arg1 withSameIDAs:(id)arg2;
+ (BOOL)isFacebookBundleIdentifier:(id)arg1;
+ (BOOL)isFetchedFBAppSettingsStale;
+ (BOOL)isMultitaskingSupported;
+ (BOOL)isPublishPermission:(id)arg1;
+ (BOOL)isRegisteredURLScheme:(id)arg1;
+ (BOOL)isRetinaDisplay;
+ (BOOL)isRunningOnOrAfter:(int)arg1;
+ (BOOL)isSystemAccountStoreAvailable;
+ (BOOL)isUIKitLinkedOnOrAfter:(int)arg1;
+ (id)localizedStringForKey:(id)arg1 withDefault:(id)arg2;
+ (id)localizedStringForKey:(id)arg1 withDefault:(id)arg2 inBundle:(id)arg3;
+ (id)newUUIDString;
+ (id)queryParamsDictionaryFromFBURL:(id)arg1;
+ (double)randomTimeInterval:(double)arg1 withMaxValue:(double)arg2;
+ (id)simpleJSONDecode:(id)arg1;
+ (id)simpleJSONDecode:(id)arg1 error:(id *)arg2;
+ (id)simpleJSONEncode:(id)arg1;
+ (id)simpleJSONEncode:(id)arg1 error:(id *)arg2 writingOptions:(unsigned int)arg3;
+ (id)stringAppBaseUrlFromAppId:(id)arg1 urlSchemeSuffix:(id)arg2;
+ (id)stringBySerializingQueryParameters:(id)arg1;
+ (id)stringByURLDecodingString:(id)arg1;
+ (id)stringByURLEncodingString:(id)arg1;
+ (id)stringFBIDFromObject:(id)arg1;
+ (void)updateParametersWithEventUsageLimitsAndBundleInfo:(id)arg1 accessAdvertisingTrackingStatus:(BOOL)arg2;

@end


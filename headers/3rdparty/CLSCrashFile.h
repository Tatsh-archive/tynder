//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CLSCrashReport.h"

@class NSArray, NSDate, NSDictionary, NSMutableArray, NSString;

@interface CLSCrashFile : NSObject <CLSCrashReport>
{
    NSDictionary *_crashData;
    NSString *_processingExecutableUUID;
    BOOL _executablesMatch;
    NSString *_logFilePath;
    NSMutableArray *_uuids;
    NSMutableArray *_threads;
    NSArray *_exceptionFrames;
}

+ (id)parse:(id)arg1;
@property(readonly, nonatomic) NSString *OSBuildVersion;
@property(readonly, nonatomic) NSString *OSVersion;
@property(readonly, copy, nonatomic) NSString *advertisingId;
- (int)architecture;
- (struct _ProtobufCBinaryData)binaryDataFromString:(id)arg1;
@property(readonly, retain, nonatomic) NSArray *binaryImageUUIDs;
@property(readonly, nonatomic) NSString *bundleShortVersionString;
@property(readonly, nonatomic) NSString *bundleVersion;
@property(readonly, nonatomic) NSDate *crashedOnDate;
@property(readonly, nonatomic) NSDictionary *customKeys;
- (void)dealloc;
@property(readonly, copy, nonatomic) NSString *deviceId;
@property(readonly, nonatomic) NSArray *exceptionBacktrace;
@property(readonly, nonatomic) BOOL executablesMatch; // @synthesize executablesMatch=_executablesMatch;
- (id)fontToken;
- (id)frameFromDictionary:(id)arg1;
- (void)freeApp:(struct _Crashlytics__Session__Application *)arg1;
- (void)freeDevice:(struct _Crashlytics__Session__Device *)arg1;
- (void)freeEvent:(struct _Crashlytics__Session__Event *)arg1;
@property(readonly, nonatomic) NSString *identifier;
- (id)initWithPath:(id)arg1;
@property(readonly, nonatomic) BOOL isValid;
@property(readonly, copy, nonatomic) NSString *logFilePath; // @synthesize logFilePath=_logFilePath;
- (BOOL)lookupUUID:(id *)arg1 andBaseAddress:(unsigned long long *)arg2 forAddress:(unsigned long long)arg3;
@property(readonly, copy, nonatomic) NSString *mainExecutableUUID;
- (id)objcSelectorName;
- (BOOL)populateApp:(struct _Crashlytics__Session__Application *)arg1;
- (BOOL)populateDevice:(struct _Crashlytics__Session__Device *)arg1;
- (BOOL)populateEvent:(struct _Crashlytics__Session__Event *)arg1;
- (BOOL)populateOS:(struct _Crashlytics__Session__OperatingSystem *)arg1;
- (void)populatePbufFrames:(struct _Crashlytics__Session__Event__Application__Execution__Thread__Frame **)arg1 usingFrames:(id)arg2;
- (BOOL)populateSession:(struct _Crashlytics__Session *)arg1;
- (BOOL)populateUser:(struct _Crashlytics__Session__User *)arg1;
@property(retain, nonatomic) NSString *processingExecutableUUID; // @synthesize processingExecutableUUID=_processingExecutableUUID;
- (id)sortedBinaryImageData;
- (void)symbolicateFrame:(id)arg1 UUIDMap:(id)arg2;
- (void)symbolicateWithUUIDMap:(id)arg1;
@property(readonly, nonatomic) NSArray *threads;
@property(readonly, copy, nonatomic) NSString *vendorId;
- (BOOL)writeCLSFileToPath:(id)arg1;

@end


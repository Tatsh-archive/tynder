//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, SDImageCache, SDWebImageDownloader;

@interface SDWebImageManager : NSObject
{
    id <SDWebImageManagerDelegate> _delegate;
    SDImageCache *_imageCache;
    SDWebImageDownloader *_imageDownloader;
    CDUnknownBlockType _cacheKeyFilter;
    NSMutableArray *_failedURLs;
    NSMutableArray *_runningOperations;
}

+ (id)sharedManager;
- (void).cxx_destruct;
@property(copy) CDUnknownBlockType cacheKeyFilter; // @synthesize cacheKeyFilter=_cacheKeyFilter;
- (id)cacheKeyForURL:(id)arg1;
- (BOOL)cachedImageExistsForURL:(id)arg1;
- (void)cachedImageExistsForURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)cancelAll;
- (id)createCache;
@property(nonatomic) __weak id <SDWebImageManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (BOOL)diskImageExistsForURL:(id)arg1;
- (void)diskImageExistsForURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)downloadImageWithURL:(id)arg1 options:(unsigned int)arg2 progress:(CDUnknownBlockType)arg3 completed:(CDUnknownBlockType)arg4;
- (id)downloadWithURL:(id)arg1 options:(unsigned int)arg2 progress:(CDUnknownBlockType)arg3 completed:(CDUnknownBlockType)arg4;
@property(retain, nonatomic) NSMutableArray *failedURLs; // @synthesize failedURLs=_failedURLs;
@property(retain, nonatomic) SDImageCache *imageCache; // @synthesize imageCache=_imageCache;
@property(retain, nonatomic) SDWebImageDownloader *imageDownloader; // @synthesize imageDownloader=_imageDownloader;
- (id)init;
- (BOOL)isRunning;
@property(retain, nonatomic) NSMutableArray *runningOperations; // @synthesize runningOperations=_runningOperations;
- (void)saveImageToCache:(id)arg1 forURL:(id)arg2;

@end


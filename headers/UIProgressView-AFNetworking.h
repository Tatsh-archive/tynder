//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIProgressView.h"

@interface UIProgressView (AFNetworking)
- (BOOL)af_downloadProgressAnimated;
- (void)af_setDownloadProgressAnimated:(BOOL)arg1;
- (void)af_setUploadProgressAnimated:(BOOL)arg1;
- (BOOL)af_uploadProgressAnimated;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setProgressWithDownloadProgressOfOperation:(id)arg1 animated:(BOOL)arg2;
- (void)setProgressWithDownloadProgressOfTask:(id)arg1 animated:(BOOL)arg2;
- (void)setProgressWithUploadProgressOfOperation:(id)arg1 animated:(BOOL)arg2;
- (void)setProgressWithUploadProgressOfTask:(id)arg1 animated:(BOOL)arg2;
@end


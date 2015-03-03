//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@protocol TNDRURLNavigableProtocol <NSObject>
+ (NSString *)viewControllerNavigationKey;

@optional
- (void)didNavigateTo:(NSString *)arg1;
- (void)transitionTo:(NSString *)arg1 optionsDict:(NSDictionary *)arg2 animated:(BOOL)arg3 completion:(void (^)(void))arg4;
- (void)willNavigateTo:(NSString *)arg1;
@end


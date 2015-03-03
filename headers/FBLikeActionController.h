//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBRequestConnectionDelegate.h"
#import "NSCoding.h"
#import "NSDiscardableContent.h"

@class FBSession, NSString;

@interface FBLikeActionController : NSObject <FBRequestConnectionDelegate, NSCoding, NSDiscardableContent>
{
    unsigned int _contentAccessCount;
    FBSession *_session;
    unsigned int _refreshState;
    BOOL _objectIsLiked;
    BOOL _contentDiscarded;
    BOOL _objectIsLikedIsPending;
    BOOL _objectIsLikedOnServer;
    BOOL _objectIsPage;
    NSString *_objectID;
    NSString *_likeCountStringWithLike;
    NSString *_likeCountStringWithoutLike;
    NSString *_socialSentenceWithLike;
    NSString *_socialSentenceWithoutLike;
    NSString *_unlikeToken;
    NSString *_verifiedObjectID;
}

+ (BOOL)isDisabled;
+ (id)likeActionControllerForObjectID:(id)arg1;
- (void)_ensureVerifiedObjectID:(CDUnknownBlockType)arg1;
- (void)_presentLikeDialogWithUpdateBlock:(CDUnknownBlockType)arg1 analyticsParameters:(id)arg2;
- (void)_publishIfNeededWithUpdateBlock:(CDUnknownBlockType)arg1 analyticsParameters:(id)arg2;
- (void)_publishLikeWithUpdateBlock:(CDUnknownBlockType)arg1 analyticsParameters:(id)arg2;
- (void)_publishUnlikeWithUpdateBlock:(CDUnknownBlockType)arg1 analyticsParameters:(id)arg2;
- (void)_refreshWithMode:(unsigned int)arg1;
- (void)_serialize;
- (void)_setExecuting:(BOOL)arg1 forKey:(id)arg2;
- (void)_updateWithObjectIsLiked:(BOOL)arg1 likeCountStringWithLike:(id)arg2 likeCountStringWithoutLike:(id)arg3 socialSentenceWithLike:(id)arg4 socialSentenceWithoutLike:(id)arg5 unlikeToken:(id)arg6 soundEnabled:(BOOL)arg7 animated:(BOOL)arg8 deferred:(BOOL)arg9;
- (BOOL)_useOGLike;
- (BOOL)beginContentAccess;
- (void)dealloc;
- (void)discardContentIfPossible;
- (void)encodeWithCoder:(id)arg1;
- (void)endContentAccess;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithObjectID:(id)arg1 session:(id)arg2;
@property(nonatomic, getter=isContentDiscarded) BOOL contentDiscarded; // @synthesize contentDiscarded=_contentDiscarded;
@property(readonly, copy, nonatomic) NSString *likeCountString;
@property(copy, nonatomic) NSString *likeCountStringWithLike; // @synthesize likeCountStringWithLike=_likeCountStringWithLike;
@property(copy, nonatomic) NSString *likeCountStringWithoutLike; // @synthesize likeCountStringWithoutLike=_likeCountStringWithoutLike;
@property(readonly, copy, nonatomic) NSString *objectID; // @synthesize objectID=_objectID;
@property(nonatomic) BOOL objectIsLiked; // @synthesize objectIsLiked=_objectIsLiked;
@property(nonatomic) BOOL objectIsLikedIsPending; // @synthesize objectIsLikedIsPending=_objectIsLikedIsPending;
@property(nonatomic) BOOL objectIsLikedOnServer; // @synthesize objectIsLikedOnServer=_objectIsLikedOnServer;
@property(nonatomic) BOOL objectIsPage; // @synthesize objectIsPage=_objectIsPage;
- (void)refresh;
@property(copy, nonatomic) NSString *socialSentenceWithLike; // @synthesize socialSentenceWithLike=_socialSentenceWithLike;
@property(copy, nonatomic) NSString *socialSentenceWithoutLike; // @synthesize socialSentenceWithoutLike=_socialSentenceWithoutLike;
@property(copy, nonatomic) NSString *unlikeToken; // @synthesize unlikeToken=_unlikeToken;
@property(copy, nonatomic) NSString *verifiedObjectID; // @synthesize verifiedObjectID=_verifiedObjectID;
@property(readonly, copy, nonatomic) NSString *socialSentence;
- (void)toggleLikeWithSoundEnabled:(BOOL)arg1 analyticsParameters:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


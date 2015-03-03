//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString;

@interface CCTiledMapLayerInfo : NSObject
{
    BOOL _visible;
    BOOL _ownTiles;
    NSString *_name;
    unsigned int *_tiles;
    float _opacity;
    unsigned int _minGID;
    unsigned int _maxGID;
    NSMutableDictionary *_properties;
    struct CGSize _layerSize;
    struct CGPoint _offset;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
@property(nonatomic) struct CGSize layerSize; // @synthesize layerSize=_layerSize;
@property(nonatomic) unsigned int maxGID; // @synthesize maxGID=_maxGID;
@property(nonatomic) unsigned int minGID; // @synthesize minGID=_minGID;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) struct CGPoint offset; // @synthesize offset=_offset;
@property(nonatomic) float opacity; // @synthesize opacity=_opacity;
@property(nonatomic) BOOL ownTiles; // @synthesize ownTiles=_ownTiles;
@property(retain, nonatomic) NSMutableDictionary *properties; // @synthesize properties=_properties;
@property(nonatomic) unsigned int *tiles; // @synthesize tiles=_tiles;
@property(nonatomic) BOOL visible; // @synthesize visible=_visible;

@end


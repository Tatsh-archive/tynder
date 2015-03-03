//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSXMLParserDelegate.h"

@class NSMutableArray, NSMutableDictionary, NSMutableString, NSString;

@interface CCTiledMapInfo : NSObject <NSXMLParserDelegate>
{
    NSMutableString *_currentString;
    BOOL _storingCharacters;
    int _layerAttribs;
    int _parentElement;
    unsigned int _parentGID;
    unsigned int _currentFirstGID;
    int _orientation;
    NSMutableArray *_layers;
    NSMutableArray *_tilesets;
    NSString *_filename;
    NSString *_resources;
    NSMutableArray *_objectGroups;
    NSMutableDictionary *_properties;
    NSMutableDictionary *_tileProperties;
    float _contentScale;
    struct CGSize _mapSize;
    struct CGSize _tileSize;
}

+ (id)formatWithTMXFile:(id)arg1;
+ (id)formatWithXML:(id)arg1 resourcePath:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) float contentScale; // @synthesize contentScale=_contentScale;
- (void)dealloc;
@property(retain, nonatomic) NSString *filename; // @synthesize filename=_filename;
- (id)initWithFile:(id)arg1;
- (id)initWithXML:(id)arg1 resourcePath:(id)arg2;
- (void)internalInit:(id)arg1 resourcePath:(id)arg2;
@property(retain, nonatomic) NSMutableArray *layers; // @synthesize layers=_layers;
@property(nonatomic) struct CGSize mapSize; // @synthesize mapSize=_mapSize;
@property(retain, nonatomic) NSMutableArray *objectGroups; // @synthesize objectGroups=_objectGroups;
@property(nonatomic) int orientation; // @synthesize orientation=_orientation;
- (void)parseXMLData:(id)arg1;
- (void)parseXMLFile:(id)arg1;
- (void)parseXMLString:(id)arg1;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 parseErrorOccurred:(id)arg2;
@property(retain, nonatomic) NSMutableDictionary *properties; // @synthesize properties=_properties;
@property(retain, nonatomic) NSString *resources; // @synthesize resources=_resources;
@property(retain, nonatomic) NSMutableDictionary *tileProperties; // @synthesize tileProperties=_tileProperties;
@property(nonatomic) struct CGSize tileSize; // @synthesize tileSize=_tileSize;
@property(retain, nonatomic) NSMutableArray *tilesets; // @synthesize tilesets=_tilesets;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

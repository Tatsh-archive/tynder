//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MPPropertySelectorDescription, NSPredicate, NSString;

@interface MPPropertyDescription : NSObject
{
    BOOL _readonly;
    BOOL _nofollow;
    BOOL _useKeyValueCoding;
    BOOL _useInstanceVariableAccess;
    NSString *_name;
    MPPropertySelectorDescription *_getSelectorDescription;
    MPPropertySelectorDescription *_setSelectorDescription;
    NSPredicate *_predicate;
}

+ (id)valueTransformerForType:(id)arg1;
- (void).cxx_destruct;
- (id)debugDescription;
@property(readonly, nonatomic) MPPropertySelectorDescription *getSelectorDescription; // @synthesize getSelectorDescription=_getSelectorDescription;
- (id)initWithDictionary:(id)arg1;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) BOOL nofollow; // @synthesize nofollow=_nofollow;
@property(readonly, nonatomic) NSPredicate *predicate; // @synthesize predicate=_predicate;
@property(readonly, nonatomic) BOOL readonly; // @synthesize readonly=_readonly;
@property(readonly, nonatomic) MPPropertySelectorDescription *setSelectorDescription; // @synthesize setSelectorDescription=_setSelectorDescription;
- (BOOL)shouldReadPropertyValueForObject:(id)arg1;
@property(readonly, nonatomic) NSString *type;
@property(readonly, nonatomic) BOOL useInstanceVariableAccess; // @synthesize useInstanceVariableAccess=_useInstanceVariableAccess;
@property(readonly, nonatomic) BOOL useKeyValueCoding; // @synthesize useKeyValueCoding=_useKeyValueCoding;
- (id)valueTransformer;

@end


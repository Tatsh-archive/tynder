//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UILabel.h"

@interface MSLabel : UILabel
{
    int _lineHeight;
    int _verticalAlignment;
    int drawX;
}

- (id)arrayOfCharactersInString:(id)arg1;
- (void)drawTextInRect:(struct CGRect)arg1;
@property(nonatomic) int drawX; // @synthesize drawX;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)lastWordInString:(id)arg1;
@property(nonatomic) int lineHeight; // @synthesize lineHeight=_lineHeight;
@property(nonatomic) int verticalAlignment; // @synthesize verticalAlignment=_verticalAlignment;
- (void)setup;
- (id)stringsFromText:(id)arg1;
- (id)stringsWithWordsWrappedFromArray:(id)arg1;

@end


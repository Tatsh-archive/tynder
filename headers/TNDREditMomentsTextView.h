//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSPDFTextView.h"

@interface TNDREditMomentsTextView : PSPDFTextView
{
    id <TNDREditMomentsTextViewDelegate> _frameDelegate;
}

- (void).cxx_destruct;
- (void)forceLineHeightAdjustForCurrentFont;
@property(nonatomic) __weak id <TNDREditMomentsTextViewDelegate> frameDelegate; // @synthesize frameDelegate=_frameDelegate;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setText:(id)arg1;
- (void)setTransform:(struct CGAffineTransform)arg1;

@end


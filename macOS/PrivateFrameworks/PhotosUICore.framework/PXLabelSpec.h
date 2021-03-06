//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXViewSpec.h>

@class NSColor, NSDictionary, NSFont;

@interface PXLabelSpec : PXViewSpec
{
    BOOL _adjustsFontSizeToFitWidth;
    BOOL _allowTruncation;
    NSColor *_textColor;
    NSFont *_font;
    NSDictionary *_textAttributes;
    NSDictionary *_fallbackTextAttributes;
    long long _textAlignment;
    unsigned long long _numberOfLines;
    long long _verticalAlignment;
    long long _capitalization;
    long long _fallbackCapitalization;
    double _minimumScaleFactor;
    double _minimumTruncatedScaleFactor;
    struct NSEdgeInsets _contentInsets;
}

+ (id)px_headerSubtitleLabelSpecForZoomLevel:(long long)arg1 featureSpec:(id)arg2;
+ (id)px_headerTitleLabelSpecForZoomLevel:(long long)arg1 featureSpec:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) double minimumTruncatedScaleFactor; // @synthesize minimumTruncatedScaleFactor=_minimumTruncatedScaleFactor;
@property(nonatomic) BOOL allowTruncation; // @synthesize allowTruncation=_allowTruncation;
@property(nonatomic) double minimumScaleFactor; // @synthesize minimumScaleFactor=_minimumScaleFactor;
@property(nonatomic) BOOL adjustsFontSizeToFitWidth; // @synthesize adjustsFontSizeToFitWidth=_adjustsFontSizeToFitWidth;
@property(nonatomic) struct NSEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(nonatomic) long long fallbackCapitalization; // @synthesize fallbackCapitalization=_fallbackCapitalization;
@property(nonatomic) long long capitalization; // @synthesize capitalization=_capitalization;
@property(nonatomic) long long verticalAlignment; // @synthesize verticalAlignment=_verticalAlignment;
@property(nonatomic) unsigned long long numberOfLines; // @synthesize numberOfLines=_numberOfLines;
@property(nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(copy, nonatomic) NSDictionary *fallbackTextAttributes; // @synthesize fallbackTextAttributes=_fallbackTextAttributes;
@property(copy, nonatomic) NSDictionary *textAttributes; // @synthesize textAttributes=_textAttributes;
@property(copy, nonatomic) NSFont *font; // @synthesize font=_font;
@property(copy, nonatomic) NSColor *textColor; // @synthesize textColor=_textColor;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;

@end


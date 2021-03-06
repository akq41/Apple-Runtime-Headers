//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIDynamicColor.h>

__attribute__((visibility("hidden")))
@interface UIDynamicModifiedColor : UIDynamicColor
{
    UIDynamicColor *_baseColor;
    double _alphaComponent;
    long long _contrast;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (id)_backgroundColorIgnoringHighContrast;
- (id)_highContrastDynamicColor;
- (id)colorWithAlphaComponent:(double)arg1;
- (id)_resolvedColorWithTraitCollection:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBaseColor:(id)arg1 alphaComponent:(double)arg2 contrast:(long long)arg3;

@end


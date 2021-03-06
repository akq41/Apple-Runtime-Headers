//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosImagingFoundation/NSCopying-Protocol.h>
#import <PhotosImagingFoundation/NSMutableCopying-Protocol.h>

@interface IPARegion : NSObject <NSCopying, NSMutableCopying>
{
    struct Region *_imp;
}

+ (id)regionWithRegion:(id)arg1;
+ (id)regionWithRectArray:(id)arg1;
+ (id)regionWithRect:(struct CGRect)arg1;
+ (id)region;
- (double)area;
- (_Bool)includesRegion:(id)arg1;
- (_Bool)includesRect:(struct CGRect)arg1;
- (_Bool)intersectsRegion:(id)arg1;
- (_Bool)intersectsRect:(struct CGRect)arg1;
- (struct CGRect)bounds;
- (void)enumerateRects:(CDUnknownBlockType)arg1;
- (_Bool)isEqualToRegion:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned int)hash;
- (_Bool)isEmpty;
- (unsigned int)count;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithRectArray:(id)arg1;
- (id)initWithRegion:(id)arg1;
- (id)initWithRect:(struct CGRect)arg1;
- (id)init;
- (id)regionByFlippingInRect:(struct CGRect)arg1;
- (id)regionByApplyingAffineTransform:(struct CGAffineTransform)arg1;
- (id)regionByApplyingOrientation:(int)arg1 imageSize:(struct CGSize)arg2;
- (id)regionByRoundingDown;
- (id)regionByRoundingUp;
- (id)regionByShrinkingBy:(struct CGPoint)arg1 inRect:(struct CGRect)arg2;
- (id)regionByShrinkingBy:(struct CGPoint)arg1;
- (id)regionByGrowingBy:(struct CGPoint)arg1 inRect:(struct CGRect)arg2;
- (id)regionByGrowingBy:(struct CGPoint)arg1;
- (id)regionByTranslatingBy:(struct CGPoint)arg1;
- (id)regionByScalingBy:(struct CGPoint)arg1;
- (id)regionByExcludingRegion:(id)arg1;
- (id)regionByExcludingRect:(struct CGRect)arg1;
- (id)regionByClippingToRectArray:(id)arg1;
- (id)regionByClippingToRegion:(id)arg1;
- (id)regionByClippingToRect:(struct CGRect)arg1;
- (id)regionByRemovingRectArray:(id)arg1;
- (id)regionByRemovingRegion:(id)arg1;
- (id)regionByRemovingRect:(struct CGRect)arg1;
- (id)regionByAddingRectArray:(id)arg1;
- (id)regionByAddingRegion:(id)arg1;
- (id)regionByAddingRect:(struct CGRect)arg1;

@end


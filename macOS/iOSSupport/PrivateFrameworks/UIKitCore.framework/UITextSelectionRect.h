//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface UITextSelectionRect : NSObject
{
}

+ (BOOL)endIsHorizontal:(id)arg1;
+ (BOOL)startIsHorizontal:(id)arg1;
+ (struct CGRect)endEdgeFromRects:(id)arg1;
+ (id)endRectFromRects:(id)arg1;
+ (struct CGRect)startEdgeFromRects:(id)arg1;
+ (id)startRectFromRects:(id)arg1;
@property(readonly, nonatomic) BOOL _drawsOwnHighlight;
@property(readonly, nonatomic) BOOL isVertical;
@property(readonly, nonatomic) BOOL containsStart;
@property(readonly, nonatomic) BOOL containsEnd;
- (id)_isImpl;
- (id)range;
@property(readonly, nonatomic) long long writingDirection;
@property(readonly, nonatomic) struct CGRect rect;

@end


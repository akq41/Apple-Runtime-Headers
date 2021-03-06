//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/HKGraphSeriesBlockCoordinate-Protocol.h>

@class NSString;
@protocol HKGraphSeriesBlockCoordinateInfo;

@interface HKAnnotationBlockPoint : NSObject <HKGraphSeriesBlockCoordinate>
{
    int _pointType;
    id <HKGraphSeriesBlockCoordinateInfo> _userInfo;
    struct CGPoint _point;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <HKGraphSeriesBlockCoordinateInfo> userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, nonatomic) int pointType; // @synthesize pointType=_pointType;
@property(readonly, nonatomic) struct CGPoint point; // @synthesize point=_point;
- (id)copyWithTransform:(struct CGAffineTransform)arg1 roundToViewScale:(_Bool)arg2;
@property(readonly, nonatomic) float endXValue;
@property(readonly, nonatomic) float startXValue;
- (id)initWithTransform:(struct CGAffineTransform)arg1 blockPoint:(id)arg2;
- (id)initWithChartPoint:(id)arg1 xAxisTransform:(id)arg2 yAxisTransform:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


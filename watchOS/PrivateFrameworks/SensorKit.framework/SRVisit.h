//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SensorKit/NSSecureCoding-Protocol.h>
#import <SensorKit/SRSampleExporting-Protocol.h>
#import <SensorKit/SRSampling-Protocol.h>

@class NSDateInterval, NSString, NSUUID;

@interface SRVisit : NSObject <SRSampleExporting, NSSecureCoding, SRSampling>
{
    NSDateInterval *_arrivalDateInterval;
    NSDateInterval *_departureDateInterval;
    int _locationCategory;
    NSUUID *_identifier;
    double _distanceFromHome;
}

+ (_Bool)supportsSecureCoding;
@property(readonly) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(readonly) int locationCategory; // @synthesize locationCategory=_locationCategory;
@property(readonly) NSDateInterval *departureDateInterval; // @synthesize departureDateInterval=_departureDateInterval;
@property(readonly) NSDateInterval *arrivalDateInterval; // @synthesize arrivalDateInterval=_arrivalDateInterval;
@property(readonly) double distanceFromHome; // @synthesize distanceFromHome=_distanceFromHome;
- (id)sr_dictionaryRepresentation;
- (id)initWithBinarySampleRepresentation:(id)arg1 metadata:(id)arg2 timestamp:(double)arg3;
- (id)binarySampleRepresentation;
@property(readonly, copy) NSString *label;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithDistanceFromHome:(double)arg1 arrive:(id)arg2 depart:(id)arg3 category:(int)arg4 uuid:(id)arg5;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


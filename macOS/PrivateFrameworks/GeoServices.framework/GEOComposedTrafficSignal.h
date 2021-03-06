//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GeoServices/GEOComposedEnrouteNotice.h>

#import <GeoServices/NSSecureCoding-Protocol.h>

@class GEOTrafficSignal;

@interface GEOComposedTrafficSignal : GEOComposedEnrouteNotice <NSSecureCoding>
{
    GEOTrafficSignal *_trafficSignal;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) int type;
- (id)position;
- (id)description;
- (id)initWithEnrouteNotice:(id)arg1 trafficSignal:(id)arg2 onRoute:(id)arg3;

@end


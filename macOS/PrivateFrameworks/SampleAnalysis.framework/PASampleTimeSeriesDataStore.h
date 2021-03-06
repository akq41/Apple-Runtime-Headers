//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SampleAnalysis/NSSecureCoding-Protocol.h>

@class SASampleStore;

__attribute__((visibility("hidden")))
@interface PASampleTimeSeriesDataStore : NSObject <NSSecureCoding>
{
    SASampleStore *_sampleStore;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain) SASampleStore *sampleStore; // @synthesize sampleStore=_sampleStore;
- (id)initWithSampleStore:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end


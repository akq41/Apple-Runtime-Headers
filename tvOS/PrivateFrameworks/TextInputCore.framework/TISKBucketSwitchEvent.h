//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TextInputCore/TISKEvent.h>

@class TISKSessionSamples;

@interface TISKBucketSwitchEvent : TISKEvent
{
    TISKSessionSamples *_sessionSamples;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TISKSessionSamples *sessionSamples; // @synthesize sessionSamples=_sessionSamples;
- (id)description;
- (id)init:(id)arg1 order:(long long)arg2;

@end


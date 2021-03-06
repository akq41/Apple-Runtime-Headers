//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSObservation, NSUserDefaults;

__attribute__((visibility("hidden")))
@interface AVGlobalUserSettings : NSObject
{
    NSUserDefaults *_uikitUserDefaults;
    NSObservation *_experimentalScrubbingMomentumCurveSettingObservation;
    _Bool _experimentalScrubbingMomentumCurveEnabled;
    long long _surroundSound;
}

+ (id)shared;
+ (void)initialize;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isExperimentalScrubbingMomentumCurveEnabled) _Bool experimentalScrubbingMomentumCurveEnabled; // @synthesize experimentalScrubbingMomentumCurveEnabled=_experimentalScrubbingMomentumCurveEnabled;
@property(readonly, nonatomic) long long surroundSound; // @synthesize surroundSound=_surroundSound;
@property(readonly, nonatomic, getter=isAtmosDisabled) _Bool atmosDisabled;
- (id)init;

@end


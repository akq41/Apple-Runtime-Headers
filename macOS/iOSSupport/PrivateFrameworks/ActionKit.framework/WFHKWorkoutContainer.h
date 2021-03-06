//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ActionKit/NSSecureCoding-Protocol.h>
#import <ActionKit/WFNaming-Protocol.h>

@class HKUnit, HKWorkout, NSString;

@interface WFHKWorkoutContainer : NSObject <WFNaming, NSSecureCoding>
{
    HKWorkout *_workout;
    HKUnit *_distanceUnit;
    HKUnit *_caloriesUnit;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) HKUnit *caloriesUnit; // @synthesize caloriesUnit=_caloriesUnit;
@property(retain, nonatomic) HKUnit *distanceUnit; // @synthesize distanceUnit=_distanceUnit;
@property(retain, nonatomic) HKWorkout *workout; // @synthesize workout=_workout;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, copy, nonatomic) NSString *wfName;
@property(readonly, nonatomic) double distanceValue;
@property(readonly, nonatomic) double caloriesValue;
- (id)initWithWorkout:(id)arg1 distanceUnit:(id)arg2 caloriesUnit:(id)arg3;
- (id)initWithWorkout:(id)arg1;

@end


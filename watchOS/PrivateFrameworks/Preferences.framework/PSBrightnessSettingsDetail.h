//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Preferences/PSSettingsDetail-Protocol.h>

@class NSString;

@interface PSBrightnessSettingsDetail : NSObject <PSSettingsDetail>
{
}

+ (_Bool)autoBrightnessEnabled;
+ (void)setAutoBrightnessEnabled:(_Bool)arg1;
+ (_Bool)deviceSupportsAutoBrightness;
+ (void)endObservingExternalBrightnessChanges;
+ (void)beginObservingExternalBrightnessChanges:(CDUnknownBlockType)arg1 changedAction:(CDUnknownBlockType)arg2;
+ (void)endBrightnessAdjustmentTransaction;
+ (void)beginBrightnessAdjustmentTransaction;
+ (void)setValue:(float)arg1;
+ (void)incrementBrightnessValue:(float)arg1;
+ (float)incrementedBrightnessValue:(float)arg1;
+ (float)currentValue;
+ (id)iconImage;
+ (id)preferencesURL;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


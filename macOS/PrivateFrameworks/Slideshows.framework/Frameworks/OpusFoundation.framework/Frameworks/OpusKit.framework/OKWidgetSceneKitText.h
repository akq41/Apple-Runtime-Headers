//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OpusKit/OKWidgetSceneKitGeometry.h>

@class SCNText;

@interface OKWidgetSceneKitText : OKWidgetSceneKitGeometry
{
    SCNText *_text;
}

+ (id)supportedSettings;
- (void)setSettingChamferRadius:(double)arg1;
- (double)settingChamferRadius;
- (void)setSettingExtrusionDepth:(double)arg1;
- (double)settingExtrusionDepth;
- (void)setSettingAlignmentMode:(id)arg1;
- (id)settingAlignmentMode;
- (void)setSettingContainerFrame:(struct CGRect)arg1;
- (struct CGRect)settingContainerFrame;
- (struct CGSize)settingTextSize;
- (void)setSettingTruncationMode:(id)arg1;
- (id)settingTruncationMode;
- (void)setSettingWrapped:(BOOL)arg1;
- (BOOL)settingWrapped;
- (void)setSettingFont:(id)arg1;
- (id)settingFont;
- (void)setSettingString:(id)arg1;
- (id)settingString;
- (void)setUserSettingObject:(id)arg1 forKey:(id)arg2;
- (id)settingObjectForKey:(id)arg1;
- (void)dealloc;
- (id)initWithSettings:(id)arg1;

@end


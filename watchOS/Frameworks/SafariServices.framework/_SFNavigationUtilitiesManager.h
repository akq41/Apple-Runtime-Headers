//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, _SFPerSitePreferencesVendor, _SFReloadOptionsController;

@interface _SFNavigationUtilitiesManager : NSObject
{
    _SFPerSitePreferencesVendor *_preferencesVendor;
    NSNumber *_cachedPlayingPauseQuirkEnabled;
    NSNumber *_cachedPerDocumentAutoplayBehaviorQuirkEnabled;
    _SFReloadOptionsController *_reloadOptionsController;
    unsigned int _persona;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int persona; // @synthesize persona=_persona;
@property(nonatomic) __weak _SFReloadOptionsController *reloadOptionsController; // @synthesize reloadOptionsController=_reloadOptionsController;
- (_Bool)_shouldOverrideUserAgentSettingForFacebookAuthURL:(id)arg1;
- (void)websitePoliciesForURL:(id)arg1 isForMainFrameNavigation:(_Bool)arg2 navigationType:(int)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_applyAutoplayQuirksToWebsitePolicies:(id)arg1 desktopSiteSetting:(int)arg2;
- (id)initWithPerSitePreferencesVendor:(id)arg1;

@end


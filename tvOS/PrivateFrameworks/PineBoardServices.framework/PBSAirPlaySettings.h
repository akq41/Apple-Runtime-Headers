//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PineBoardServices/MCProfileConnectionObserver-Protocol.h>

@class NSArray, NSDictionary, NSString, NSUserDefaults;

@interface PBSAirPlaySettings : NSObject <MCProfileConnectionObserver>
{
    int _airPlayObserverToken;
    int _mcObserverToken;
    NSUserDefaults *_airPlayPreferences;
    NSDictionary *_availableSecurityModesByAccessType;
    _Bool _enabled;
    _Bool _airPlayAllowed;
    _Bool _settingsModificationAllowed;
    _Bool _preferCloudPlayback;
    _Bool _nearbyAirPlayEnabled;
    NSString *_password;
    long long _overscanAdjustment;
    unsigned long long _securityType;
    NSArray *_availableSecurityTypes;
    unsigned long long _accessType;
}

+ (unsigned long long)migrateWithContext:(id)arg1 error:(id *)arg2;
+ (id)_airPlayPreferences;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(nonatomic, getter=isNearbyAirPlayEnabled) _Bool nearbyAirPlayEnabled; // @synthesize nearbyAirPlayEnabled=_nearbyAirPlayEnabled;
@property(nonatomic) unsigned long long accessType; // @synthesize accessType=_accessType;
@property(readonly, copy, nonatomic) NSArray *availableSecurityTypes; // @synthesize availableSecurityTypes=_availableSecurityTypes;
@property(nonatomic) unsigned long long securityType; // @synthesize securityType=_securityType;
@property(nonatomic) long long overscanAdjustment; // @synthesize overscanAdjustment=_overscanAdjustment;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(nonatomic) _Bool preferCloudPlayback; // @synthesize preferCloudPlayback=_preferCloudPlayback;
@property(readonly, nonatomic, getter=isSettingsModificationAllowed) _Bool settingsModificationAllowed; // @synthesize settingsModificationAllowed=_settingsModificationAllowed;
@property(readonly, nonatomic, getter=isAirPlayAllowed) _Bool airPlayAllowed; // @synthesize airPlayAllowed=_airPlayAllowed;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
- (void)_setPassword:(id)arg1;
- (void)_writeAirPlayAccessSettings;
- (void)_updateSettings;
- (_Bool)_isNearbyAirPlayEnabled;
- (long long)_overscanAdjustment;
- (id)_availableSecurityTypes;
- (unsigned long long)_accessType;
- (unsigned long long)_securityType;
- (id)_password;
- (_Bool)_preferCloudPlayback;
- (_Bool)_isSettingsModificationAllowed;
- (_Bool)_isAirPlayAllowed;
- (_Bool)_enabled;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (_Bool)_hkAccessControlEnabled;
- (void)_setHkAccessControlEnabled:(_Bool)arg1;
- (unsigned long long)_validSecurityTypeForAccessType:(unsigned long long)arg1;
@property(readonly, copy, nonatomic) NSArray *availableAccessTypes;
- (void)_setSecurityType:(unsigned long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


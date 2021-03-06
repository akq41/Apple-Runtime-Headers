//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/PTSettingsKeyObserver-Protocol.h>

@class CSLockScreenSettings, NSString, PCPersistentTimer, PTToggleTestRecipe, SBMediaController;
@protocol SBLockScreenNowPlayingControllerDelegate;

@interface SBLockScreenNowPlayingController : NSObject <PTSettingsKeyObserver>
{
    SBMediaController *_mediaController;
    PCPersistentTimer *_disableTimer;
    CSLockScreenSettings *_testSettings;
    PTToggleTestRecipe *_testRecipe;
    _Bool _enabled;
    long long _currentState;
    id <SBLockScreenNowPlayingControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <SBLockScreenNowPlayingControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) long long currentState; // @synthesize currentState=_currentState;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)_disableTimerFired;
- (void)_invalidateDisableTimer;
- (void)_startDisableTimer;
- (void)_updateToState:(long long)arg1;
- (void)_updateNowPlayingPlugin;
- (void)_removeObservers;
- (void)_addObservers;
- (_Bool)_isMediaRecentlyActive;
- (double)_timeoutInterval;
- (_Bool)isNowPlayingActive;
- (void)dealloc;
- (id)initWithMediaController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


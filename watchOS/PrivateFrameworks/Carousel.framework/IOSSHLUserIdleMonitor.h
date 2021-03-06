//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IdleTimer, NSMutableDictionary;

@interface IOSSHLUserIdleMonitor : NSObject
{
    struct os_unfair_recursive_lock_s _rlock;
    unsigned char _enhancedDefaultLogType;
    unsigned char _enhancedInfoLogType;
    NSMutableDictionary *_timers;
    IdleTimer *_activeTimer;
    int _timerMode;
    double _timerSeconds;
    double _idleSecondsLastIdle;
    double _idleSecondsNextIdle;
    unsigned long long _lastIdleMachTime;
    CDUnknownBlockType _resetUserEventTimerOverrideBlock;
    unsigned long long _stateHandler;
    int _currentIdleTimerDelta;
    struct {
        unsigned long long machTime;
        double cfAbsoluteTime;
        int mode;
        double timerSeconds;
        double idleSecondsNextIdle;
        void *activeIdleTimer;
    } _idleTimerDeltaBuffer[5];
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)setResetUserEventTimerOverrideBlock:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)resetUserEventTimerOverrideBlock;
@property(nonatomic) _Bool increasedLoggingEnabled;
- (void)withLock_setUserEventTimer:(id)arg1 mode:(int)arg2 timerSeconds:(double)arg3 idleSecondsNextIdle:(double)arg4;
- (void)handleUserEventUnidled;
- (void)withLock_idleActiveTimerAndActivateNextTimer;
- (void)handleUserEventIdled;
- (void)handleUserEventPresenceExpired;
- (void)withLock_unidleAndRestartAllTimers;
- (void)handleUserEventPresent;
- (void)withLock_resetUserIdleTimerForcedRestart:(_Bool)arg1;
- (id)withLock_expireTimersAndFindNextUnexpiredOneAfterSeconds:(double)arg1 hasEnabledIdleTimers:(_Bool *)arg2 ignoringTimer:(id)arg3;
- (double)restartIdlingForAction:(id)arg1;
- (double)enableIdlingForAction:(id)arg1 enabled:(_Bool)arg2 retroactive:(_Bool)arg3;
- (double)setIdleSeconds:(double)arg1 forReason:(id)arg2 ofAction:(id)arg3;
- (double)getIdleSecondsOfAction:(id)arg1;
- (void)forceAction:(id)arg1 toPresenceMode:(_Bool)arg2;
- (void)unregisterIdlingAction:(id)arg1;
- (void)registerIdlingAction:(id)arg1 idleBlock:(CDUnknownBlockType)arg2 unidleBlock:(CDUnknownBlockType)arg3;
- (id)debugDescription;
- (id)description;
- (id)withLock_basicDescription;
- (void)dealloc;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Carousel/BSDescriptionProviding-Protocol.h>
#import <Carousel/CSLForegroundMonitoring-Protocol.h>

@class NSMutableDictionary, NSString;

@interface CSLSnapshotApplicationStateMonitor : NSObject <BSDescriptionProviding, CSLForegroundMonitoring>
{
    struct _opaque_pthread_mutex_t _dictionaryLock;
    NSMutableDictionary *_stateByBundleID;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (id)_getSnapshotState:(id)arg1;
- (void)_withLock:(CDUnknownBlockType)arg1;
- (void)foregroundMonitorService:(id)arg1 application:(id)arg2 changedForegroundStatus:(_Bool)arg3;
- (void)snapshotted:(id)arg1 primaryUI:(_Bool)arg2;
- (id)earliestSnapshotDate:(id)arg1 intervalBetweenSnapshots:(double)arg2;
- (id)returnToPrimaryUIDate:(id)arg1 returnInterval:(double)arg2;
- (void)willSendActionToApp:(id)arg1 withScheduleItem:(id)arg2;
- (void)didSendReturnToPrimaryUI:(id)arg1;
- (_Bool)needsReturnToPrimaryUI:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


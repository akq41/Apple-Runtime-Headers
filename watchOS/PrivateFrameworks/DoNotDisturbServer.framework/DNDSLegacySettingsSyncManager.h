//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DoNotDisturbServer/DNDSSettingsSyncManager-Protocol.h>

@class NPSDomainAccessor, NPSManager, NSString;
@protocol DNDSSettingsSyncManagerDataSource, DNDSSettingsSyncManagerDelegate;

@interface DNDSLegacySettingsSyncManager : NSObject <DNDSSettingsSyncManager>
{
    _Bool _listen;
    _Bool _send;
    NPSManager *_npsManager;
    NPSDomainAccessor *_accessor;
    id <DNDSSettingsSyncManagerDataSource> _dataSource;
    id <DNDSSettingsSyncManagerDelegate> _delegate;
}

+ (id)receiveManagerForPairedDevice:(id)arg1;
+ (id)sendManagerForPairedDevice:(id)arg1;
+ (void)cleanupState;
- (void).cxx_destruct;
@property(nonatomic) __weak id <DNDSSettingsSyncManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <DNDSSettingsSyncManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)_updateBypassSettings;
- (void)_propagateBypassSettings:(id)arg1;
- (void)_updateScheduleSettingsWithDate:(id)arg1;
- (void)_propagateScheduleSettings:(id)arg1;
- (void)_endMonitoringForChanges;
- (void)_beginMonitoringForChanges;
- (void)update;
- (void)resume;
- (void)dealloc;
- (id)_initWithListen:(_Bool)arg1 send:(_Bool)arg2 pairedDevice:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


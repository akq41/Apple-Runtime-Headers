//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IOBluetooth/IOBluetoothHandsFree.h>

@class IOBluetoothHandsFreeAudioGatewayExpansion;

@interface IOBluetoothHandsFreeAudioGateway : IOBluetoothHandsFree
{
    BOOL _indicatorMode;
    BOOL _indicatorEventReporting;
    IOBluetoothHandsFreeAudioGatewayExpansion *_expansion;
}

+ (id)deviceUUID;
+ (id)localUUID;
@property BOOL indicatorEventReporting; // @synthesize indicatorEventReporting=_indicatorEventReporting;
@property BOOL indicatorMode; // @synthesize indicatorMode=_indicatorMode;
@property(retain) IOBluetoothHandsFreeAudioGatewayExpansion *expansion; // @synthesize expansion=_expansion;
- (void)setFCComplete:(id)arg1;
- (BOOL)isSiriActive;
- (void)setIsSiriActive:(BOOL)arg1;
- (BOOL)dockState;
- (void)setDockState:(BOOL)arg1;
- (int)batteryLevel;
- (void)setBatteryLevel:(int)arg1;
- (unsigned int)version;
- (void)setVersion:(unsigned int)arg1;
- (unsigned int)productID;
- (void)setProductID:(unsigned int)arg1;
- (unsigned int)vendorID;
- (void)setVendorID:(unsigned int)arg1;
- (id)lastUpdatedInputVolume;
- (void)setLastUpdatedInputVolume:(id)arg1;
- (void)processAppleEvent:(id)arg1;
- (void)processAppleCommand:(id)arg1;
- (void)processSpeakerVolumeChange:(int)arg1;
- (void)processMicVolumeChange:(int)arg1;
- (void)processEventReporting:(id)arg1;
- (void)sendCurrentStatusValues;
- (void)sendStatusMapping;
- (void)sendSupportedFeatures:(int)arg1;
- (void)sendOutputVolumePrivate:(id)arg1;
- (void)sendOutputVolume;
- (void)sendInputVolumePrivate:(id)arg1;
- (void)sendInputVolume;
- (void)processIncomingData:(char *)arg1 length:(unsigned long long)arg2;
- (id)driverID;
- (void)sendResponse:(id)arg1 withOK:(BOOL)arg2;
- (void)sendResponse:(id)arg1;
- (void)sendOKResponse;
- (void)processATCommand:(id)arg1;
- (void)createIndicator:(id)arg1 min:(int)arg2 max:(int)arg3 currentValue:(int)arg4;
- (void)handleSiriDisappear;
- (void)handleSiriAppear;
- (id)initWithDevice:(id)arg1 delegate:(id)arg2;
- (void)setIndicator:(id)arg1 value:(int)arg2;
- (void)sdpQueryComplete:(id)arg1 status:(int)arg2;

@end


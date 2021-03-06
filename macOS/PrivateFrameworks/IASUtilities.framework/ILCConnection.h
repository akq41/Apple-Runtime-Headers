//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IASUtilities/ILCBaseConnection.h>

@class NSLock, NSMutableArray, NSMutableDictionary, NSObject, NSThread;
@protocol ILCConnectionDelegate;

@interface ILCConnection : ILCBaseConnection
{
    int _state;
    NSObject<ILCConnectionDelegate> *_delegate;
    NSMutableDictionary *_filenameToUUIDMap;
    NSMutableDictionary *_filehandleToUUIDMap;
    NSMutableDictionary *_UUIDToHandleMap;
    NSMutableArray *_pendingSysdiagnoseUUIDs;
    NSMutableArray *_successulSysdiagnoseFilenames;
    NSMutableArray *_failedSysdiagnoseFilenames;
    NSThread *_fileHandleMultiplexThread;
    NSLock *_fdLock;
}

- (void).cxx_destruct;
@property(retain) NSLock *fdLock; // @synthesize fdLock=_fdLock;
@property(retain) NSThread *fileHandleMultiplexThread; // @synthesize fileHandleMultiplexThread=_fileHandleMultiplexThread;
@property(retain) NSMutableArray *failedSysdiagnoseFilenames; // @synthesize failedSysdiagnoseFilenames=_failedSysdiagnoseFilenames;
@property(retain) NSMutableArray *successulSysdiagnoseFilenames; // @synthesize successulSysdiagnoseFilenames=_successulSysdiagnoseFilenames;
@property(retain) NSMutableArray *pendingSysdiagnoseUUIDs; // @synthesize pendingSysdiagnoseUUIDs=_pendingSysdiagnoseUUIDs;
@property(retain) NSMutableDictionary *UUIDToHandleMap; // @synthesize UUIDToHandleMap=_UUIDToHandleMap;
@property(retain) NSMutableDictionary *filehandleToUUIDMap; // @synthesize filehandleToUUIDMap=_filehandleToUUIDMap;
@property(retain) NSMutableDictionary *filenameToUUIDMap; // @synthesize filenameToUUIDMap=_filenameToUUIDMap;
@property __weak NSObject<ILCConnectionDelegate> *delegate; // @synthesize delegate=_delegate;
@property int state; // @synthesize state=_state;
- (id)goodByeReasonToString:(int)arg1;
- (void)sendGoodbyeWithReason:(int)arg1;
- (BOOL)beginFile:(id)arg1 forFilename:(id)arg2 flags:(int)arg3 isSysdiagnose:(BOOL)arg4;
- (void)handlePlayAudioQueue:(CDStruct_7552e54d *)arg1;
- (void)handleSysdiagnose:(CDStruct_f5aa958a *)arg1;
- (void)handleReboot:(CDStruct_f5aa958a *)arg1;
- (void)handleFileTypeError:(CDStruct_3ecb445f *)arg1;
- (void)handleGoAheadPacket;
- (void)handleHandshakePacket;
- (void)handleGoodbye:(CDStruct_3039fca9 *)arg1;
- (void)handleSecurePacket:(CDStruct_69a1f978 *)arg1;
- (void)handlePacket:(CDStruct_69a1f978 *)arg1;
- (void)handleCommands;
- (void)socketWorkThread;
- (void)disconnectWithError:(id)arg1;
- (void)disconnect;
- (void)updateFilesForUUID:(id)arg1 didFail:(BOOL)arg2;
- (void)errorForUUID:(id)arg1;
- (void)successForUUID:(id)arg1;
- (void)sendEndFileForUUID:(id)arg1;
- (void)sendData:(id)arg1 forFileUUID:(id)arg2;
- (void)fileHandleMultiplexer:(id)arg1;
- (BOOL)writeFilename:(id)arg1 withHandle:(id)arg2 flags:(int)arg3;
- (BOOL)sendFile:(id)arg1 flags:(int)arg2 error:(id *)arg3;
- (id)initWithHostname:(id)arg1 password:(id)arg2 delegate:(id)arg3;

@end


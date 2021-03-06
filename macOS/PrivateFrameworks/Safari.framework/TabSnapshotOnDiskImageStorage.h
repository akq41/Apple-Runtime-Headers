//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Safari/TabSnapshotImageStorage-Protocol.h>

@class NSURL, TabSnapshotOnDiskImageStorageMetadataStore;
@protocol OS_dispatch_group, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface TabSnapshotOnDiskImageStorage : NSObject <TabSnapshotImageStorage>
{
    NSURL *_storagePath;
    TabSnapshotOnDiskImageStorageMetadataStore *_metadataStore;
    long long _initializationStatus;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_APIQueue;
    NSObject<OS_dispatch_queue> *_diskAccessQueue;
    NSObject<OS_dispatch_group> *_waitForAPIOperationCompletionBeforeFinalizingSynchronizationGroup;
}

- (void).cxx_destruct;
@property(nonatomic) long long initializationStatus; // @synthesize initializationStatus=_initializationStatus;
- (void)_endAPIOperationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_beginAPIOperation;
- (void)_dispatchAsynchronousBlockOnAPIQueue:(CDUnknownBlockType)arg1;
- (void)_reconcileSaveSuboperationCompletionForOperation:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_loadImageWithFilename:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_deleteImagesAtLocations:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_deleteImagesWithSnapshotMetadataDictionary:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_persistImage:(id)arg1 toFile:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)_onDiskLocationForFilename:(id)arg1;
- (id)_filenameForUniqueIdentifier:(id)arg1;
- (void)finalizePendingOperationsBeforeTermination;
- (void)purgeImagesSavedOnOrAfter:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)deleteImagesWithOriginURLs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)deleteImagesWithUniqueIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)loadImageWithUniqueIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)saveImage:(id)arg1 withUniqueIdentifier:(id)arg2 creationDate:(id)arg3 originURL:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)setUpWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithStoragePath:(id)arg1;

@end


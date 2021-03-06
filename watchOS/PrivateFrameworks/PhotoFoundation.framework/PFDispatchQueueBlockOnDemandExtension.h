//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoFoundation/PFDispatchQueueExtension.h>

#import <PhotoFoundation/PFDispatchQueueBlockOnDemandExecuting-Protocol.h>

@class PFExtendedDispatchQueue;

@interface PFDispatchQueueBlockOnDemandExtension : PFDispatchQueueExtension <PFDispatchQueueBlockOnDemandExecuting>
{
    PFExtendedDispatchQueue *_queue;
    // Error parsing type: AI, name: _countToExecute
    // Error parsing type: AI, name: _enqueuedCount
}

- (void).cxx_destruct;
- (void)queue:(id)arg1 didDequeue:(id)arg2 skipExecution:(CDUnknownBlockType)arg3;
- (void)queue:(id)arg1 willEnqueueAsync:(id)arg2 when:(CDUnknownBlockType)arg3;
- (void)queue:(id)arg1 willEnqueueSync:(id)arg2;
- (void)_willEnqueueOneBlock;
- (unsigned int)runBlockCount:(unsigned int)arg1;
- (unsigned int)runOneBlock;
- (id)newBlockInfo;
- (void)installOnQueue:(id)arg1;

@end


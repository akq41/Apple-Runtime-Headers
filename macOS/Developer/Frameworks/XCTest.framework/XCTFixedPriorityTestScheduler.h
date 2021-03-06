//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <XCTest/XCTTestScheduler-Protocol.h>

@class NSMutableArray, NSMutableSet, NSSet;
@protocol OS_dispatch_queue, XCTTestSchedulerDelegate;

@interface XCTFixedPriorityTestScheduler : NSObject <XCTTestScheduler>
{
    BOOL _hasStarted;
    NSObject<OS_dispatch_queue> *_workerQueue;
    id <XCTTestSchedulerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_undispatchedTestIdentifierGroups;
    NSSet *_testIdentifiersToSkip;
    NSMutableSet *_inFlightWorkers;
    CDUnknownBlockType _prioritizer;
    NSMutableSet *_queuedWorkers;
}

+ (CDUnknownBlockType)classBasedLPTPrioritizerForClassTimes:(id)arg1 fallbackExecutionOrdering:(long long)arg2;
- (void).cxx_destruct;
@property(readonly) NSMutableSet *queuedWorkers; // @synthesize queuedWorkers=_queuedWorkers;
@property BOOL hasStarted; // @synthesize hasStarted=_hasStarted;
@property(readonly) CDUnknownBlockType prioritizer; // @synthesize prioritizer=_prioritizer;
@property(readonly) NSMutableSet *inFlightWorkers; // @synthesize inFlightWorkers=_inFlightWorkers;
@property(retain) NSSet *testIdentifiersToSkip; // @synthesize testIdentifiersToSkip=_testIdentifiersToSkip;
@property(retain) NSMutableArray *undispatchedTestIdentifierGroups; // @synthesize undispatchedTestIdentifierGroups=_undispatchedTestIdentifierGroups;
@property(readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property __weak id <XCTTestSchedulerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) NSObject<OS_dispatch_queue> *workerQueue; // @synthesize workerQueue=_workerQueue;
- (void)startWithTestIdentifiersToRun:(id)arg1 testIdentifiersToSkip:(id)arg2;
- (void)workerDidBecomeAvailable:(id)arg1;
- (void)_queue_dispatchWorkToWorker:(id)arg1;
- (id)_queue_nextBatchOfWork;
- (id)initWithPrioritizer:(CDUnknownBlockType)arg1;

@end


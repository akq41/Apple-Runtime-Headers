//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <BookUtility/BUAssertion-Protocol.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface _BUCountingAssertion : NSObject <BUAssertion>
{
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _block;
}

- (void).cxx_destruct;
- (void)invalidate;
- (void)dealloc;
- (id)initWithQueue:(id)arg1 block:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


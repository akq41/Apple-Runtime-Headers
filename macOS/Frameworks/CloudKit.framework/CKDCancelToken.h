//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKit/CKDCancelling-Protocol.h>

@interface CKDCancelToken : NSObject <CKDCancelling>
{
    BOOL _isCancelled;
    CDUnknownBlockType _cancelAction;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType cancelAction; // @synthesize cancelAction=_cancelAction;
- (void)cancel;
- (BOOL)isCancelled;

@end


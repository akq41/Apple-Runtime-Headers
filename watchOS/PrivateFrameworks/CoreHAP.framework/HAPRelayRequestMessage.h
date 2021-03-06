//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class HMFBlockOperation, NSData, NSMutableSet, NSSet;

@interface HAPRelayRequestMessage : HMFObject
{
    NSMutableSet *_requestIdentifiers;
    unsigned short _transactionIdentifier;
    NSData *_body;
    unsigned int _type;
    HMFBlockOperation *_operation;
    double _timeout;
}

- (void).cxx_destruct;
@property(nonatomic) __weak HMFBlockOperation *operation; // @synthesize operation=_operation;
@property(readonly, nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(readonly, nonatomic) unsigned int type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSData *body; // @synthesize body=_body;
@property(nonatomic) unsigned short transactionIdentifier; // @synthesize transactionIdentifier=_transactionIdentifier;
@property(readonly, nonatomic) NSSet *requestIdentifiers; // @synthesize requestIdentifiers=_requestIdentifiers;
- (void)addRequestIdentifier:(id)arg1;
@property(readonly, nonatomic, getter=isFinished) _Bool finished;
@property(readonly, nonatomic) _Bool sent;
@property(readonly, nonatomic, getter=isEncrypted) _Bool encrypted;
- (id)description;
- (id)debugDescription;
- (id)shortDescription;
- (id)initWithRequestData:(id)arg1 messageType:(unsigned int)arg2 timeout:(double)arg3;

@end


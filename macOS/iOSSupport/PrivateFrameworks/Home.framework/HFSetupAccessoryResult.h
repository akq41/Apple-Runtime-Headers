//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HMSetupAccessoryPayload, NSError;

@interface HFSetupAccessoryResult : NSObject
{
    BOOL _hasAddRequest;
    BOOL _isValidForPairing;
    NSError *_error;
    HMSetupAccessoryPayload *_setupPayload;
}

+ (BOOL)isHomeKitURL:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL isValidForPairing; // @synthesize isValidForPairing=_isValidForPairing;
@property(readonly, nonatomic) BOOL hasAddRequest; // @synthesize hasAddRequest=_hasAddRequest;
@property(readonly, nonatomic) HMSetupAccessoryPayload *setupPayload; // @synthesize setupPayload=_setupPayload;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
- (BOOL)isAllZerosCode;
- (id)description;
- (id)initWithSetupCode:(id)arg1;
- (id)initWithSetupURL:(id)arg1;
- (id)initWithPayload:(id)arg1 hasAddRequest:(BOOL)arg2;
- (id)initWithPayload:(id)arg1 error:(id)arg2 hasAddRequest:(BOOL)arg3;

@end


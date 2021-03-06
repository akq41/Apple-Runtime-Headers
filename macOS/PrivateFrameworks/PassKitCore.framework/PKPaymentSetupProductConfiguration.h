//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>

@class NSDate, NSString;

@interface PKPaymentSetupProductConfiguration : NSObject <NSCopying>
{
    NSString *_partnerIdentifier;
    NSString *_productIdentifier;
    unsigned long long _type;
    unsigned long long _state;
    NSString *_dirtyStateIdentifier;
    NSDate *_lastUpdated;
    unsigned long long _featureIdentifier;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long featureIdentifier; // @synthesize featureIdentifier=_featureIdentifier;
@property(retain, nonatomic) NSDate *lastUpdated; // @synthesize lastUpdated=_lastUpdated;
@property(copy, nonatomic) NSString *dirtyStateIdentifier; // @synthesize dirtyStateIdentifier=_dirtyStateIdentifier;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *productIdentifier; // @synthesize productIdentifier=_productIdentifier;
@property(copy, nonatomic) NSString *partnerIdentifier; // @synthesize partnerIdentifier=_partnerIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithProductDictionary:(id)arg1;

@end


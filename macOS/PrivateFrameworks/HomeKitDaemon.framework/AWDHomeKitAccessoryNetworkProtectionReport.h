//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>

@class AWDHomeKitVendorInformation;

@interface AWDHomeKitAccessoryNetworkProtectionReport : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    int _status;
    AWDHomeKitVendorInformation *_vendorDetails;
    BOOL _hadViolationsInLast24h;
    struct {
        unsigned int timestamp:1;
        unsigned int status:1;
        unsigned int hadViolationsInLast24h:1;
    } _has;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL hadViolationsInLast24h; // @synthesize hadViolationsInLast24h=_hadViolationsInLast24h;
@property(retain, nonatomic) AWDHomeKitVendorInformation *vendorDetails; // @synthesize vendorDetails=_vendorDetails;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasHadViolationsInLast24h;
- (int)StringAsStatus:(id)arg1;
- (id)statusAsString:(int)arg1;
@property(nonatomic) BOOL hasStatus;
@property(nonatomic) int status; // @synthesize status=_status;
@property(readonly, nonatomic) BOOL hasVendorDetails;
@property(nonatomic) BOOL hasTimestamp;

@end


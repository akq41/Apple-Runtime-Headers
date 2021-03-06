//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoMediaRemote/NSCopying-Protocol.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface _NMROriginProtobuf : PBCodable <NSCopying>
{
    NSData *_deviceInfoData;
    NSString *_displayName;
    int _uniqueIdentifier;
    struct {
        unsigned int uniqueIdentifier:1;
    } _has;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *deviceInfoData; // @synthesize deviceInfoData=_deviceInfoData;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(nonatomic) int uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
- (void)mergeFrom:(id)arg1;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasDeviceInfoData;
@property(readonly, nonatomic) _Bool hasDisplayName;
@property(nonatomic) _Bool hasUniqueIdentifier;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@class HDCodableError, NSString;

@interface HDCodableStartWorkoutAppResponse : PBCodable <NSCopying>
{
    HDCodableError *_launchError;
    NSString *_requestIdentifier;
    _Bool _success;
    CDStruct_f2ecb737 _has;
}

- (void).cxx_destruct;
@property(retain, nonatomic) HDCodableError *launchError; // @synthesize launchError=_launchError;
@property(nonatomic) _Bool success; // @synthesize success=_success;
@property(retain, nonatomic) NSString *requestIdentifier; // @synthesize requestIdentifier=_requestIdentifier;
- (void)mergeFrom:(id)arg1;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasLaunchError;
@property(nonatomic) _Bool hasSuccess;
@property(readonly, nonatomic) _Bool hasRequestIdentifier;

@end


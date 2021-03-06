//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsCore/NSCopying-Protocol.h>

@class FCCKPOperation, FCCKPQueryRetrieveResponse, FCCKPRecordRetrieveResponse, FCCKPResponseOperationResult;

@interface FCCKPResponseOperation : PBCodable <NSCopying>
{
    unsigned int _operationCost;
    FCCKPQueryRetrieveResponse *_queryRetrieveResponse;
    FCCKPRecordRetrieveResponse *_recordRetrieveResponse;
    FCCKPOperation *_response;
    FCCKPResponseOperationResult *_result;
    struct {
        unsigned int operationCost:1;
    } _has;
}

@property(retain, nonatomic) FCCKPResponseOperationResult *result; // @synthesize result=_result;
@property(retain, nonatomic) FCCKPOperation *response; // @synthesize response=_response;
@property(nonatomic) unsigned int operationCost; // @synthesize operationCost=_operationCost;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasResult;
@property(readonly, nonatomic) _Bool hasResponse;
@property(nonatomic) _Bool hasOperationCost;
- (void)dealloc;
@property(retain, nonatomic) FCCKPRecordRetrieveResponse *recordRetrieveResponse;
@property(readonly, nonatomic) _Bool hasRecordRetrieveResponse;
@property(retain, nonatomic) FCCKPQueryRetrieveResponse *queryRetrieveResponse;
@property(readonly, nonatomic) _Bool hasQueryRetrieveResponse;

@end


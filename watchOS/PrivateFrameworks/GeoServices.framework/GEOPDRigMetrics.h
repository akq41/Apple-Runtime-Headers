//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface GEOPDRigMetrics : PBCodable <NSCopying>
{
    CDStruct_084d6ede _occlusionScores;
}

+ (_Bool)isValid:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (void)setOcclusionScores:(unsigned int *)arg1 count:(unsigned int)arg2;
- (unsigned int)occlusionScoreAtIndex:(unsigned int)arg1;
- (void)addOcclusionScore:(unsigned int)arg1;
- (void)clearOcclusionScores;
@property(readonly, nonatomic) unsigned int *occlusionScores;
@property(readonly, nonatomic) unsigned int occlusionScoresCount;
- (void)dealloc;

@end


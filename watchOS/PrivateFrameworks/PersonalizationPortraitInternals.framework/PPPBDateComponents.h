//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PersonalizationPortraitInternals/NSCopying-Protocol.h>

@class NSString;

@interface PPPBDateComponents : PBCodable <NSCopying>
{
    NSString *_calendarIdentifier;
    int _day;
    int _month;
    NSString *_timeZoneName;
    int _year;
    struct {
        unsigned int day:1;
        unsigned int month:1;
        unsigned int year:1;
    } _has;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *timeZoneName; // @synthesize timeZoneName=_timeZoneName;
@property(retain, nonatomic) NSString *calendarIdentifier; // @synthesize calendarIdentifier=_calendarIdentifier;
@property(nonatomic) int year; // @synthesize year=_year;
@property(nonatomic) int month; // @synthesize month=_month;
@property(nonatomic) int day; // @synthesize day=_day;
- (void)mergeFrom:(id)arg1;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasTimeZoneName;
@property(readonly, nonatomic) _Bool hasCalendarIdentifier;
@property(nonatomic) _Bool hasYear;
@property(nonatomic) _Bool hasMonth;
@property(nonatomic) _Bool hasDay;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/INJSONSerializable-Protocol.h>
#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class NSString;

@interface INSeat : NSObject <INJSONSerializable, NSCopying, NSSecureCoding>
{
    NSString *_seatSection;
    NSString *_seatRow;
    NSString *_seatNumber;
    NSString *_seatingType;
}

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy) NSString *seatingType; // @synthesize seatingType=_seatingType;
@property(readonly, copy) NSString *seatNumber; // @synthesize seatNumber=_seatNumber;
@property(readonly, copy) NSString *seatRow; // @synthesize seatRow=_seatRow;
@property(readonly, copy) NSString *seatSection; // @synthesize seatSection=_seatSection;
- (id)_dictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned long long)arg1;
@property(readonly, copy) NSString *description;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithSeatSection:(id)arg1 seatRow:(id)arg2 seatNumber:(id)arg3 seatingType:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end


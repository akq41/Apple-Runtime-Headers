//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iAdServices/NSCopying-Protocol.h>
#import <iAdServices/NSSecureCoding-Protocol.h>

@class NSDictionary, NSURL;

@interface ADMRAIDAction : NSObject <NSSecureCoding, NSCopying>
{
    long long _type;
    NSURL *_url;
    double _maximumExpandWidth;
    double _maximumExpandHeight;
    NSDictionary *_calendarEventInfo;
}

+ (_Bool)supportsSecureCoding;
+ (_Bool)doesURLOpenNews:(id)arg1;
+ (id)errorDescriptionForActionType:(long long)arg1 errorType:(long long)arg2;
+ (id)descriptionForActionType:(long long)arg1;
@property(retain, nonatomic) NSDictionary *calendarEventInfo; // @synthesize calendarEventInfo=_calendarEventInfo;
@property(nonatomic) double maximumExpandHeight; // @synthesize maximumExpandHeight=_maximumExpandHeight;
@property(nonatomic) double maximumExpandWidth; // @synthesize maximumExpandWidth=_maximumExpandWidth;
@property(copy, nonatomic) NSURL *url; // @synthesize url=_url;
@property(nonatomic) long long type; // @synthesize type=_type;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) _Bool opensNewsLink;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;

@end


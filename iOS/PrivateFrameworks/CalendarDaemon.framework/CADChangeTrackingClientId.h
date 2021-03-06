//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CalendarDaemon/NSSecureCoding-Protocol.h>

@class NSString;

@interface CADChangeTrackingClientId : NSObject <NSSecureCoding>
{
    NSString *_suffix;
    NSString *_customClientId;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *customClientId; // @synthesize customClientId=_customClientId;
@property(readonly, nonatomic) NSString *suffix; // @synthesize suffix=_suffix;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToChangeTrackingClientId:(id)arg1;
- (id)clientIdWithBundleId:(id)arg1;
- (id)clientId;
@property(readonly, nonatomic) _Bool hasCustomClientId;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSuffix:(id)arg1;
- (id)initWithCustomClientId:(id)arg1;

@end


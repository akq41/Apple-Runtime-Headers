//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Email/NSSecureCoding-Protocol.h>

@class NSString;

@interface EMListUnsubscribeCommandMessageHeaders : NSObject <NSSecureCoding>
{
    NSString *_firstRecipient;
    NSString *_subject;
    NSString *_firstSenderAddress;
    NSString *_listID;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *listID; // @synthesize listID=_listID;
@property(readonly, nonatomic) NSString *firstSenderAddress; // @synthesize firstSenderAddress=_firstSenderAddress;
@property(readonly, nonatomic) NSString *subject; // @synthesize subject=_subject;
@property(readonly, nonatomic) NSString *firstRecipient; // @synthesize firstRecipient=_firstRecipient;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithHeaders:(id)arg1;

@end


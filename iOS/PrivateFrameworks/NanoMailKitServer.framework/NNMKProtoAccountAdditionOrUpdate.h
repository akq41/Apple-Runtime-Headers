//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoMailKitServer/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface NNMKProtoAccountAdditionOrUpdate : PBCodable <NSCopying>
{
    NSString *_accountId;
    NSString *_defaultEmail;
    NSString *_displayName;
    NSMutableArray *_emails;
    unsigned int _fullSyncVersion;
    NSString *_localId;
    NSMutableArray *_mailboxes;
    NSString *_parentId;
    NSString *_username;
    _Bool _shouldArchive;
    struct {
        unsigned int fullSyncVersion:1;
        unsigned int shouldArchive:1;
    } _has;
}

+ (Class)mailboxesType;
+ (Class)emailType;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *parentId; // @synthesize parentId=_parentId;
@property(retain, nonatomic) NSString *localId; // @synthesize localId=_localId;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) NSString *defaultEmail; // @synthesize defaultEmail=_defaultEmail;
@property(nonatomic) unsigned int fullSyncVersion; // @synthesize fullSyncVersion=_fullSyncVersion;
@property(retain, nonatomic) NSMutableArray *mailboxes; // @synthesize mailboxes=_mailboxes;
@property(retain, nonatomic) NSMutableArray *emails; // @synthesize emails=_emails;
@property(nonatomic) _Bool shouldArchive; // @synthesize shouldArchive=_shouldArchive;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) NSString *accountId; // @synthesize accountId=_accountId;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasParentId;
@property(readonly, nonatomic) _Bool hasLocalId;
@property(readonly, nonatomic) _Bool hasUsername;
@property(readonly, nonatomic) _Bool hasDefaultEmail;
@property(nonatomic) _Bool hasFullSyncVersion;
- (id)mailboxesAtIndex:(unsigned long long)arg1;
- (unsigned long long)mailboxesCount;
- (void)addMailboxes:(id)arg1;
- (void)clearMailboxes;
- (id)emailAtIndex:(unsigned long long)arg1;
- (unsigned long long)emailsCount;
- (void)addEmail:(id)arg1;
- (void)clearEmails;
@property(nonatomic) _Bool hasShouldArchive;
@property(readonly, nonatomic) _Bool hasDisplayName;
@property(readonly, nonatomic) _Bool hasAccountId;

@end


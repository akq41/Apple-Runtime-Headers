//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmailCore/ECTransferMessageActionItemBuilder-Protocol.h>
#import <EmailCore/NSCopying-Protocol.h>

@class NSString;
@protocol ECMessage;

@interface ECTransferMessageActionItem : NSObject <ECTransferMessageActionItemBuilder, NSCopying>
{
    NSString *_sourceRemoteID;
    id <ECMessage> _sourceMessage;
    id <ECMessage> _destinationMessage;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <ECMessage> destinationMessage; // @synthesize destinationMessage=_destinationMessage;
@property(retain, nonatomic) id <ECMessage> sourceMessage; // @synthesize sourceMessage=_sourceMessage;
@property(copy, nonatomic) NSString *sourceRemoteID; // @synthesize sourceRemoteID=_sourceRemoteID;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithBuilder:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


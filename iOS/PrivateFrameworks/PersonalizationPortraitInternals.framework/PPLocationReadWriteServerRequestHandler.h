//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PersonalizationPortraitInternals/PPLocationReadWriteServerProtocol-Protocol.h>

@interface PPLocationReadWriteServerRequestHandler : NSObject <PPLocationReadWriteServerProtocol>
{
}

- (void)clearWithCompletion:(CDUnknownBlockType)arg1;
- (void)cloudSyncWithCompletion:(CDUnknownBlockType)arg1;
- (void)donateLocations:(id)arg1 source:(id)arg2 contextualNamedEntities:(id)arg3 algorithm:(unsigned short)arg4 cloudSync:(_Bool)arg5 decayRate:(double)arg6 completion:(CDUnknownBlockType)arg7;

@end


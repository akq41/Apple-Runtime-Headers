//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <RemoteManagement/RMUnresolvedAsset-Protocol.h>

@class NSDictionary, NSString, RMAsset;

@interface RMUnresolvedDataAsset : NSObject <RMUnresolvedAsset>
{
    RMAsset *_asset;
    NSDictionary *_queryParameters;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *queryParameters; // @synthesize queryParameters=_queryParameters;
@property(retain, nonatomic) RMAsset *asset; // @synthesize asset=_asset;
- (void)resolveWithAssetResolver:(id)arg1 statusUpdater:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
@property(readonly, copy, nonatomic) NSString *identifier;
- (id)initWithAsset:(id)arg1 queryParameters:(id)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/FCTodayPrivateData.h>

#import <NewsCore/FCMutableTodayPrivateData-Protocol.h>

@class FCBundleSubscription, NSArray, NSDictionary, NSMutableDictionary, NSNumber, NSSet, NSString;
@protocol FCDerivedPersonalizationData><NSCoding;

@interface FCMutableTodayPrivateData : FCTodayPrivateData <FCMutableTodayPrivateData>
{
}

- (void)_deleteObjectsForOldKeys;
- (void)setBundleSubscription:(id)arg1;
- (void)setOnboardingVersion:(id)arg1;
- (void)setRecentlySeenHistoryItems:(id)arg1;
- (void)setRecentlyReadHistoryItems:(id)arg1;
- (void)setRankedAllSubscribedTagIDs:(id)arg1;
- (void)setPurchasedTagIDs:(id)arg1;
- (void)setAutoFavoriteTagIDs:(id)arg1;
- (void)setMutedTagIDs:(id)arg1;
- (void)setDerivedPersonalizationData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy, nonatomic) NSSet *autoFavoriteTagIDs;
@property(readonly, copy, nonatomic) FCBundleSubscription *bundleSubscription;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy, nonatomic) id <FCDerivedPersonalizationData><NSCoding> derivedPersonalizationData;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSMutableDictionary *dictionary; // @dynamic dictionary;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSSet *mutedTagIDs;
@property(readonly, copy, nonatomic) NSNumber *onboardingVersion;
@property(readonly, copy, nonatomic) NSSet *purchasedTagIDs;
@property(readonly, copy, nonatomic) NSArray *rankedAllSubscribedTagIDs;
@property(readonly, copy, nonatomic) NSDictionary *recentlyReadHistoryItems;
@property(readonly, copy, nonatomic) NSArray *recentlySeenHistoryItems;
@property(readonly) Class superclass;

@end


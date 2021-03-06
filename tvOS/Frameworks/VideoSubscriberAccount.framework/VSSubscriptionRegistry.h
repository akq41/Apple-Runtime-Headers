//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <VideoSubscriberAccount/VSSubscriptionServiceProtocol-Protocol.h>

@class NSString, VSRemoteNotifier, VSSubscriptionPersistentContainer, VSSubscriptionPredicateFactory;

__attribute__((visibility("hidden")))
@interface VSSubscriptionRegistry : NSObject <VSSubscriptionServiceProtocol>
{
    VSRemoteNotifier *_remoteNotifier;
    VSSubscriptionPersistentContainer *_persistentContainer;
    VSSubscriptionPredicateFactory *_predicateFactory;
}

- (void).cxx_destruct;
@property(retain, nonatomic) VSSubscriptionPredicateFactory *predicateFactory; // @synthesize predicateFactory=_predicateFactory;
@property(retain, nonatomic) VSSubscriptionPersistentContainer *persistentContainer; // @synthesize persistentContainer=_persistentContainer;
@property(retain, nonatomic) VSRemoteNotifier *remoteNotifier; // @synthesize remoteNotifier=_remoteNotifier;
- (void)removeSubscriptions:(id)arg1;
- (id)_predicateForPersistentAttributesOfSubscriptions:(id)arg1 withEntity:(id)arg2 forFiltering:(_Bool)arg3;
- (void)registerSubscription:(id)arg1;
- (void)fetchActiveSubscriptionsWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_predicateForCurrentConnectionWithRequestKind:(long long)arg1;
- (id)_securityTaskForCurrentConnection;
- (id)_fetchRequest;
- (id)_subscriptionEntity;
- (long long)_saveChangesToContext:(id)arg1 withDate:(id)arg2;
- (_Bool)_saveChangesToContext:(id)arg1;
- (void)_performBlock:(CDUnknownBlockType)arg1;
- (void)_installedAppsDidChange:(id)arg1;
- (void)_sendRemoteNotification;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


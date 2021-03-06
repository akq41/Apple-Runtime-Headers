//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoAudioControl/NACRoutingController-Protocol.h>

@class NACAudioRoute, NACXPCClient, NSArray, NSString;
@protocol NACRoutingControllerDelegate;

__attribute__((visibility("hidden")))
@interface NACRoutingControllerProxy : NSObject <NACRoutingController>
{
    NACXPCClient *_xpcClient;
    NSString *_category;
    _Bool _isObserving;
    id <NACRoutingControllerDelegate> _delegate;
    NSArray *_availableAudioRoutes;
    NACAudioRoute *_pickedRoute;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NACAudioRoute *pickedRoute; // @synthesize pickedRoute=_pickedRoute;
@property(readonly, nonatomic) NSArray *availableAudioRoutes; // @synthesize availableAudioRoutes=_availableAudioRoutes;
@property(nonatomic) __weak id <NACRoutingControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_applicationWillResignActiveNotification:(id)arg1;
- (void)_applicationDidBecomeActiveNotification:(id)arg1;
- (void)_audioRoutesDidChange;
- (void)pickAudioRoute:(id)arg1;
- (void)endObservingRoutes;
- (void)beginObservingRoutes;
- (void)dealloc;
- (id)initWithAudioCategory:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


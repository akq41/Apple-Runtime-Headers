//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoard/SBSceneViewController.h>

#import <SpringBoard/SBApplicationSceneViewControlling-Protocol.h>

@class NSString, SBAppStatusBarSettings, SBApplicationSceneView, SBSceneHandle, UIView;
@protocol SBApplicationSceneViewControllingStatusBarDelegate, SBScenePlaceholderContentContext;

@interface SBApplicationSceneViewController : SBSceneViewController <SBApplicationSceneViewControlling>
{
    _Bool __applicationStatusBarHidden;
    id <SBApplicationSceneViewControllingStatusBarDelegate> _applicationSceneStatusBarDelegate;
    SBAppStatusBarSettings *_overrideStatusBarSettings;
}

- (void).cxx_destruct;
@property(retain, nonatomic, getter=_overrideStatusBarSettings, setter=_setOverrideStatusBarSettings:) SBAppStatusBarSettings *overrideStatusBarSettings; // @synthesize overrideStatusBarSettings=_overrideStatusBarSettings;
@property(readonly, nonatomic, getter=_isApplicationStatusBarHidden) _Bool _applicationStatusBarHidden; // @synthesize _applicationStatusBarHidden=__applicationStatusBarHidden;
@property(nonatomic) __weak id <SBApplicationSceneViewControllingStatusBarDelegate> applicationSceneStatusBarDelegate; // @synthesize applicationSceneStatusBarDelegate=_applicationSceneStatusBarDelegate;
- (double)_applicationStatusBarAlpha;
@property(readonly, nonatomic) long long overrideStatusBarStyle;
@property(readonly, nonatomic) double statusBarAlpha;
- (id)initWithSceneHandle:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) long long contentInterfaceOrientation;
@property(readonly, nonatomic) struct CGSize contentReferenceSize;
@property(retain, nonatomic) UIView *customContentView;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) long long displayMode;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) id <SBScenePlaceholderContentContext> placeholderContentContext;
@property(readonly, nonatomic) SBSceneHandle *sceneHandle;
@property(readonly, nonatomic, getter=_sceneView) SBApplicationSceneView *sceneView; // @dynamic sceneView;
@property(readonly) Class superclass;

@end


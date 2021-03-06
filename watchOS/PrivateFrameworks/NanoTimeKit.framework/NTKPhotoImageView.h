//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <NanoTimeKit/CLKMediaAssetViewDelegate-Protocol.h>

@class CLKDevice, CLKMediaAssetView, NSString, NSURL, NTKCachedPhoto, NTKPhoto;
@protocol NTKPhotoImageViewDelegate;

@interface NTKPhotoImageView : UIView <CLKMediaAssetViewDelegate>
{
    CLKDevice *_device;
    CLKMediaAssetView *_mediaAssetView;
    NTKPhoto *_photo;
    id <NTKPhotoImageViewDelegate> _delegate;
    NTKCachedPhoto *_cachedPhoto;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NTKCachedPhoto *cachedPhoto; // @synthesize cachedPhoto=_cachedPhoto;
@property(nonatomic) __weak id <NTKPhotoImageViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)mediaAssetViewDidEndPlaying:(id)arg1;
- (void)mediaAssetViewDidBeginPlaying:(id)arg1;
@property(readonly, nonatomic) NSString *localIdentifier;
@property(readonly, nonatomic) NSURL *irisURL;
@property(readonly, nonatomic) _Bool isIrisVideoHidden;
@property(readonly, nonatomic) _Bool isPhotoIris;
- (void)resumeInterruptedPlayback;
- (void)interruptPlayback;
- (_Bool)isPlaying;
- (void)pauseWithMode:(int)arg1;
- (void)playWithMode:(int)arg1;
- (void)prepareToPlayWithMode:(int)arg1;
- (void)setPhoto:(id)arg1 allowIris:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1 forDevice:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IMCore/IMBalloonPlugin.h>

@interface IMBalloonPlugin (ImageLoading)
- (id)recentsBadgeIcon;
- (id)appStoreBadgeIcon;
- (id)description;
- (id)_scaledImage:(id)arg1 xscale:(float)arg2 yscale:(float)arg3;
- (id)__ck_statusJPEGImageDataForTransportWithCompressionFactor:(float)arg1;
- (id)__ck_statusImageForTransport;
- (id)__ck_breadcrumbImage;
- (id)__ck_statusImage;
- (id)__ck_badgeImage;
- (id)__ck_browserImageName:(_Bool *)arg1;
- (id)__ck_browserImageGenerateSynchronously:(_Bool)arg1 interfaceStyle:(int)arg2;
- (id)__ck_browserImageForInterfaceStyle:(int)arg1;
- (void)__ck_prefetchBrowserImageForInterfaceStyle:(int)arg1;
- (id)iconCache;
- (id)__ck_attributionInfo;
- (id)_adamID;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoPrintProduct/NSObject-Protocol.h>

@class KHSelectionManager, UXViewController;
@protocol KHAccessoryViewControllerProtocol;

@protocol KHAccessoryViewContainerProtocol <NSObject>
- (long long)containerViewScrollerStyle;
- (void)setDisplayState:(long long)arg1 forAccessoryViewController:(UXViewController<KHAccessoryViewControllerProtocol> *)arg2 animated:(BOOL)arg3;
- (KHSelectionManager *)selectionManagerForAccessoryViewController:(UXViewController<KHAccessoryViewControllerProtocol> *)arg1;
@end


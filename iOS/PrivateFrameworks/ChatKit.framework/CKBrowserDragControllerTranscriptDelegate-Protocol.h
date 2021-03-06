//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChatKit/NSObject-Protocol.h>

@class CKBrowserDragControllerTarget, CKBrowserDragManager;

@protocol CKBrowserDragControllerTranscriptDelegate <NSObject>
- (int)dragManager:(CKBrowserDragManager *)arg1 dropAreaForDragTarget:(CKBrowserDragControllerTarget *)arg2;
- (void)dragManagerDidEndDragging:(CKBrowserDragManager *)arg1;
- (void)dragManager:(CKBrowserDragManager *)arg1 draggedItemWithTarget:(CKBrowserDragControllerTarget *)arg2;
- (void)dragManagerDidBeginDragging:(CKBrowserDragManager *)arg1;

@optional
- (void)dragManager:(CKBrowserDragManager *)arg1 overrideDropPointForTarget:(CKBrowserDragControllerTarget *)arg2 completion:(void (^)(struct CGPoint))arg3;
@end


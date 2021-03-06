//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIView;

@interface SBViewSnapshotProvider : NSObject
{
    UIView *_view;
    long long _orientation;
    CDUnknownBlockType _completionBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
- (void)snapshotAsynchronously:(_Bool)arg1 withImageBlock:(CDUnknownBlockType)arg2;
- (void)snapshotWithImageBlock:(CDUnknownBlockType)arg1;
- (id)snapshot;
- (id)initWithView:(id)arg1 orientation:(long long)arg2;

@end


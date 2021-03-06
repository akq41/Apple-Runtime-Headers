//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class _NSFullScreenSpace;

__attribute__((visibility("hidden")))
@interface _NSFullScreenTransitionController : NSObject
{
    _NSFullScreenSpace *_space;
}

+ (struct CGRect)flippedCGRectFromNSRect:(struct CGRect)arg1;
+ (void)clearWindowTag:(long long)arg1 onWindowNumbers:(id)arg2;
+ (void)setWindowTag:(long long)arg1 onWindowNumbers:(id)arg2;
@property(retain, nonatomic) _NSFullScreenSpace *space; // @synthesize space=_space;
- (unsigned int)contentWindowID;
- (id)contentController;
- (BOOL)suppressImplicitFullScreenForOtherWindows;
- (void)complete;
- (void)interrupt;
- (void)start;
- (void)dealloc;

@end


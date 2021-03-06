//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface MTLCountersTraceCommandBuffer : NSObject
{
    struct BinaryBuffer _commands;
    NSMutableArray *_encoders;
    struct AppendBuffer _samples;
    unsigned long long _flags;
    unsigned long long _timestamp;
}

- (id).cxx_construct;
- (void)saveCommandBuffer:(const void *)arg1 queue:(id)arg2 profilingResults:(id)arg3;
- (void)appendSamples:(const void *)arg1 length:(unsigned long long)arg2;
- (void)presentDrawable:(id)arg1 atTime:(double)arg2;
- (void)presentDrawable:(id)arg1;
- (void)waitUntilCompleted;
- (void)waitUntilScheduled;
- (id)resourceStateCommandEncoder;
- (id)renderCommandEncoder;
- (id)computeCommandEncoder;
- (id)blitCommandEncoder;
- (void)dealloc;
- (id)init:(_Bool)arg1;

@end


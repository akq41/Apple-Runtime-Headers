//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MetalTools/MTLToolsRenderPipelineState.h>

@class MTLRenderPipelineDescriptor, MTLRenderPipelineReflection, MTLToolsFunction;

@interface MTLGPUDebugRenderPipelineState : MTLToolsRenderPipelineState
{
    MTLRenderPipelineDescriptor *_descriptor;
    MTLRenderPipelineReflection *_reflection;
}

- (void)dealloc;
@property(readonly, nonatomic) MTLRenderPipelineReflection *reflection;
- (id)fragmentLibrary;
@property(readonly, nonatomic) MTLToolsFunction *fragmentFunction;
- (id)vertexLibrary;
@property(readonly, nonatomic) MTLToolsFunction *vertexFunction;
- (id)initWithRenderPipelineState:(id)arg1 descriptor:(id)arg2 reflection:(id)arg3 device:(id)arg4;

@end


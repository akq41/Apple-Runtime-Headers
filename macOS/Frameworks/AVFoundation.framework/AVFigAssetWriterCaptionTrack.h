//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVFoundation/AVFigAssetWriterTrack.h>

@class AVCaptionGrouper;

__attribute__((visibility("hidden")))
@interface AVFigAssetWriterCaptionTrack : AVFigAssetWriterTrack
{
    AVCaptionGrouper *_captionGrouper;
    CDStruct_e83c9415 _previousCaptionTimeRange;
    CDStruct_1b6d18a9 _nextGroupStartTime;
}

- (BOOL)markEndOfDataReturningError:(id *)arg1;
- (void)prepareToEndSession;
- (BOOL)addCaptionGroup:(id)arg1 error:(id *)arg2;
- (BOOL)addCaption:(id)arg1 error:(id *)arg2;
- (BOOL)addCaptionGroupAsSampleBuffer:(id)arg1 error:(id *)arg2;
- (BOOL)flushCaptionsWithError:(id *)arg1;
- (BOOL)flushCaptionsUntilTime:(CDStruct_1b6d18a9)arg1 error:(id *)arg2;
- (BOOL)addSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 error:(id *)arg2;
- (void)dealloc;
- (int)_attachToFigAssetWriterUsingFormatSpecification:(id)arg1 sourcePixelBufferAttributes:(id)arg2 multiPass:(BOOL)arg3 error:(id *)arg4;

@end


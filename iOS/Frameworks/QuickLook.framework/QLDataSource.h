//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <QuickLook/QLPreviewItemProvider-Protocol.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface QLDataSource : NSObject <QLPreviewItemProvider>
{
    NSArray *_previewItems;
}

- (void).cxx_destruct;
- (void)previewItemAtIndex:(unsigned long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)initWithPreviewItems:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSScrollView, NSTextView, QCPatch;

@interface QCLogView : NSView
{
    NSView *_insideView;
    NSScrollView *_scrollView;
    NSTextView *_textView;
    QCPatch *_rootPatch;
    void *_unused[4];
}

+ (void)initialize;
- (void)clear:(id)arg1;
- (id)rootPatch;
- (void)setRootPatch:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_finishInitialization;
- (void)_message:(id)arg1;
- (void)_appendLog:(id)arg1;
- (Class)valueClassForBinding:(id)arg1;

@end


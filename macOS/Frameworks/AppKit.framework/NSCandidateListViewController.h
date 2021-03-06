//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class NSArray, NSButton, NSLayoutConstraint, NSTimer, NSTouchBarItem, NSView;
@protocol NSTextInputClient;

__attribute__((visibility("hidden")))
@interface NSCandidateListViewController : NSViewController
{
    NSButton *_button;
    NSLayoutConstraint *_minWidthConstraint;
    NSLayoutConstraint *_maxWidthConstraint;
    id _leftCandidate;
    id _middleCandidate;
    id _rightCandidate;
    NSArray *_splitRightArray;
    struct CGPoint _location;
    NSTouchBarItem *_touchBarItem;
    id _delegate;
    NSView<NSTextInputClient> *_client;
    NSView *_viewForLocation;
    NSViewController *_accessoryViewController;
    CDUnknownBlockType _formattingBlock;
    CDUnknownBlockType _completionHandler;
    unsigned long long _trackingIndex;
    long long _sequenceNumber;
    double _lastUpdateTime;
    double _pendingTransitionDuration;
    NSTimer *_updateTimer;
    unsigned long long _delayedCollapseCount;
    struct {
        unsigned int _shouldUsePanel:1;
        unsigned int _isTracking:1;
        unsigned int _hasCorrection:1;
        unsigned int _hasQuotes:1;
        unsigned int _collapsed:1;
        unsigned int _allowsCollapsing:1;
        unsigned int _allowsCandidateVariation:1;
        unsigned int _processingUserCollapse:1;
        unsigned int _processingCollapse:1;
        unsigned int _hasEmoji:1;
        unsigned int _limitsNumberOfCandidates:1;
        unsigned int _reserved:21;
    } _flags;
}

+ (double)standardWidth;
+ (id)sharedPanel:(BOOL)arg1;
- (void)stopTrackingInSegmentType:(long long)arg1 index:(unsigned long long)arg2;
- (void)continueTrackingInSegmentType:(long long)arg1 index:(unsigned long long)arg2;
- (void)startTrackingInSegmentType:(long long)arg1 index:(unsigned long long)arg2;
@property BOOL limitsNumberOfCandidates;
@property BOOL allowsCollapsing;
@property(getter=isCollapsed) BOOL collapsed;
- (void)spellCheckerDidChangeCompletionCollapsed:(id)arg1;
@property(readonly) BOOL processingUserExpand;
@property(readonly) BOOL shouldAnimateNextLayoutPass;
- (void)userSetCollapsed:(BOOL)arg1;
- (void)_setCollapsed:(BOOL)arg1;
- (BOOL)_prepareDelayedSetCollapsed;
- (void)_delayedSetCollapsed;
- (void)runPositionAnimation;
- (void)updateViewConstraints;
- (void)_updateCollapsingStateConstraint;
- (void)showPanel;
- (id)candidateForTrackingIndex:(unsigned long long)arg1 candidateIndex:(unsigned long long *)arg2;
- (void)updateState;
- (void)updateTitles;
- (void)updateStateAndTitles:(BOOL)arg1 allowDelay:(BOOL)arg2;
- (void)updateTimerFired:(id)arg1;
- (void)showCandidates:(id)arg1 forString:(id)arg2 inRect:(struct CGRect)arg3 view:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)setCandidates:(id)arg1 forSelectedRange:(struct _NSRange)arg2 inString:(id)arg3 rect:(struct CGRect)arg4 view:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)setCandidates:(id)arg1 forSelectedRange:(struct _NSRange)arg2 inString:(id)arg3;
- (void)setCandidates:(id)arg1 forSelectedRange:(struct _NSRange)arg2 offset:(unsigned long long)arg3 inString:(id)arg4 rect:(struct CGRect)arg5 view:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (void)setCandidates:(id)arg1 forSelectedRange:(struct _NSRange)arg2 inString:(id)arg3 replacedString:(id)arg4 rect:(struct CGRect)arg5 view:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (void)setCandidates:(id)arg1 forSelectedRange:(struct _NSRange)arg2 offset:(unsigned long long)arg3 inString:(id)arg4 replacedString:(id)arg5 rect:(struct CGRect)arg6 view:(id)arg7 completionHandler:(CDUnknownBlockType)arg8;
- (void)_setNonTextCheckingResultCandidates:(id)arg1;
- (void)_setTextCheckingResultCandidates:(id)arg1 forSelectedRange:(struct _NSRange)arg2 offset:(unsigned long long)arg3 inString:(id)arg4 replacedString:(id)arg5;
- (id)_replacementStringForRange:(struct _NSRange)arg1 inString:(id)arg2 firstCandidateString:(id)arg3;
- (id)_stringForCandidate:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)_compositeCandidateForCandidate:(id)arg1 atIndex:(unsigned long long)arg2 addQuotes:(BOOL)arg3 isCorrection:(BOOL)arg4 isEmoji:(BOOL)arg5;
@property(readonly, copy) NSArray *candidates;
@property(retain) NSViewController *accessoryViewController;
@property(copy) CDUnknownBlockType completionHandler;
@property(copy) CDUnknownBlockType formattingBlock;
@property __weak id delegate;
@property __weak NSView<NSTextInputClient> *client;
@property __weak NSTouchBarItem *touchBarItem;
- (void)dealloc;
- (void)loadView;
- (id)rightCandidate;
- (void)setRightCandidate:(id)arg1;
- (id)middleCandidate;
- (void)setMiddleCandidate:(id)arg1;
- (id)leftCandidate;
- (void)setLeftCandidate:(id)arg1;
- (id)init;
- (BOOL)_viewControllerSupports10_10Features;

@end


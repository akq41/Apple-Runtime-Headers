//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "__ETCanvasViewAccessibility_super.h"

@interface ETCanvasViewAccessibility : __ETCanvasViewAccessibility_super
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (void)_accessibilityInvalidateDirectTouchTimerAndReschedule:(_Bool)arg1;
- (void)_checkForIdle;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)_endMessage:(id)arg1 withSend:(_Bool)arg2;
- (void)_setIsComposingMessageOfType:(unsigned short)arg1;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (struct CGRect)accessibilityFrame;
- (_Bool)_accessibilityServesAsFirstElement;
- (_Bool)accessibilityElementsHidden;
- (_Bool)isAccessibilityElement;
- (_Bool)accessibilityActivate;
- (void)dealloc;
- (void)_accessibilitySetDisableDirectTouchTimer:(id)arg1;
- (id)_accessibilityDisableDirectTouchTimer;
- (void)_accessibilitySetIsDirectTouching:(_Bool)arg1;
- (_Bool)_accessibilityIsDirectTouching;

@end


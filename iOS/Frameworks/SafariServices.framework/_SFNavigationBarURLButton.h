//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

#import <SafariServices/UIGestureRecognizerDelegate-Protocol.h>

@class NSString, UIGestureRecognizer, UIVibrancyEffect, UIView, UIVisualEffectView, _SFNavigationBarTheme;
@protocol _SFNavigationBarURLButtonDelegate;

__attribute__((visibility("hidden")))
@interface _SFNavigationBarURLButton : UIButton <UIGestureRecognizerDelegate>
{
    UIVibrancyEffect *_highlightedVibrancyEffect;
    UIVibrancyEffect *_vibrancyEffect;
    UIVisualEffectView *_effectView;
    UIView *_effectMask;
    UIGestureRecognizer *_longPressGestureRecognizer;
    double _backgroundAlphaFactor;
    _SFNavigationBarTheme *_theme;
    id <_SFNavigationBarURLButtonDelegate> _delegate;
    double _urlOutlineCornerRadius;
}

- (void).cxx_destruct;
@property(nonatomic, setter=setURLOutlineCornerRadius:) double urlOutlineCornerRadius; // @synthesize urlOutlineCornerRadius=_urlOutlineCornerRadius;
@property(nonatomic) __weak id <_SFNavigationBarURLButtonDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) _SFNavigationBarTheme *theme; // @synthesize theme=_theme;
@property(nonatomic) double backgroundAlphaFactor; // @synthesize backgroundAlphaFactor=_backgroundAlphaFactor;
- (id)_accessibilityQuickSpeakContent;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)_dismissMenu:(id)arg1;
- (void)_handleLongPress:(id)arg1;
- (void)pasteAndNavigate:(id)arg1;
- (void)copy:(id)arg1;
- (_Bool)canBecomeFirstResponder;
- (void)setHighlighted:(_Bool)arg1;
- (void)_updateBackgroundImageAnimated:(_Bool)arg1;
- (void)_updateEffectView;
- (_Bool)pointMostlyInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


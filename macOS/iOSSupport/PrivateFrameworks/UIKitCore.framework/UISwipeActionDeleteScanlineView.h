//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface UISwipeActionDeleteScanlineView : UIView
{
    UIView *_bottomLineWrapper;
    UIView *_topLine;
    UIView *_bottomLine;
}

+ (double)lineHeight;
- (void).cxx_destruct;
@property(copy, nonatomic) UIColor *deleteLineColor;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TelephonyUI/TPBottomSingleButtonBar.h>

@class TPButton;

@interface TPBottomDoubleButtonBar : TPBottomSingleButtonBar
{
    TPButton *_button2;
}

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_layoutButtons;
- (id)button2;
- (void)setButton2:(id)arg1 andStyle:(_Bool)arg2;
- (void)setButton:(id)arg1 andStyle:(_Bool)arg2;
- (float)_buttonWidth;

@end


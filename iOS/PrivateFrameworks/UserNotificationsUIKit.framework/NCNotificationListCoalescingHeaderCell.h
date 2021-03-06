//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <UserNotificationsUIKit/MTMaterialGrouping-Protocol.h>
#import <UserNotificationsUIKit/NCLegibilitySettingsAdjusting-Protocol.h>
#import <UserNotificationsUIKit/NCNotificationListCoalescingControlsHandler-Protocol.h>
#import <UserNotificationsUIKit/NCNotificationListCoalescingControlsViewDelegate-Protocol.h>
#import <UserNotificationsUIKit/PLContentSizeCategoryAdjusting-Protocol.h>

@class NCNotificationListCoalescingControlsView, NCNotificationListHeaderTitleView, NSString, _UILegibilitySettings;
@protocol NCNotificationListCoalescingControlsHandlerDelegate;

@interface NCNotificationListCoalescingHeaderCell : UIView <NCNotificationListCoalescingControlsViewDelegate, NCLegibilitySettingsAdjusting, PLContentSizeCategoryAdjusting, NCNotificationListCoalescingControlsHandler, MTMaterialGrouping>
{
    _Bool _adjustsFontForContentSizeCategory;
    id <NCNotificationListCoalescingControlsHandlerDelegate> _handlerDelegate;
    NSString *_materialGroupNameBase;
    NSString *_title;
    NCNotificationListCoalescingControlsView *_coalescingControlsView;
    NCNotificationListHeaderTitleView *_headerTitleView;
    _UILegibilitySettings *_legibilitySettings;
}

+ (double)coalescingHeaderCellHeightForWidth:(double)arg1 title:(id)arg2;
+ (struct CGSize)_coalescingControlsViewPreferredSize;
+ (void)_contentSizeCategoryDidChange:(id)arg1;
+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property(retain, nonatomic) NCNotificationListHeaderTitleView *headerTitleView; // @synthesize headerTitleView=_headerTitleView;
@property(retain, nonatomic) NCNotificationListCoalescingControlsView *coalescingControlsView; // @synthesize coalescingControlsView=_coalescingControlsView;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *materialGroupNameBase; // @synthesize materialGroupNameBase=_materialGroupNameBase;
@property(nonatomic) _Bool adjustsFontForContentSizeCategory; // @synthesize adjustsFontForContentSizeCategory=_adjustsFontForContentSizeCategory;
@property(nonatomic) __weak id <NCNotificationListCoalescingControlsHandlerDelegate> handlerDelegate; // @synthesize handlerDelegate=_handlerDelegate;
- (void)_layoutHeaderTitleView;
- (void)_layoutCoalescingControlsView;
- (struct CGRect)_coalescingControlsViewFrameForBounds:(struct CGRect)arg1;
- (void)_configureHeaderTitleViewIfNecessary;
- (void)_configureCoalescingControlsViewIfNecessary;
- (_Bool)adjustForContentSizeCategoryChange;
- (void)adjustForLegibilitySettingsChange:(id)arg1;
- (void)notificationListCoalescingControlsViewDidDismissPreviewInteractionPresentedContent:(id)arg1;
- (void)notificationListCoalescingControlsViewDidPresentPreviewInteractionPresentedContent:(id)arg1;
- (void)notificationListCoalescingControlsViewDidBeginPreviewInteraction:(id)arg1;
- (void)notificationListCoalescingControlsView:(id)arg1 didTransitionToClearState:(_Bool)arg2;
- (void)notificationListCoalescingControlsViewRequestsRestack:(id)arg1;
- (void)notificationListCoalescingControlsViewRequestsClearAll:(id)arg1;
- (id)containerViewForCoalescingControlsPreviewInteractionPresentedContent:(id)arg1;
- (void)notificationListCoalescingControlsViewRequestsClear:(id)arg1;
- (void)layoutSubviews;
- (_Bool)shouldReceiveTouchAtPointInWindowSpace:(struct CGPoint)arg1;
- (_Bool)dismissModalFullScreenIfNeeded;
- (void)resetClearButtonStateAnimated:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *preferredContentSizeCategory;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PUPhotoEditBaseAdjustmentCell.h>

@class UITapGestureRecognizer;
@protocol PUPhotoEditBaseAdjustmentCellDelegate;

__attribute__((visibility("hidden")))
@interface PUPhotoEditAutoAdjustmentCell : PUPhotoEditBaseAdjustmentCell
{
    id <PUPhotoEditBaseAdjustmentCellDelegate> _delegate;
    UITapGestureRecognizer *_tapGestureRecognizer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(nonatomic) __weak id <PUPhotoEditBaseAdjustmentCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handleButton:(id)arg1;
- (void)setEnabled:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)setImageName:(id)arg1;
- (void)_configureContainerButton;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end


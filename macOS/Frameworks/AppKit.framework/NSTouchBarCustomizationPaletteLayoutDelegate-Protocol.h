//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSCollectionViewDelegate-Protocol.h>

@class NSCollectionView, NSCollectionViewLayout, NSIndexPath;

@protocol NSTouchBarCustomizationPaletteLayoutDelegate <NSCollectionViewDelegate>
- (struct CGSize)collectionView:(NSCollectionView *)arg1 layout:(NSCollectionViewLayout *)arg2 maxSizeForItemAtIndexPath:(NSIndexPath *)arg3;
- (struct CGSize)collectionView:(NSCollectionView *)arg1 layout:(NSCollectionViewLayout *)arg2 minSizeForItemAtIndexPath:(NSIndexPath *)arg3;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface SKUIShelfLayoutData : NSObject
{
    double _columnSpacing;
    NSMutableArray *_columnWidths;
    struct UIEdgeInsets _contentInset;
    long long _numberOfRows;
    double *_rowHeights;
}

- (void).cxx_destruct;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property(readonly, nonatomic) long long numberOfRows; // @synthesize numberOfRows=_numberOfRows;
@property(readonly, nonatomic) double columnSpacing; // @synthesize columnSpacing=_columnSpacing;
@property(readonly, nonatomic) struct CGSize totalContentSize;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (double)rowHeightForIndex:(long long)arg1;
- (void)reloadWithItemCount:(long long)arg1 sizeBlock:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) long long numberOfColumns;
- (void)enumerateRowsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateColumnsUsingBlock:(CDUnknownBlockType)arg1;
- (double)columnWidthForIndex:(long long)arg1;
- (void)dealloc;
- (id)initWithNumberOfRows:(long long)arg1 columnSpacing:(double)arg2;

@end


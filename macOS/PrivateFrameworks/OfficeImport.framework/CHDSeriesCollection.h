//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/EDSortedCollection.h>

@class CHDChart;

__attribute__((visibility("hidden")))
@interface CHDSeriesCollection : EDSortedCollection
{
    CHDChart *mChart;
}

+ (id)seriesCollectionWithChart:(id)arg1;
- (void).cxx_destruct;
- (id)firstNonEmptySeries;
- (unsigned long long)nonEmptySeriesCount;
- (unsigned long long)addObject:(id)arg1;
- (id)initWithChart:(id)arg1;

@end


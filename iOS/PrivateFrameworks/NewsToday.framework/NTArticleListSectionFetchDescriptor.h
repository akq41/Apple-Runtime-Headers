//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsToday/NTSectionFetchDescriptor-Protocol.h>

@class NSString, NTPBArticleListTodaySectionSpecificConfig;

@interface NTArticleListSectionFetchDescriptor : NSObject <NTSectionFetchDescriptor>
{
    NTPBArticleListTodaySectionSpecificConfig *_articleListRequest;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NTPBArticleListTodaySectionSpecificConfig *articleListRequest; // @synthesize articleListRequest=_articleListRequest;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)incrementalLimitTransformationWithFeedPersonalizer:(id)arg1 limit:(unsigned long long)arg2 priorFeedItems:(id)arg3;
- (id)incrementalSortTransformationWithFeedPersonalizer:(id)arg1;
- (id)assembleResultsWithCatchUpOperation:(id)arg1;
- (void)configureCatchUpOperationWithFetchRequest:(id)arg1;
- (id)initWithArticleListConfiguration:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


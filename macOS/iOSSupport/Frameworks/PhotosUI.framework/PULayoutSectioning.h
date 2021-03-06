//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol PULayoutSectioningDelegate;

@interface PULayoutSectioning : NSObject
{
    BOOL _invalidatingSampling;
    BOOL _invalidatingSections;
    PULayoutSectioning *_baseSectioning;
    id <PULayoutSectioningDelegate> _delegate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PULayoutSectioning *baseSectioning; // @synthesize baseSectioning=_baseSectioning;
@property(nonatomic) id <PULayoutSectioningDelegate> delegate; // @synthesize delegate=_delegate;
- (BOOL)writeToURL:(id)arg1 error:(id *)arg2;
- (id)sectioningHash;
- (id)sectioningHashHasIncorrectSampling:(char *)arg1 hasInvisibleItemsInBaseSectioning:(char *)arg2;
- (id)sectioningDescription;
- (id)_sectioningDescriptionShowInvisibleItemsInBaseSectioning:(BOOL)arg1 hasIncorrectSampling:(char *)arg2 hasInvisibleItemsInBaseSectioning:(char *)arg3;
- (long long)__debugUnsampledIndexForRealIndexPath:(struct PUSimpleIndexPath)arg1;
- (id)description;
- (id)visibleUnsampledIndexesForCombinedRealSections:(id)arg1;
- (void)enumerateRealMainItemIndexPathsForVisualSection:(long long)arg1 inVisualItemRange:(struct _NSRange)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)enumerateRealSectionsForVisualSection:(long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (long long)visualSectionForRealSection:(long long)arg1;
- (long long)mainRealSectionForVisualSection:(long long)arg1;
- (struct PUSimpleIndexPath)visualIndexPathForRealIndexPath:(struct PUSimpleIndexPath)arg1 isMainItem:(char *)arg2;
- (struct PUSimpleIndexPath)mainRealItemIndexPathForVisualIndexPath:(struct PUSimpleIndexPath)arg1;
- (long long)numberOfRealItemsInVisualSection:(long long)arg1;
- (long long)numberOfVisualItemsInVisualSection:(long long)arg1;
- (void)invalidateSections;
- (void)_baseSectioningDidInvalidateSections:(id)arg1;
- (BOOL)hasSomeSampling;
- (void)invalidateSampling;
- (void)_baseSectioningDidInvalidateSampling:(id)arg1;
- (void)dealloc;

@end


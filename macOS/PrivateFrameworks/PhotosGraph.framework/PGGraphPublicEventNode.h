//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosGraph/PGGraphNode.h>

#import <PhotosGraph/PGGraphPortraitNamedEntity-Protocol.h>

@class NSSet, NSString, PGGraphBusinessNode, PPNamedEntity;

@interface PGGraphPublicEventNode : PGGraphNode <PGGraphPortraitNamedEntity>
{
}

+ (id)momentNodesForPublicEventNodes:(id)arg1;
- (id)associatedNodesForRemoval;
- (id)keywordDescription;
- (void)enumeratePublicEventCategoryNodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumeratePerformerNodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateMomentNodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateLocalizedSubcategoryNodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateCategoryNodesUsingBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) long long expectedAttendance;
@property(readonly, nonatomic) NSSet *preciseLocalizedCategoryNames;
@property(readonly, nonatomic) PGGraphBusinessNode *businessNode;
@property(readonly, copy, nonatomic) NSSet *performers;
@property(readonly, nonatomic) NSSet *localizedCategories;
@property(readonly, nonatomic) NSSet *categories;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) unsigned long long muid;
@property(readonly, nonatomic) PPNamedEntity *pg_namedEntity;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


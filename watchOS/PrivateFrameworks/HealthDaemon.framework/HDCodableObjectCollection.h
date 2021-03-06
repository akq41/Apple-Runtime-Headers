//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@class HDCodableGeneratedObjectCollection, HDCodableProvenance, HDCodableSource, NSMutableArray, NSString;

@interface HDCodableObjectCollection : PBCodable <NSCopying>
{
    NSMutableArray *_activityCaches;
    NSMutableArray *_binarySamples;
    NSMutableArray *_categorySamples;
    NSMutableArray *_cdaDocumentSamples;
    NSMutableArray *_correlations;
    NSMutableArray *_deletedSamples;
    NSMutableArray *_fitnessFriendAchievements;
    NSMutableArray *_fitnessFriendActivitySnapshots;
    NSMutableArray *_fitnessFriendWorkouts;
    HDCodableGeneratedObjectCollection *_generatedObjectCollection;
    NSMutableArray *_locationSeries;
    NSMutableArray *_medicalRecords;
    HDCodableProvenance *_provenance;
    NSMutableArray *_quantitySamples;
    HDCodableSource *_source;
    NSString *_sourceBundleIdentifier;
    NSMutableArray *_workouts;
}

+ (Class)medicalRecordsType;
+ (Class)fitnessFriendWorkoutsType;
+ (Class)fitnessFriendAchievementsType;
+ (Class)fitnessFriendActivitySnapshotsType;
+ (Class)cdaDocumentSamplesType;
+ (Class)locationSeriesType;
+ (Class)deletedSamplesType;
+ (Class)binarySamplesType;
+ (Class)activityCachesType;
+ (Class)correlationsType;
+ (Class)workoutsType;
+ (Class)quantitySamplesType;
+ (Class)categorySamplesType;
- (void).cxx_destruct;
@property(retain, nonatomic) HDCodableProvenance *provenance; // @synthesize provenance=_provenance;
@property(retain, nonatomic) HDCodableGeneratedObjectCollection *generatedObjectCollection; // @synthesize generatedObjectCollection=_generatedObjectCollection;
@property(retain, nonatomic) NSMutableArray *medicalRecords; // @synthesize medicalRecords=_medicalRecords;
@property(retain, nonatomic) NSMutableArray *fitnessFriendWorkouts; // @synthesize fitnessFriendWorkouts=_fitnessFriendWorkouts;
@property(retain, nonatomic) NSMutableArray *fitnessFriendAchievements; // @synthesize fitnessFriendAchievements=_fitnessFriendAchievements;
@property(retain, nonatomic) NSMutableArray *fitnessFriendActivitySnapshots; // @synthesize fitnessFriendActivitySnapshots=_fitnessFriendActivitySnapshots;
@property(retain, nonatomic) NSMutableArray *cdaDocumentSamples; // @synthesize cdaDocumentSamples=_cdaDocumentSamples;
@property(retain, nonatomic) NSMutableArray *locationSeries; // @synthesize locationSeries=_locationSeries;
@property(retain, nonatomic) NSMutableArray *deletedSamples; // @synthesize deletedSamples=_deletedSamples;
@property(retain, nonatomic) NSMutableArray *binarySamples; // @synthesize binarySamples=_binarySamples;
@property(retain, nonatomic) NSMutableArray *activityCaches; // @synthesize activityCaches=_activityCaches;
@property(retain, nonatomic) NSMutableArray *correlations; // @synthesize correlations=_correlations;
@property(retain, nonatomic) NSMutableArray *workouts; // @synthesize workouts=_workouts;
@property(retain, nonatomic) NSMutableArray *quantitySamples; // @synthesize quantitySamples=_quantitySamples;
@property(retain, nonatomic) NSMutableArray *categorySamples; // @synthesize categorySamples=_categorySamples;
@property(retain, nonatomic) HDCodableSource *source; // @synthesize source=_source;
@property(retain, nonatomic) NSString *sourceBundleIdentifier; // @synthesize sourceBundleIdentifier=_sourceBundleIdentifier;
- (void)mergeFrom:(id)arg1;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasProvenance;
@property(readonly, nonatomic) _Bool hasGeneratedObjectCollection;
- (id)medicalRecordsAtIndex:(unsigned int)arg1;
- (unsigned int)medicalRecordsCount;
- (void)addMedicalRecords:(id)arg1;
- (void)clearMedicalRecords;
- (id)fitnessFriendWorkoutsAtIndex:(unsigned int)arg1;
- (unsigned int)fitnessFriendWorkoutsCount;
- (void)addFitnessFriendWorkouts:(id)arg1;
- (void)clearFitnessFriendWorkouts;
- (id)fitnessFriendAchievementsAtIndex:(unsigned int)arg1;
- (unsigned int)fitnessFriendAchievementsCount;
- (void)addFitnessFriendAchievements:(id)arg1;
- (void)clearFitnessFriendAchievements;
- (id)fitnessFriendActivitySnapshotsAtIndex:(unsigned int)arg1;
- (unsigned int)fitnessFriendActivitySnapshotsCount;
- (void)addFitnessFriendActivitySnapshots:(id)arg1;
- (void)clearFitnessFriendActivitySnapshots;
- (id)cdaDocumentSamplesAtIndex:(unsigned int)arg1;
- (unsigned int)cdaDocumentSamplesCount;
- (void)addCdaDocumentSamples:(id)arg1;
- (void)clearCdaDocumentSamples;
- (id)locationSeriesAtIndex:(unsigned int)arg1;
- (unsigned int)locationSeriesCount;
- (void)addLocationSeries:(id)arg1;
- (void)clearLocationSeries;
- (id)deletedSamplesAtIndex:(unsigned int)arg1;
- (unsigned int)deletedSamplesCount;
- (void)addDeletedSamples:(id)arg1;
- (void)clearDeletedSamples;
- (id)binarySamplesAtIndex:(unsigned int)arg1;
- (unsigned int)binarySamplesCount;
- (void)addBinarySamples:(id)arg1;
- (void)clearBinarySamples;
- (id)activityCachesAtIndex:(unsigned int)arg1;
- (unsigned int)activityCachesCount;
- (void)addActivityCaches:(id)arg1;
- (void)clearActivityCaches;
- (id)correlationsAtIndex:(unsigned int)arg1;
- (unsigned int)correlationsCount;
- (void)addCorrelations:(id)arg1;
- (void)clearCorrelations;
- (id)workoutsAtIndex:(unsigned int)arg1;
- (unsigned int)workoutsCount;
- (void)addWorkouts:(id)arg1;
- (void)clearWorkouts;
- (id)quantitySamplesAtIndex:(unsigned int)arg1;
- (unsigned int)quantitySamplesCount;
- (void)addQuantitySamples:(id)arg1;
- (void)clearQuantitySamples;
- (id)categorySamplesAtIndex:(unsigned int)arg1;
- (unsigned int)categorySamplesCount;
- (void)addCategorySamples:(id)arg1;
- (void)clearCategorySamples;
@property(readonly, nonatomic) _Bool hasSource;
@property(readonly, nonatomic) _Bool hasSourceBundleIdentifier;
- (void)addClinicalRecord:(id)arg1;
- (void)addUnknownRecord:(id)arg1;
- (void)addAccountOwner:(id)arg1;
- (void)addProcedureRecord:(id)arg1;
- (void)addAllergyRecord:(id)arg1;
- (void)addConditionRecord:(id)arg1;
- (void)addVaccinationRecord:(id)arg1;
- (void)addDiagnosticTestReport:(id)arg1;
- (void)addDiagnosticTestResult:(id)arg1;
- (void)addMedicationRecord:(id)arg1;
- (void)addMedicationDispenseRecord:(id)arg1;
- (void)addMedicationOrder:(id)arg1;
- (_Bool)unitTest_isEquivalentToObjectCollection:(id)arg1;
- (id)decodedObjects;
- (unsigned int)count;

@end


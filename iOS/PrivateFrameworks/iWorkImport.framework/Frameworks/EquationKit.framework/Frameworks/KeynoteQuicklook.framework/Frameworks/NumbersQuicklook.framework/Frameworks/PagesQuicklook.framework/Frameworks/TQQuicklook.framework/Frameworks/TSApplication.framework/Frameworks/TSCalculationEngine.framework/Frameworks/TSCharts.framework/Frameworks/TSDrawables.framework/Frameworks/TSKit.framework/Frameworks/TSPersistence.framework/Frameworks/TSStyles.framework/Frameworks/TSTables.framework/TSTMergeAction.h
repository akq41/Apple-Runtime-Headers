//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSTables/NSCopying-Protocol.h>

@interface TSTMergeAction : NSObject <NSCopying>
{
    int _type;
    vector_793e6c56 _uidRanges;
    vector_eeb872f1 _mergeFormulas;
    vector_06e666a8 _mergeFormulaIndexes;
}

+ (id)mergeActionForInsertingRange:(const UUIDRect_d701734b *)arg1 inTable:(id)arg2;
+ (id)mergeActionForGrowingRange:(const UUIDRect_d701734b *)arg1 coveringRange:(const UUIDRect_d701734b *)arg2 inTable:(id)arg3;
+ (id)mergeActionForRemovingRanges:(const vector_793e6c56 *)arg1 inTable:(id)arg2;
+ (UUIDRect_d701734b)cellUIDRangeFromMergeFormula:(const struct TSCEFormula *)arg1 calcEngine:(id)arg2;
+ (id)stringForMergeType:(int)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) const vector_06e666a8 *mergeFormulaIndexes; // @synthesize mergeFormulaIndexes=_mergeFormulaIndexes;
@property(nonatomic) const vector_eeb872f1 *mergeFormulas; // @synthesize mergeFormulas=_mergeFormulas;
@property(nonatomic) const vector_793e6c56 *uidRanges; // @synthesize uidRanges=_uidRanges;
@property(nonatomic) int type; // @synthesize type=_type;
- (id)actionByExpandingWithAction:(id)arg1;
- (id)shrinkAction;
- (id)cellRegionForTable:(id)arg1;
- (id)remapUIDsByColumnMap:(const UUIDMap_71b9b5e2 *)arg1 rowMap:(const UUIDMap_71b9b5e2 *)arg2 ownerMap:(const UUIDMap_71b9b5e2 *)arg3;
- (void)enumerateMergeFormulasUsingBlock:(CDUnknownBlockType)arg1;
-     // Error parsing type: v32@0:8^{MergeOperationArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>={__cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> >=Ai}}}{RepeatedPtrField<TSP::UUIDRectArchive>=^{Arena}ii^{Rep}}{RepeatedPtrField<TSCE::FormulaArchive>=^{Arena}ii^{Rep}}{RepeatedField<unsigned int>=ii(Pointer=^{Arena}^{Rep})}i}16@24, name: saveToArchive:archiver:
-     // Error parsing type: @32@0:8r^{MergeOperationArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>={__cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> >=Ai}}}{RepeatedPtrField<TSP::UUIDRectArchive>=^{Arena}ii^{Rep}}{RepeatedPtrField<TSCE::FormulaArchive>=^{Arena}ii^{Rep}}{RepeatedField<unsigned int>=ii(Pointer=^{Arena}^{Rep})}i}16@24, name: initWithArchive:unarchiver:
- (void)addFormulaIndex:(unsigned long long)arg1;
- (void)addFormula:(const struct TSCEFormula *)arg1;
@property(readonly, nonatomic) _Bool hasMultiRowMerge;
@property(readonly, nonatomic) _Bool hasMergeFormulas;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithType:(int)arg1 uidRanges:(const vector_793e6c56 *)arg2;
- (id)initWithType:(int)arg1;
- (id)initWithType:(int)arg1 uidRange:(const UUIDRect_d701734b *)arg2;
- (void)verify;

@end


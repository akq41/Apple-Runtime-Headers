//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSStyles/TSSStyle.h>

#import <TSText/TSSPreset-Protocol.h>

@class NSString;

@interface TSWPCharacterStyle : TSSStyle <TSSPreset>
{
}

+ (id)nullStyleWithContext:(id)arg1;
+ (id)nullStyleName;
+ (id)propertiesAllowingNSNull;
+ (id)nonEmphasisCharacterProperties;
+ (id)emphasisProperties;
+ (id)properties;
- (_Bool)transformsFontSizes;
- (id)archivableRepresentationOfChangeSet:(id)arg1;
- (void)saveToArchiver:(id)arg1;
-     // Error parsing type: v32@0:8^{CharacterStyleArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>={__cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> >=Ai}}}^{StyleArchive}^{CharacterStylePropertiesArchive}I}16@24, name: saveToArchive:archiver:
- (void)loadFromUnarchiver:(id)arg1;
- (int)writingDirection;
-     // Error parsing type: v32@0:8r^{CharacterStyleArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>={__cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> >=Ai}}}^{StyleArchive}^{CharacterStylePropertiesArchive}I}16@24, name: loadFromArchive:unarchiver:
@property(readonly, nonatomic) NSString *presetKind;

@end


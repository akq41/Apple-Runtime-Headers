//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class REClassLoader;

@interface RERelevanceProviderManagerLoader : NSObject
{
    REClassLoader *_loader;
}

+ (id)aggregateRelevanceProviderManagerLoaderWithrelevanceProviderManagerLoaders:(id)arg1;
+ (id)relevanceProviderManagerLoaderWithBlock:(CDUnknownBlockType)arg1;
+ (id)relevanceProviderManagerLoaderWithDirectories:(id)arg1 relevanceProviderManagerKey:(id)arg2;
+ (id)relevanceProviderManagerLoaderWithDirectories:(id)arg1;
+ (id)disabledRelevanceProviderManagerLoader;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)enumerateBundleConfigurations:(CDUnknownBlockType)arg1;
- (void)enumerationDataSourceClassesWithBlock:(CDUnknownBlockType)arg1;
- (void)prewarm;

@end


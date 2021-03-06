//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <BookDataStore/BDSCloudKitSupportSignOutDeleteWithoutInstance-Protocol.h>

@class NSManagedObjectContext, NSManagedObjectModel, NSPersistentStoreCoordinator;

@interface BCCloudDataSource : NSObject <BDSCloudKitSupportSignOutDeleteWithoutInstance>
{
    _Bool _setupPersistentStore;
    NSManagedObjectContext *_managedObjectContext;
    NSManagedObjectModel *_managedObjectModel;
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
}

+ (id)_persistentStoreDirectory;
+ (void)deleteCloudDataWithCompletion:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool setupPersistentStore; // @synthesize setupPersistentStore=_setupPersistentStore;
@property(retain, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator; // @synthesize persistentStoreCoordinator=_persistentStoreCoordinator;
@property(retain, nonatomic) NSManagedObjectModel *managedObjectModel; // @synthesize managedObjectModel=_managedObjectModel;
@property(retain, nonatomic) NSManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=_managedObjectContext;
- (void)_setupPersistentStoreCoordinatorWithPath:(id)arg1;
- (void)_setupManagedObjectContextWithCoordinator:(id)arg1;
- (void)_logIfError:(id)arg1 operation:(id)arg2;
- (id)_persistentStoreOptions;
- (void)_createPersistentStoreDirectory;
- (id)initWithPersistentStoreCoordinator:(id)arg1;
- (id)initWithManagedObjectModel:(id)arg1 persistentStorePath:(id)arg2;

@end


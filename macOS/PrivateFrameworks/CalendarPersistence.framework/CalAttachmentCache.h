//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CalAttachmentCache : NSObject
{
}

+ (void)removeCacheDirectory:(id)arg1;
+ (void)removeAttachment:(id)arg1;
+ (BOOL)_writeAttachment:(id)arg1 inCalendar:(id)arg2 originalURL:(id)arg3 overwriteExisting:(BOOL)arg4;
+ (BOOL)addAttachment:(id)arg1 inCalendar:(id)arg2 overwriteExisting:(BOOL)arg3;
+ (void)setQuarantineProperties:(id)arg1 forCalendarItem:(id)arg2 inCalendar:(id)arg3;
+ (id)pathToAttachmentWithICalURL:(id)arg1;
+ (id)pathToAttachment:(id)arg1;
+ (id)pathToAttachment:(id)arg1 inCalendar:(id)arg2;
+ (id)pathToAttachmentCacheForCalendarItem:(id)arg1;
+ (id)pathToAttachmentCacheForCalendarItem:(id)arg1 inCalendar:(id)arg2;
+ (id)icalURLForAttachment:(id)arg1 inCalendar:(id)arg2 filename:(id)arg3;
+ (id)etagFileNameAtIndex:(unsigned long long)arg1 inEntityWithSharedUID:(id)arg2 sourcePath:(id)arg3;
+ (unsigned long long)etagEntriesForEntityWithSharedUID:(id)arg1 sourcePath:(id)arg2;
+ (void)setEtag:(id)arg1 forAttachment:(id)arg2 inEntityWithSharedUID:(id)arg3 sourcePath:(id)arg4;
+ (id)etagForAttachment:(id)arg1 inEntityWithSharedUID:(id)arg2 sourcePath:(id)arg3;
+ (id)_etagCacheForEntityAttachmentsSharedUID:(id)arg1 sourcePath:(id)arg2;
+ (BOOL)moveCacheDirectoryForEntityWithSharedUID:(id)arg1 fromSourcePath:(id)arg2 toSourcePath:(id)arg3;
+ (BOOL)addAttachment:(id)arg1 toEntityWithSharedUID:(id)arg2 sourcePath:(id)arg3;
+ (BOOL)isAttachmentUnarchivedWithFileName:(id)arg1 forSharedUID:(id)arg2 inSourcePath:(id)arg3;
+ (BOOL)isAttachmentCachedWithFileName:(id)arg1 forSharedUID:(id)arg2 inSourcePath:(id)arg3;
+ (id)cacheDirectoryForAttachmentsInEntityWithSharedUID:(id)arg1 sourcePath:(id)arg2;
+ (BOOL)_validateAttachmentForCaching:(id)arg1;

@end


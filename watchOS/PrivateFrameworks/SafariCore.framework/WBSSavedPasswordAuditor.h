//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WBSAutoFillQuirksManager, WBSSavedPasswordStore;

@interface WBSSavedPasswordAuditor : NSObject
{
    WBSSavedPasswordStore *_savedPasswordStore;
    WBSAutoFillQuirksManager *_autoFillQuirksManager;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) WBSAutoFillQuirksManager *autoFillQuirksManager; // @synthesize autoFillQuirksManager=_autoFillQuirksManager;
@property(readonly, nonatomic) WBSSavedPasswordStore *savedPasswordStore; // @synthesize savedPasswordStore=_savedPasswordStore;
- (id)duplicatePasswordsInPasswords:(id)arg1;
- (id)savedPasswordsWithDuplicatedPassword:(id)arg1;
- (_Bool)savedPasswordIsReused:(id)arg1;
@property(readonly, nonatomic) _Bool passwordStoreHasDuplicatedPasswords;
- (_Bool)_passwordIsReused:(id)arg1 byOtherSavedPassword:(id)arg2;
- (_Bool)_savedPasswordQualifiesForReuseAuditing:(id)arg1;
- (id)initWithSavedPasswordStore:(id)arg1 autoFillQuirksManager:(id)arg2;
- (id)init;

@end


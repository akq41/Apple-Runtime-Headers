//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsAutocomplete/CNAutocompleteSourceInclusionPolicy-Protocol.h>

@class CNUserDefaults, NSString;

@interface _CNAutocompleteUserDefaultsSourceInclusionPolicy : NSObject <CNAutocompleteSourceInclusionPolicy>
{
    CNUserDefaults *_userDefaults;
}

- (void).cxx_destruct;
@property(readonly) CNUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property(readonly) _Bool includeSupplementalResults;
@property(readonly) _Bool includeCalendarServers;
@property(readonly) _Bool includeDirectoryServers;
@property(readonly) _Bool includePredictions;
@property(readonly) _Bool includeLocalExtensions;
@property(readonly) _Bool includeSuggestions;
@property(readonly) _Bool includeRecents;
@property(readonly) _Bool includeContacts;
- (id)initWithUserDefaults:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


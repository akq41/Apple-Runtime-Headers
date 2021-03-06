//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Safari/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface ExtensionWebsiteAccess : NSObject <NSSecureCoding>
{
    BOOL _hasInjectedContent;
    BOOL _specifiedPresenceOfInjectedContent;
    int _accessLevel;
    NSArray *_allowedDomains;
    NSArray *_allowedDomainsForHeaderInjection;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL specifiedPresenceOfInjectedContent; // @synthesize specifiedPresenceOfInjectedContent=_specifiedPresenceOfInjectedContent;
@property(readonly, nonatomic) BOOL hasInjectedContent; // @synthesize hasInjectedContent=_hasInjectedContent;
@property(readonly, nonatomic) NSArray *allowedDomainsForHeaderInjection; // @synthesize allowedDomainsForHeaderInjection=_allowedDomainsForHeaderInjection;
@property(readonly, nonatomic) NSArray *allowedDomains; // @synthesize allowedDomains=_allowedDomains;
@property(readonly, nonatomic) int accessLevel; // @synthesize accessLevel=_accessLevel;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)canAccessURL:(id)arg1;
- (BOOL)requiresAccessToAdditionalWebsitesThan:(id)arg1;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(readonly, nonatomic) Vector_920cd39b allowedDomainPatternsForHeaderInjection;
@property(readonly, nonatomic) Vector_920cd39b allowedDomainPatterns;
- (id)initWithDictionary:(id)arg1;
- (id)initWithAccessLevel:(int)arg1 allowedDomainPatterns:(Vector_920cd39b)arg2 hasInjectedContent:(BOOL)arg3;

@end


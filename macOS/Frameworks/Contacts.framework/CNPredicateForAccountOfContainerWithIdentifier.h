//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Contacts/CNPredicate.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNPredicateForAccountOfContainerWithIdentifier : CNPredicate
{
    NSString *_containerIdentifier;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *containerIdentifier; // @synthesize containerIdentifier=_containerIdentifier;
- (BOOL)evaluateWithObject:(id)arg1 substitutionVariables:(id)arg2;
- (BOOL)evaluateWithObject:(id)arg1;
- (id)initWithContainerIdentifier:(id)arg1;
- (id)init;

@end


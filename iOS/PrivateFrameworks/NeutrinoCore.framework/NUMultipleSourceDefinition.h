//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NeutrinoCore/NUSourceDefinition.h>

@class NSArray;

@interface NUMultipleSourceDefinition : NUSourceDefinition
{
    NSArray *_sourceDefinitions;
}

- (void).cxx_destruct;
@property(readonly) NSArray *sourceDefinitions; // @synthesize sourceDefinitions=_sourceDefinitions;
- (id)description;
- (long long)mediaType;
- (id)initWithSourceDefinitions:(id)arg1;
- (id)init;
- (id)sourceContainerNodeWithIdentifier:(id)arg1 error:(out id *)arg2;

@end


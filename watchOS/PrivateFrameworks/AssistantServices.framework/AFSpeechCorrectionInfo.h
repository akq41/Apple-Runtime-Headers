//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/NSSecureCoding-Protocol.h>

@class NSString;

@interface AFSpeechCorrectionInfo : NSObject <NSSecureCoding>
{
    int _alternativeSelectionCount;
    int _characterModificationCount;
    int _characterInsertionCount;
    int _characterSubstitutionCount;
    int _characterDeletionCount;
    NSString *_correctedText;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *correctedText; // @synthesize correctedText=_correctedText;
@property(nonatomic) int characterDeletionCount; // @synthesize characterDeletionCount=_characterDeletionCount;
@property(nonatomic) int characterSubstitutionCount; // @synthesize characterSubstitutionCount=_characterSubstitutionCount;
@property(nonatomic) int characterInsertionCount; // @synthesize characterInsertionCount=_characterInsertionCount;
@property(nonatomic) int characterModificationCount; // @synthesize characterModificationCount=_characterModificationCount;
@property(nonatomic) int alternativeSelectionCount; // @synthesize alternativeSelectionCount=_alternativeSelectionCount;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TextInputCore/TIUserAction.h>

@class TIAutocorrectionList;

@interface TICandidatesOfferedEvent : TIUserAction
{
    TIAutocorrectionList *_candidates;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) TIAutocorrectionList *candidates; // @synthesize candidates=_candidates;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCandidates:(id)arg1 keyboardState:(id)arg2;

@end


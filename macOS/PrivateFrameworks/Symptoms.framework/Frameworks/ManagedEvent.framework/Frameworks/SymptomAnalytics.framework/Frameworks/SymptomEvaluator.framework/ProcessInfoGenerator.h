//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SymptomEvaluator/AdditionalInfoProtocol-Protocol.h>
#import <SymptomEvaluator/ConfigurableObjectProtocol-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface ProcessInfoGenerator : NSObject <ConfigurableObjectProtocol, AdditionalInfoProtocol>
{
}

+ (id)configureClass:(id)arg1;
+ (id)generateAdditionalInfo:(id)arg1;
+ (id)sharedInstance;
- (id)generateAdditionalInfo:(id)arg1;
- (int)configureInstance:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthRecordServices/NSCopying-Protocol.h>
#import <HealthRecordServices/NSSecureCoding-Protocol.h>

@class HKClinicalRecord, HKFHIRIdentifier, HKMedicalRecord;

@interface HDExtractionResultItem : NSObject <NSCopying, NSSecureCoding>
{
    HKFHIRIdentifier *_resourceIdentifier;
    HKMedicalRecord *_medicalRecord;
    HKClinicalRecord *_clinicalRecord;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) HKClinicalRecord *clinicalRecord; // @synthesize clinicalRecord=_clinicalRecord;
@property(readonly, copy, nonatomic) HKMedicalRecord *medicalRecord; // @synthesize medicalRecord=_medicalRecord;
@property(readonly, copy, nonatomic) HKFHIRIdentifier *resourceIdentifier; // @synthesize resourceIdentifier=_resourceIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithResourceIdentifier:(id)arg1 medicalRecord:(id)arg2 clinicalRecord:(id)arg3;
- (id)init;

@end


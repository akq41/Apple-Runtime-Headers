//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DeviceManagement/CATTaskRequest.h>

@class NSURL;

@interface CRKFetchResourceRequest : CATTaskRequest
{
    NSURL *_resourceURL;
}

+ (_Bool)supportsSecureCoding;
+ (Class)whitelistedClassForResultObject;
- (void).cxx_destruct;
@property(copy, nonatomic) NSURL *resourceURL; // @synthesize resourceURL=_resourceURL;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AnnotationKit/NSObject-Protocol.h>

@class AKSidecarSignatureRequest, AKSignature;

@protocol AKSidecarSignatureRequestDelegate <NSObject>
- (void)requestComplete:(AKSidecarSignatureRequest *)arg1 cancelled:(BOOL)arg2;
- (void)request:(AKSidecarSignatureRequest *)arg1 updatedSignature:(AKSignature *)arg2;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreCDPInternal/NSObject-Protocol.h>

@class CDPDDeviceSecretValidator, CDPDSecureBackupContext, CDPDevice, NSDictionary, NSError;

@protocol CDPDDeviceSecretValidatorDelegate <NSObject>
- (_Bool)secretValidator:(CDPDDeviceSecretValidator *)arg1 shouldContinueValidationAfterError:(NSError *)arg2;
- (void)secretValidator:(CDPDDeviceSecretValidator *)arg1 recoverSecureBackupWithContext:(CDPDSecureBackupContext *)arg2 completion:(void (^)(CDPDRemoteSecretValidationResult *, NSError *))arg3;

@optional
- (void)secretValidator:(CDPDDeviceSecretValidator *)arg1 didFailRecovery:(CDPDevice *)arg2 withError:(NSError *)arg3 completion:(void (^)(_Bool, NSError *))arg4;
- (void)secretValidator:(CDPDDeviceSecretValidator *)arg1 didFailRecoveryWithErrors:(NSDictionary *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (_Bool)secretValidator:(CDPDDeviceSecretValidator *)arg1 shouldAcceptRecoveryError:(id *)arg2;
- (void)secretValidatorWillAttemptRecovery;
@end


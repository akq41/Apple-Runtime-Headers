//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SafariServices/NSObject-Protocol.h>

@class _SFAuthenticationContext;

@protocol _SFAuthenticationContextDelegate <NSObject>

@optional
- (_Bool)contextShouldAllowMultipleBiometricFailures:(_SFAuthenticationContext *)arg1;
- (_Bool)contextShouldAllowPasscodeFallback:(_SFAuthenticationContext *)arg1;
- (_Bool)contextRequiresSessionBasedAuthentication:(_SFAuthenticationContext *)arg1;
- (double)invalidationTimeoutIfApplicationEntersBackgroundDuringAuthenticationForContext:(_SFAuthenticationContext *)arg1;
@end


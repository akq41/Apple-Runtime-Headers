//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet, NSString;

@interface NNMKVIPSender : NSObject
{
    NSString *_name;
    NSString *_displayName;
    NSSet *_emailAddresses;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSSet *emailAddresses; // @synthesize emailAddresses=_emailAddresses;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;

@end


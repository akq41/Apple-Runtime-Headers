//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SCNBoundingBox : NSObject
{
    struct SCNVector3 min;
    struct SCNVector3 max;
}

@property(nonatomic) struct SCNVector3 max; // @synthesize max;
@property(nonatomic) struct SCNVector3 min; // @synthesize min;
- (id)description;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface EFPriorityDesignator : NSObject
{
    unsigned int _priority;
}

+ (void)destroyCurrentDesignator;
+ (id)pushNewDesignator;
+ (id)currentDesignatorStack;
+ (id)currentDesignatorStackIfExists;
+ (id)currentDesignatorIfExists;
+ (id)installNewDesignator;
+ (id)currentDesignator;
@property(nonatomic) unsigned int priority; // @synthesize priority=_priority;

@end


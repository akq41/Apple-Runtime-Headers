//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableData;

@interface _SYInputDataItem : NSObject
{
    struct os_unfair_lock_s _lock;
    unsigned int _length;
    NSMutableData *_data;
    CDUnknownBlockType _callback;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(readonly, nonatomic) NSMutableData *data; // @synthesize data=_data;
@property(nonatomic) unsigned int length; // @synthesize length=_length;
@property(nonatomic) struct os_unfair_lock_s lock; // @synthesize lock=_lock;
@property(readonly, nonatomic) unsigned int lengthRemaining;
- (id)initWithLength:(unsigned int)arg1 callback:(CDUnknownBlockType)arg2;

@end


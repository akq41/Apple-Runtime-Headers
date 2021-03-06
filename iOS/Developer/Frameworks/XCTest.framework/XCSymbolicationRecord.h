//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface XCSymbolicationRecord : NSObject
{
    unsigned long long _lineNumber;
    NSString *_filePath;
    NSString *_symbolName;
    NSString *_symbolOwner;
}

+ (id)symbolicationRecordForAddress:(unsigned long long)arg1;
+ (struct _CSTypeRef)symbolicator;
+ (id)failureRecord;
- (void).cxx_destruct;
@property(readonly, copy) NSString *symbolOwner; // @synthesize symbolOwner=_symbolOwner;
@property(readonly, copy) NSString *symbolName; // @synthesize symbolName=_symbolName;
@property(readonly, copy) NSString *filePath; // @synthesize filePath=_filePath;
@property(readonly) unsigned long long lineNumber; // @synthesize lineNumber=_lineNumber;
- (id)description;
- (id)initWithFilePath:(id)arg1 lineNumber:(unsigned long long)arg2 symbolName:(id)arg3 symbolOwner:(id)arg4;

@end


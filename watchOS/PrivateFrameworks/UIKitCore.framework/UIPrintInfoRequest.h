//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PKPrinter;

__attribute__((visibility("hidden")))
@interface UIPrintInfoRequest : NSObject
{
    PKPrinter *_printer;
    int _requestState;
    CDUnknownBlockType _completionHandler;
}

+ (id)requestInfoForPrinter:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(nonatomic) int requestState; // @synthesize requestState=_requestState;
- (void)requestPrintInfo;

@end


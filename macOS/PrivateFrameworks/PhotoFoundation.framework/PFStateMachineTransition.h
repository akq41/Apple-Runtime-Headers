//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PFStateMachineTransition : NSObject
{
    NSString *_eventName;
    NSString *_destinationName;
    CDUnknownBlockType _action;
}

+ (id)transitionOn:(id)arg1 subflow:(id)arg2 to:(id)arg3;
+ (id)returnTransitionOn:(id)arg1;
+ (id)transitionOn:(id)arg1 to:(id)arg2 action:(CDUnknownBlockType)arg3;
+ (id)transitionOn:(id)arg1 to:(id)arg2;
- (void).cxx_destruct;
@property(readonly) NSString *destinationName; // @synthesize destinationName=_destinationName;
@property(readonly) NSString *eventName; // @synthesize eventName=_eventName;
- (id)description;
- (id)dot:(id)arg1 prefix:(id)arg2 graph:(id)arg3;
- (id)_dotReachableNodes:(id)arg1;
- (id)destination:(id)arg1;
- (void)performAction:(id)arg1;
- (void)setAction:(CDUnknownBlockType)arg1;
- (id)initWithEventName:(id)arg1 to:(id)arg2 action:(CDUnknownBlockType)arg3;

@end


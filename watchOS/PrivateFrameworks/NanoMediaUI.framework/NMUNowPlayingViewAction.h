//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NMUNowPlayingViewAction : NSObject
{
    _Bool _enabled;
    unsigned int _type;
    unsigned int _placement;
    id _context;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id context; // @synthesize context=_context;
@property(readonly, nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(readonly, nonatomic) unsigned int placement; // @synthesize placement=_placement;
@property(readonly, nonatomic) unsigned int type; // @synthesize type=_type;
- (id)image;
- (id)initWithActionType:(unsigned int)arg1 placement:(unsigned int)arg2 enabled:(_Bool)arg3 context:(id)arg4;

@end


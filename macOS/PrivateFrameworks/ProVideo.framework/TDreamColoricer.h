//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProVideo/TDreamProgramWrapper.h>

@interface TDreamColoricer : TDreamProgramWrapper
{
    int firstColorUniform;
    int secondColorUniform;
    struct TDColor3 _secondColor;
    struct TDColor3 _firstColor;
}

@property(nonatomic) struct TDColor3 firstColor; // @synthesize firstColor=_firstColor;
@property(nonatomic) struct TDColor3 secondColor; // @synthesize secondColor=_secondColor;
- (void)setUniforms;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MPSNeuralNetwork/MPSNNFilterNode.h>

@interface MPSNNPadNode : MPSNNFilterNode
{
    struct MPSImageCoordinate _paddingSizeBefore;
    struct MPSImageCoordinate _paddingSizeAfter;
    unsigned long long _edgeMode;
    float _fillValue;
}

+ (id)nodeWithSource:(id)arg1 paddingSizeBefore:(struct MPSImageCoordinate)arg2 paddingSizeAfter:(struct MPSImageCoordinate)arg3 edgeMode:(unsigned long long)arg4;
@property(nonatomic) float fillValue; // @synthesize fillValue=_fillValue;
- (Class)gradientClass;
- (struct FilterGraphNode *)newFilterNode;
- (id)initWithSource:(id)arg1 paddingSizeBefore:(struct MPSImageCoordinate)arg2 paddingSizeAfter:(struct MPSImageCoordinate)arg3 edgeMode:(unsigned long long)arg4;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class IKComposer, IKImageLayer, IKKnob;

__attribute__((visibility("hidden")))
@interface IKKnobLayer : CALayer
{
    IKComposer *_composer;
    id _delegate;
    IKImageLayer *_imageLayer;
    struct CGPoint _eventMouseDownLocation;
    CALayer *_originalLayer;
    IKKnob *_knobs[12];
    int _activeKnob;
    int _hilightKnob;
    int _dragMode;
    struct CGPoint _originalPosition;
    struct CGRect _originalBounds;
    struct CATransform3D _originalTransform;
    double _originalAngle;
    BOOL _altKeyPressedOnMouseDown;
    BOOL _cmdKeyPressedOnMouseDown;
    BOOL _useOriginalLayerToDraw;
    BOOL _quitting;
    BOOL _undoGroupingActive;
}

@property id delegate; // @synthesize delegate=_delegate;
- (void)addCursorRects;
- (void)ikMouseUp:(id)arg1;
- (void)ikMouseDragged:(id)arg1;
- (void)ikMouseDown:(id)arg1;
- (void)moveAnnotationByX:(int)arg1 Y:(int)arg2;
- (id)constrainedPosition:(id)arg1 forLayer:(id)arg2;
- (void)swapKnobsVertical;
- (void)swapKnobsHorizontal;
- (void)swapKnobsVerticalAndHorizontal;
- (double)snapAngle:(double)arg1;
- (void)startTracking:(id)arg1;
- (void)setActiveKnob:(int)arg1;
- (void)setAnchorPoint2:(struct CGPoint)arg1;
- (void)setBounds2:(struct CGRect)arg1;
- (void)setPosition2:(struct CGPoint)arg1;
- (void)setTransform2:(struct CATransform3D)arg1;
- (void)finalize;
- (void)dealloc;
- (void)cleanup;
- (void)unbindActions;
- (id)composer;
- (id)initForLayer:(id)arg1 imageLayer:(id)arg2 flags:(unsigned int)arg3;
- (void)setUndoGroupingActive:(BOOL)arg1;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)adjustPosition;
- (void)positionKnobs;
- (void)setFrame:(struct CGRect)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setPosition:(struct CGPoint)arg1;
- (void)setAnchorPoint:(struct CGPoint)arg1;
- (void)loadKnobImage;
- (BOOL)containsPoint:(struct CGPoint)arg1;
- (void)setUseOriginalLayerToDraw:(BOOL)arg1;

@end


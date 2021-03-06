//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InputMethodKit/IMKCandidateBasedInputController.h>

#import <CoreChineseEngine/CIMMenuControllerDataSource-Protocol.h>

@class CIMBaseEngine, IMKKeyboardInputController, NSString;

@interface CIMInputController : IMKCandidateBasedInputController <CIMMenuControllerDataSource>
{
    IMKKeyboardInputController *_keyboardInputController;
    Class _engineClass;
    CIMBaseEngine *_inputModeEngine;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CIMBaseEngine *inputModeEngine; // @synthesize inputModeEngine=_inputModeEngine;
@property(retain, nonatomic) Class engineClass; // @synthesize engineClass=_engineClass;
@property(retain, nonatomic) IMKKeyboardInputController *keyboardInputController; // @synthesize keyboardInputController=_keyboardInputController;
- (void)radarButtonPressed;
- (void)setInputMode:(id)arg1 client:(id)arg2;
- (void)menuItemAction:(id)arg1;
@property(readonly) unsigned long long scriptType;
- (id)inlineText;
- (void)didSelectSortingMode:(id)arg1 candidateController:(id)arg2;
- (void)candidateSelectionChanged:(id)arg1 candidateController:(id)arg2;
- (void)candidateSelected:(id)arg1 candidateController:(id)arg2;
@property(readonly, nonatomic) BOOL windowIsHorizontal;
- (unsigned long long)optionsForMenuController:(id)arg1;
- (id)selectedStringForMenuController:(id)arg1;
- (BOOL)selectionShouldBeReflectedInTouchBar;
- (void)didHideCandidates:(id)arg1;
- (id)makeScrubbingCandidateController;
- (void)updateCandidateController:(id)arg1;
- (id)makeCandidateController;
- (BOOL)mouseMovedOnCharacterIndex:(unsigned long long)arg1 coordinate:(struct CGPoint)arg2 withModifier:(unsigned long long)arg3 client:(id)arg4;
- (BOOL)mouseUpOnCharacterIndex:(unsigned long long)arg1 coordinate:(struct CGPoint)arg2 withModifier:(unsigned long long)arg3 client:(id)arg4;
- (BOOL)mouseDownOnCharacterIndex:(unsigned long long)arg1 coordinate:(struct CGPoint)arg2 withModifier:(unsigned long long)arg3 continueTracking:(char *)arg4 client:(id)arg5;
- (unsigned long long)recognizedEvents:(id)arg1;
- (void)setValue:(id)arg1 forTag:(long long)arg2 client:(id)arg3;
- (void)deactivateServer:(id)arg1;
- (void)activateServer:(id)arg1;
- (id)candidates:(id)arg1;
- (void)commitComposition:(id)arg1;
- (BOOL)handleEvent:(id)arg1 client:(id)arg2;
- (BOOL)inputText:(id)arg1 client:(id)arg2;
- (BOOL)didCommandBySelector:(SEL)arg1 client:(id)arg2;
- (BOOL)isUsingSortingBar;
- (id)informationView;
- (BOOL)automaticallyRestrictLayoutToPrimaryCandidateControllerLayout;
- (void)inputControllerWillClose;
- (id)menu;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


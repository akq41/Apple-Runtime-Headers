//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OnBoardingKit/OBWelcomeController.h>

#import <AuthKitUI/AKBasicLoginAnimateProtocol-Protocol.h>
#import <AuthKitUI/AKBasicLoginPasswordFieldProtocol-Protocol.h>
#import <AuthKitUI/UITableViewDataSource-Protocol.h>
#import <AuthKitUI/UITableViewDelegate-Protocol.h>
#import <AuthKitUI/UITextFieldDelegate-Protocol.h>

@class AKAppleIDAuthenticationInAppContext, AKBasicLoginActions, AKBasicLoginOptionsViewController, NSLayoutConstraint, NSString, UITableView, UITableViewCell, UIView;
@protocol AKBasicLoginControllerDelegate;

@interface AKBasicLoginViewController : OBWelcomeController <UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate, AKBasicLoginPasswordFieldProtocol, AKBasicLoginAnimateProtocol>
{
    AKBasicLoginActions *_loginActions;
    id <AKBasicLoginControllerDelegate> _delegate;
    AKAppleIDAuthenticationInAppContext *_context;
    NSLayoutConstraint *_heightAnchor;
    UITableView *_tableView;
    UITableViewCell *_usernameCell;
    UITableViewCell *_passwordCell;
    UIView *_loginOptions;
    AKBasicLoginOptionsViewController *_loginOptionsViewController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AKBasicLoginOptionsViewController *loginOptionsViewController; // @synthesize loginOptionsViewController=_loginOptionsViewController;
@property(retain, nonatomic) UIView *loginOptions; // @synthesize loginOptions=_loginOptions;
@property(retain, nonatomic) UITableViewCell *passwordCell; // @synthesize passwordCell=_passwordCell;
@property(retain, nonatomic) UITableViewCell *usernameCell; // @synthesize usernameCell=_usernameCell;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSLayoutConstraint *heightAnchor; // @synthesize heightAnchor=_heightAnchor;
@property(nonatomic) __weak AKAppleIDAuthenticationInAppContext *context; // @synthesize context=_context;
@property(nonatomic) __weak id <AKBasicLoginControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) AKBasicLoginActions *loginActions; // @synthesize loginActions=_loginActions;
- (void)_setContentInset:(double)arg1;
- (void)_keyboardDidHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (void)_updatePlaceholderIfNeeded;
- (id)_signInBarButtonItem;
- (id)_cancelBarButtonItem;
- (id)_loginOptions;
- (id)_tableView;
- (id)_passwordCell;
- (id)_usernameCell;
- (_Bool)_shouldShowUserName;
- (id)_title;
- (id)_interpolatedReasonString;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)_signInPressed:(id)arg1;
- (void)_cancelPressed:(id)arg1;
- (void)clearPasswordField;
- (void)stopAnimating;
- (void)startAnimating;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (_Bool)isPresentedModally;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)loadView;
- (id)initWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PepperUICore/PUICTableViewController.h>

#import <NanoContactsUI/CNContactDataSourceDelegate-Protocol.h>

@class CNContact, CNContactFormatter, NSMutableDictionary, NSString, PUICContentUnavailableView;
@protocol CNContactDataSource, NCABContactListViewControllerDelegate;

@interface NCABContactListViewController : PUICTableViewController <CNContactDataSourceDelegate>
{
    CNContactFormatter *_defaultContactFormatter;
    NSMutableDictionary *_attributedNameCache;
    _Bool _useCustomNoContactsDisplay;
    _Bool _shouldRefreshMeContact;
    id <NCABContactListViewControllerDelegate> _delegate;
    id <CNContactDataSource> _dataSource;
    CNContactFormatter *_contactFormatter;
    PUICContentUnavailableView *_noContactsView;
    CNContact *_meContact;
}

+ (id)_descriptorForRequiredKeysWithDescription:(id)arg1;
+ (id)_newDataSource;
+ (id)descriptorForRequiredKeys;
- (void).cxx_destruct;
@property(nonatomic) _Bool shouldRefreshMeContact; // @synthesize shouldRefreshMeContact=_shouldRefreshMeContact;
@property(retain, nonatomic) CNContact *meContact; // @synthesize meContact=_meContact;
@property(retain, nonatomic) PUICContentUnavailableView *noContactsView; // @synthesize noContactsView=_noContactsView;
@property(readonly, nonatomic) CNContactFormatter *contactFormatter; // @synthesize contactFormatter=_contactFormatter;
@property(readonly, nonatomic) id <CNContactDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <NCABContactListViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool useCustomNoContactsDisplay; // @synthesize useCustomNoContactsDisplay=_useCustomNoContactsDisplay;
- (_Bool)_isContactWithIdentifierMeContactOrLinkedToMeContact:(id)arg1;
- (id)_contactAtIndexPath:(id)arg1;
- (id)_sections;
- (void)_updateFrameAndDisplayNoContactsViewIfNeeded;
- (void)_contentSizeChanged:(id)arg1;
- (void)_clearNameCacheAndReloadData;
- (void)loadDataForTestName:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (int)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(int)arg3;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)contactDataSourceDidChange:(id)arg1;
- (void)setContactFormatter:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStyle:(int)arg1;
- (id)initWithDataSource:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


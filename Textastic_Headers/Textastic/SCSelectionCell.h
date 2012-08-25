/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SCTableViewControllerDelegate.h"
#import "SCLabelCell.h"

@class NSMutableSet, NSString, NSArray, NSNumber;

__attribute__((visibility("hidden")))
@interface SCSelectionCell : SCLabelCell <SCTableViewControllerDelegate> {
	BOOL boundToNSNumber;
	BOOL boundToNSString;
	NSArray* items;
	BOOL allowMultipleSelection;
	BOOL allowNoSelection;
	BOOL autoDismissDetailView;
	BOOL hideDetailViewNavigationBar;
	BOOL displaySelection;
	NSString* delimeter;
	NSMutableSet* selectedItemsIndexes;
}
@property(copy, nonatomic) NSString* delimeter;
@property(assign, nonatomic) BOOL displaySelection;
@property(assign, nonatomic) BOOL hideDetailViewNavigationBar;
@property(assign, nonatomic) BOOL autoDismissDetailView;
@property(assign, nonatomic) BOOL allowNoSelection;
@property(assign, nonatomic) BOOL allowMultipleSelection;
@property(readonly, assign, nonatomic) NSMutableSet* selectedItemsIndexes;
@property(copy, nonatomic) NSNumber* selectedItemIndex;
@property(retain, nonatomic) NSArray* items;
+(id)cellWithText:(id)text withBoundKey:(id)boundKey withSelectedIndexesValue:(id)selectedIndexesValue withItems:(id)items allowMultipleSelection:(BOOL)selection;
+(id)cellWithText:(id)text withBoundKey:(id)boundKey withSelectedIndexValue:(id)selectedIndexValue withItems:(id)items;
+(id)cellWithText:(id)text withBoundObject:(id)boundObject withSelectionStringPropertyName:(id)selectionStringPropertyName withItems:(id)items;
+(id)cellWithText:(id)text withBoundObject:(id)boundObject withSelectedIndexesPropertyName:(id)selectedIndexesPropertyName withItems:(id)items allowMultipleSelection:(BOOL)selection;
+(id)cellWithText:(id)text withBoundObject:(id)boundObject withSelectedIndexPropertyName:(id)selectedIndexPropertyName withItems:(id)items;
-(void)tableViewControllerDidDisappear:(id)tableViewController cancelButtonTapped:(BOOL)tapped doneButtonTapped:(BOOL)tapped3;
-(void)tableViewControllerWillDisappear:(id)tableViewController cancelButtonTapped:(BOOL)tapped doneButtonTapped:(BOOL)tapped3;
-(void)tableViewControllerWillAppear:(id)tableViewController;
-(BOOL)getValueIsValid;
-(void)setAttributesTo:(id)to;
-(void)commitChanges;
-(void)didSelectCell;
-(void)commitDetailModelChanges:(id)changes;
-(void)addSelectionSectionToModel:(id)model;
-(id)createSelectionSection;
-(void)reloadBoundValue;
-(void)willDisplay;
-(id)getTitleForItemAtIndex:(unsigned)index;
-(void)cellValueChanged;
-(id)buildStringFromSelectedItemsIndexes;
-(void)buildSelectedItemsIndexesFromString:(id)string;
-(void)buildSelectedItemsIndexesFromBoundValue;
-(void)dealloc;
-(id)initWithText:(id)text withBoundKey:(id)boundKey withSelectedIndexesValue:(id)selectedIndexesValue withItems:(id)items allowMultipleSelection:(BOOL)selection;
-(id)initWithText:(id)text withBoundKey:(id)boundKey withSelectedIndexValue:(id)selectedIndexValue withItems:(id)items;
-(id)initWithText:(id)text withBoundObject:(id)boundObject withSelectionStringPropertyName:(id)selectionStringPropertyName withItems:(id)items;
-(id)initWithText:(id)text withBoundObject:(id)boundObject withSelectedIndexesPropertyName:(id)selectedIndexesPropertyName withItems:(id)items allowMultipleSelection:(BOOL)selection;
-(id)initWithText:(id)text withBoundObject:(id)boundObject withSelectedIndexPropertyName:(id)selectedIndexPropertyName withItems:(id)items;
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier;
@end


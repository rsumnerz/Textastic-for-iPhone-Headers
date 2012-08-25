/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SCTableViewSection.h"
#import "SCTableViewControllerDelegate.h"

@class NSString, NSMutableArray, SCTableViewModel, UIBarButtonItem, NSIndexPath;

__attribute__((visibility("hidden")))
@interface SCArrayOfItemsSection : SCTableViewSection <SCTableViewControllerDelegate> {
	SCTableViewModel* tempDetailModel;
	NSMutableArray* items;
	int itemsAccessoryType;
	BOOL allowAddingItems;
	BOOL allowDeletingItems;
	BOOL allowMovingItems;
	BOOL allowEditDetailView;
	BOOL allowRowSelection;
	BOOL detailViewModal;
	int detailViewModalPresentationStyle;
	int detailTableViewStyle;
	BOOL detailViewHidesBottomBar;
	NSString* cellIdentifier;
	NSIndexPath* selectedCellIndexPath;
	UIBarButtonItem* addButtonItem;
	NSObject* tempItem;
}
@property(readonly, assign, nonatomic) NSString* cellIdentifier;
@property(retain, nonatomic) UIBarButtonItem* addButtonItem;
@property(assign, nonatomic) BOOL detailViewHidesBottomBar;
@property(assign, nonatomic) int detailTableViewStyle;
@property(assign, nonatomic) int detailViewModalPresentationStyle;
@property(assign, nonatomic) BOOL detailViewModal;
@property(assign, nonatomic) BOOL allowRowSelection;
@property(assign, nonatomic) BOOL allowEditDetailView;
@property(assign, nonatomic) BOOL allowMovingItems;
@property(assign, nonatomic) BOOL allowDeletingItems;
@property(assign, nonatomic) BOOL allowAddingItems;
@property(assign, nonatomic) int itemsAccessoryType;
@property(retain, nonatomic) NSMutableArray* items;
+(id)sectionWithHeaderTitle:(id)headerTitle withItems:(id)items;
-(void)tableViewControllerDidDisappear:(id)tableViewController cancelButtonTapped:(BOOL)tapped doneButtonTapped:(BOOL)tapped3;
-(void)tableViewControllerWillDisappear:(id)tableViewController cancelButtonTapped:(BOOL)tapped doneButtonTapped:(BOOL)tapped3;
-(void)addNewItem:(id)item;
-(void)buildDetailTableModel:(id)model forItem:(id)item;
-(id)createNewItem;
-(void)moveCellAtIndexPath:(id)indexPath toIndexPath:(id)indexPath2;
-(void)commitEditingStyle:(int)style forCellAtIndexPath:(id)indexPath;
-(void)didTapAddButtonItem;
-(void)didSelectCellAtIndexPath:(id)indexPath;
-(id)getCustomDetailModelForRowAtIndexPath:(id)indexPath;
-(void)commitDetailModelChanges:(id)changes;
-(void)tempDetailModelModified;
-(id)detailTextForCellAtIndex:(unsigned)index;
-(id)textForCellAtIndex:(unsigned)index;
-(void)setPropertiesForCell:(id)cell withIndex:(unsigned)index;
-(id)createCellAtIndex:(unsigned)index;
-(unsigned)indexForCell:(id)cell;
-(id)cellAtIndex:(unsigned)index;
-(unsigned)cellCount;
-(void)dealloc;
-(id)initWithHeaderTitle:(id)headerTitle withItems:(id)items;
-(id)init;
@end


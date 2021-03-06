/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SCArrayOfItemsModel.h"
#import "Textastic-Structs.h"

@class NSMutableSet, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface SCArrayOfObjectsModel : SCArrayOfItemsModel {
	NSMutableDictionary* itemsClassDefinitions;
	NSMutableSet* itemsSet;
	BOOL sortItemsSetAscending;
}
@property(assign, nonatomic) BOOL sortItemsSetAscending;
@property(retain, nonatomic) NSMutableSet* itemsSet;
@property(readonly, assign, nonatomic) NSMutableDictionary* itemsClassDefinitions;
+(id)tableViewModelWithTableView:(id)tableView withViewController:(id)viewController withItemsSet:(id)itemsSet withClassDefinition:(id)classDefinition;
+(id)tableViewModelWithTableView:(id)tableView withViewController:(id)viewController withItems:(id)items withClassDefinition:(id)classDefinition;
-(id)firstClassDefinition;
-(void)generateItemsArrayFromItemsSet;
-(void)setPropertiesForSection:(id)section;
-(id)createSectionWithHeaderTitle:(id)headerTitle;
-(void)dealloc;
-(id)initWithTableView:(id)tableView withViewController:(id)viewController withItemsSet:(id)itemsSet withClassDefinition:(id)classDefinition;
-(id)initWithTableView:(id)tableView withViewController:(id)viewController withItems:(id)items withClassDefinition:(id)classDefinition;
-(id)init;
@end


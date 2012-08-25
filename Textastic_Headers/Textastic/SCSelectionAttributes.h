/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SCPropertyAttributes.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface SCSelectionAttributes : SCPropertyAttributes {
	NSArray* items;
	BOOL allowMultipleSelection;
	BOOL allowNoSelection;
	BOOL autoDismissDetailView;
	BOOL hideDetailViewNavigationBar;
}
@property(assign, nonatomic) BOOL hideDetailViewNavigationBar;
@property(assign, nonatomic) BOOL autoDismissDetailView;
@property(assign, nonatomic) BOOL allowNoSelection;
@property(assign, nonatomic) BOOL allowMultipleSelection;
@property(retain, nonatomic) NSArray* items;
+(id)attributesWithItems:(id)items allowMultipleSelection:(BOOL)selection allowNoSelection:(BOOL)selection3 autoDismissDetailView:(BOOL)view hideDetailViewNavigationBar:(BOOL)bar;
+(id)attributesWithItems:(id)items allowMultipleSelection:(BOOL)selection allowNoSelection:(BOOL)selection3;
-(void)dealloc;
-(id)initWithItems:(id)items allowMultipleSelection:(BOOL)selection allowNoSelection:(BOOL)selection3 autoDismissDetailView:(BOOL)view hideDetailViewNavigationBar:(BOOL)bar;
-(id)initWithItems:(id)items allowMultipleSelection:(BOOL)selection allowNoSelection:(BOOL)selection3;
-(id)init;
@end

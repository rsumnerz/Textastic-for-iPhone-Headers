/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SCTableViewControllerDelegate.h"
#import "SCTableViewCellDelegate.h"
#import "SCTableViewModelDelegate.h"
#import "SCTableViewController.h"

@class SCTableViewSection, ABImagePickerCell, NSString, NewFileInformation, NSArray, SCTableViewCell;
@protocol AddFileViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface AddFileViewController : SCTableViewController <SCTableViewControllerDelegate, SCTableViewCellDelegate, SCTableViewModelDelegate> {
	NewFileInformation* newFileInformation;
	NSString* basePath;
	id<AddFileViewControllerDelegate> addFileViewControllerDelegate;
	SCTableViewCell* encodingCell;
	SCTableViewCell* lineEndingCell;
	SCTableViewCell* templateCell;
	SCTableViewSection* imagePickerSection;
	ABImagePickerCell* imagePickerCell;
	BOOL onlyAllowDirectory;
	NSArray* encodingDescriptions;
	NSArray* encodingValues;
}
@property(copy, nonatomic) NSArray* encodingValues;
@property(copy, nonatomic) NSArray* encodingDescriptions;
@property(assign, nonatomic) id<AddFileViewControllerDelegate> addFileViewControllerDelegate;
@property(retain, nonatomic) SCTableViewCell* templateCell;
@property(retain, nonatomic) SCTableViewCell* lineEndingCell;
@property(retain, nonatomic) SCTableViewCell* encodingCell;
@property(copy, nonatomic) NSString* basePath;
-(void)dealloc;
-(void)viewDidAppear:(BOOL)view;
-(void)viewDidUnload;
-(void)didReceiveMemoryWarning;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(id)initWithStyle:(int)style withNavigationBarType:(int)navigationBarType onlyAllowDirectory:(BOOL)directory;
-(void)tableViewModel:(id)model valueChangedForSectionAtIndex:(unsigned)index;
-(void)tableViewModel:(id)model willDisplayCell:(id)cell forRowAtIndexPath:(id)indexPath;
-(void)setSelectedTemplate:(id)aTemplate;
-(void)tableViewModel:(id)model didSelectRowAtIndexPath:(id)indexPath;
-(BOOL)valueIsValidForCell:(id)cell;
-(void)doneButtonAction;
-(void)generateEncodingArrays;
@end


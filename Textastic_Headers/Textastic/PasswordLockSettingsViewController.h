/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SCTableViewModelDelegate.h"
#import "SCTableViewController.h"

@class SCTextFieldCell;

__attribute__((visibility("hidden")))
@interface PasswordLockSettingsViewController : SCTableViewController <SCTableViewModelDelegate> {
	SCTextFieldCell* passwordCell;
	SCTextFieldCell* passwordConfirmCell;
}
+(BOOL)passwordLockImmediatelyEnabled;
+(BOOL)passwordRequiredNow;
+(id)passwordLockEnabledString;
+(BOOL)passwordLockEnabled;
+(id)passwordLockPassword;
+(int)requirePasswordSetting;
+(void)saveRequirePasswordSetting:(int)setting;
+(id)lastCloseDate;
+(void)saveCloseDate;
-(void)dealloc;
-(void)viewDidUnload;
-(void)didReceiveMemoryWarning;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(id)initWithStyle:(int)style withNavigationBarType:(int)navigationBarType;
-(void)tableViewModel:(id)model valueChangedForRowAtIndexPath:(id)indexPath;
-(void)doneButtonAction;
@end

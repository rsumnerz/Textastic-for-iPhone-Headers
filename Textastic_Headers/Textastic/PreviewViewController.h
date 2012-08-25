/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UIWebViewDelegate.h"
#import "Textastic-Structs.h"
#import <UIKit/UIViewController.h>
#import "UITextFieldDelegate.h"

@class UILabel, UITextField, ABBlockActionSheet, UISegmentedControl, UIView, FileInformation, UIWebView, NSString, UIToolbar, UIBarButtonItem;

__attribute__((visibility("hidden")))
@interface PreviewViewController : UIViewController <UIWebViewDelegate, UITextFieldDelegate> {
	UIView* _topView;
	UIToolbar* _toolbarTop;
	UIWebView* _webView;
	FileInformation* _file;
	UIBarButtonItem* _backButton;
	UIBarButtonItem* _forwardButton;
	UIBarButtonItem* _doneButton;
	UIBarButtonItem* _actionButton;
	UITextField* _addressField;
	UIBarButtonItem* _addressItem;
	UISegmentedControl* _localRemoteSegmentedControl;
	UIBarButtonItem* _localRemoteItem;
	UILabel* _titleLabel;
	UIBarButtonItem* _titleItem;
	NSString* _previewFileName;
	ABBlockActionSheet* _actionSheet;
}
-(void)loadPreviewWithRemoteURL:(id)remoteURL;
-(void)loadPreviewOfLocalFile:(id)localFile;
-(BOOL)fileIsMarkdown:(id)markdown;
-(void)removePreviewFile;
-(BOOL)textFieldShouldReturn:(id)textField;
-(void)textFieldDidEndEditing:(id)textField;
-(void)textFieldDidBeginEditing:(id)textField;
-(BOOL)webView:(id)view shouldStartLoadWithRequest:(id)request navigationType:(int)type;
-(void)webView:(id)view didFailLoadWithError:(id)error;
-(void)webViewDidFinishLoad:(id)webView;
-(void)webViewDidStartLoad:(id)webView;
-(void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(void)viewDidUnload;
-(void)viewDidDisappear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidLoad;
-(void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void*)context;
-(void)localRemoteAction:(id)action;
-(void)loadLocalOrRemotePreview;
-(void)updatePageTitle;
-(void)updateAddress:(id)address;
-(void)actionAction:(id)action;
-(void)doneAction:(id)action;
-(void)forwardAction:(id)action;
-(void)backAction:(id)action;
-(void)dismissPopopvers;
-(void)updateButtons;
-(void)dealloc;
-(id)initWithFileInformation:(id)fileInformation;
@end


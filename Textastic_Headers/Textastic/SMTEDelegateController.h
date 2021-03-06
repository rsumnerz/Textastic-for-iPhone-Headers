/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>
#import "UIWebViewDelegate.h"
#import "Textastic-Structs.h"
#import "UIScrollViewDelegate.h"
#import "UITextViewDelegate.h"
#import "UISearchBarDelegate.h"
#import "UITextFieldDelegate.h"

@class NSMutableString, NSMutableArray, NSMutableDictionary;

@interface SMTEDelegateController : NSObject <UITextViewDelegate, UITextFieldDelegate, UIScrollViewDelegate, UIWebViewDelegate, UISearchBarDelegate> {
	BOOL loaded;
	NSMutableString* keyLog;
	NSRange lastRange;
	NSMutableArray* linkChain;
	unsigned long snippetCount;
	unsigned long charactersSaved;
	NSMutableDictionary* lastUsed;
	NSMutableDictionary* useCount;
	id nextDelegate;
	BOOL provideUndoSupport;
}
@property(retain, nonatomic) NSMutableString* keyLog;
@property(assign, nonatomic) NSRange lastRange;
@property(retain, nonatomic) NSMutableArray* linkChain;
@property(retain, nonatomic) NSMutableDictionary* lastUsed;
@property(retain, nonatomic) NSMutableDictionary* useCount;
@property(assign, nonatomic) id nextDelegate;
@property(assign, nonatomic) BOOL provideUndoSupport;
+(BOOL)isTextExpanderTouchInstalled;
+(BOOL)snippetsAreShared;
-(id)init;
-(id)valueForSetting:(id)setting;
-(BOOL)boolForSetting:(id)setting;
-(void)updateStats:(id)stats;
-(void)replaceOldDateFormat:(id)format withNew:(id)aNew inString:(id)string forDate:(id)date;
-(void)teReplace:(id)replace dateFormattersWithDate:(id)date locale:(id)locale caseConversionMode:(int)mode;
-(void)formatPlainText:(id*)text formatFormattedText:(id*)text2 getCursorPosition:(int*)position ofSnippet:(id)snippet abbreviation:(id)abbreviation abbreviationMode:(int)mode;
-(id)pasteSnippet:(id)snippet forAbbreviation:(id)abbreviation abbreviationMode:(int)mode replacementMode:(int)mode4 currentEvent:(void*)event cursorPosition:(int*)position;
-(id)handleAbbreviation:(id)abbreviation snippet:(id*)snippet cursorPosition:(int*)position;
-(void)clearKeyLog;
-(void)resetKeyLog;
-(void)initController;
-(BOOL)textViewShouldBeginEditing:(id)textView;
-(BOOL)textViewShouldEndEditing:(id)textView;
-(void)textViewDidBeginEditing:(id)textView;
-(void)textViewDidEndEditing:(id)textView;
-(void)setTextView:(id)view textViewText:(id)text oldRange:(NSRange)range oldText:(id)text4 newRange:(NSRange)range5 newText:(id)text6;
-(BOOL)textView:(id)view shouldChangeTextInRange:(NSRange)range replacementText:(id)text;
-(void)textViewDidChange:(id)textView;
-(void)textViewDidChangeSelection:(id)textView;
-(id)settings;
-(BOOL)textFieldShouldBeginEditing:(id)textField;
-(void)textFieldDidBeginEditing:(id)textField;
-(BOOL)textFieldShouldEndEditing:(id)textField;
-(void)textFieldDidEndEditing:(id)textField;
-(void)setTextField:(id)field textFieldText:(id)text oldRange:(NSRange)range oldText:(id)text4 newRange:(NSRange)range5 newText:(id)text6;
-(BOOL)textField:(id)field shouldChangeCharactersInRange:(NSRange)range replacementString:(id)string;
-(BOOL)textFieldShouldClear:(id)textField;
-(BOOL)textFieldShouldReturn:(id)textField;
-(void)scrollViewDidScroll:(id)scrollView;
-(void)scrollViewWillBeginDragging:(id)scrollView;
-(void)scrollViewDidEndDragging:(id)scrollView willDecelerate:(BOOL)decelerate;
-(void)scrollViewWillBeginDecelerating:(id)scrollView;
-(void)scrollViewDidEndDecelerating:(id)scrollView;
-(void)scrollViewDidEndScrollingAnimation:(id)scrollView;
-(id)viewForZoomingInScrollView:(id)scrollView;
-(void)scrollViewDidEndZooming:(id)scrollView withView:(id)view atScale:(float)scale;
-(BOOL)scrollViewShouldScrollToTop:(id)scrollView;
-(void)scrollViewDidScrollToTop:(id)scrollView;
-(void)setSearchBar:(id)bar searchBarText:(id)text oldRange:(NSRange)range oldText:(id)text4 newRange:(NSRange)range5 newText:(id)text6;
-(BOOL)searchBarShouldBeginEditing:(id)searchBar;
-(void)searchBarTextDidBeginEditing:(id)searchBarText;
-(BOOL)searchBarShouldEndEditing:(id)searchBar;
-(void)searchBarTextDidEndEditing:(id)searchBarText;
-(void)searchBar:(id)bar textDidChange:(id)text;
-(BOOL)searchBar:(id)bar shouldChangeTextInRange:(NSRange)range replacementText:(id)text;
-(void)searchBarSearchButtonClicked:(id)clicked;
-(void)searchBarBookmarkButtonClicked:(id)clicked;
-(void)searchBarCancelButtonClicked:(id)clicked;
-(void)searchBarResultsListButtonClicked:(id)clicked;
-(void)searchBar:(id)bar selectedScopeButtonIndexDidChange:(int)selectedScopeButtonIndex;
-(BOOL)respondsToSelector:(SEL)selector;
-(void)forwardInvocation:(id)invocation;
-(id)methodSignatureForSelector:(SEL)selector;
-(void)webViewDidFinishLoad:(id)webView;
-(BOOL)webView:(id)view shouldStartLoadWithRequest:(id)request navigationType:(unsigned)type;
-(void)willEnterForeground;
@end


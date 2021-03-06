/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Textastic-Structs.h"
#import <Foundation/NSObject.h>

@class NSString, NSMutableArray, NSMutableDictionary, ABCodeEditorContentView, ABCodeEditorSnippetTabStop, NSMutableString;

@interface ABCodeEditorSnippetManager : NSObject {
	NSString* _snippetString;
	unsigned _snippetStringLength;
	NSMutableString* _snippetResultString;
	NSString* _indentString;
	NSString* _newLineIndentString;
	unsigned _insertLocation;
	unsigned _parseLocation;
	unsigned _endLocation;
	unsigned _parentInterval;
	unsigned _currentTabIndex;
	unsigned _maxTabIndex;
	ABCodeEditorSnippetTabStop* _parentTabStop;
	NSMutableArray* _tabIntervals;
	NSMutableDictionary* _tabStops;
	NSMutableArray* _transformations;
	NSMutableArray* _variableTransformations;
	NSMutableDictionary* _variables;
	NSMutableArray* _tabStopViews;
	ABCodeEditorContentView* _codeEditorContentView;
	BOOL _active;
}
@property(readonly, assign, nonatomic) NSMutableArray* tabStopViews;
@property(readonly, assign, nonatomic) NSMutableDictionary* variables;
@property(readonly, assign, nonatomic, getter=isActive) BOOL active;
@property(assign, nonatomic) ABCodeEditorContentView* codeEditorContentView;
+(id)uuidString;
-(void)_replaceRange:(NSRange)range withText:(id)text;
-(void)updateIntervalsFromIndex:(unsigned)index diff:(int)diff;
-(void)changedTabStop:(id)stop diff:(unsigned)diff initialUpdate:(BOOL)update;
-(void)removeChildrenOfTabStop:(id)tabStop;
-(void)updateVariableTransformations;
-(id)stringWithTransformation:(id)transformation inEditorRange:(NSRange)editorRange;
-(BOOL)parseTransformation:(id)transformation;
-(BOOL)parseVariable;
-(BOOL)parseTabStop;
-(BOOL)parseReplacement;
-(BOOL)parseWrapped:(BOOL)wrapped;
-(void)gotoEndAndCancelSnippet;
-(void)gotoPreviousTab;
-(void)gotoNextTab;
-(void)_refreshTabStopViews;
-(void)layoutTabViewAtIndex:(unsigned)index withEditorRange:(NSRange)editorRange blink:(BOOL)blink;
-(void)cancelSnippet;
-(void)insertSnippet:(id)snippet;
-(id)variableValueWithVariableName:(id)variableName;
-(void)dealloc;
-(id)initWithCodeEditorContentView:(id)codeEditorContentView;
@end


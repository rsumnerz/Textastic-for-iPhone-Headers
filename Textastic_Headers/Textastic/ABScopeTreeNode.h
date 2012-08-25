/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSArray, NSDictionary, ABSyntaxSymbolListPreference;

@interface ABScopeTreeNode : NSObject {
	NSMutableDictionary* _subNodes;
	NSDictionary* _attributedStringAttributes;
	BOOL _symbolListPreferenceDetermined;
	BOOL _codeCompletionContextsDetermined;
	NSArray* _scope;
	ABScopeTreeNode* _parent;
	ABSyntaxSymbolListPreference* _symbolListPreference;
	NSArray* _codeCompletionContexts;
}
@property(retain, nonatomic) NSArray* codeCompletionContexts;
@property(retain, nonatomic) ABSyntaxSymbolListPreference* symbolListPreference;
@property(retain, nonatomic) NSArray* scope;
@property(readonly, assign, nonatomic) ABScopeTreeNode* parent;
-(id)scopeString;
-(BOOL)hasParent:(id)parent;
-(id)attributedStringAttributesWithTheme:(id)theme;
-(void)clearAttributedStringAttributes;
-(id)subnodeWithScopePart:(id)scopePart;
-(void)dealloc;
-(id)initWithParent:(id)parent scopePart:(id)part;
@end


/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SCClassDefinition.h"


__attribute__((visibility("hidden")))
@interface SCDictionaryDefinition : SCClassDefinition {
}
+(id)definitionWithDictionaryKeyNames:(id)dictionaryKeyNames withKeyTitles:(id)keyTitles;
+(id)definitionWithDictionaryKeyNames:(id)dictionaryKeyNames;
-(id)className;
-(BOOL)addPropertyDefinition:(id)definition;
-(BOOL)isValidPropertyName:(id)name;
-(id)initWithDictionaryKeyNames:(id)dictionaryKeyNames withKeyTitles:(id)keyTitles;
-(id)initWithDictionaryKeyNames:(id)dictionaryKeyNames;
@end


/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSArray.h>


@interface NSArray (JSONKitSerializing)
-(id)JSONStringWithOptions:(unsigned)options serializeUnsupportedClassesUsingDelegate:(id)delegate selector:(SEL)selector error:(id*)error;
-(id)JSONStringWithOptions:(unsigned)options error:(id*)error;
-(id)JSONString;
-(id)JSONDataWithOptions:(unsigned)options serializeUnsupportedClassesUsingDelegate:(id)delegate selector:(SEL)selector error:(id*)error;
-(id)JSONDataWithOptions:(unsigned)options error:(id*)error;
-(id)JSONData;
@end

@interface NSArray (JSONKitSerializingBlockAdditions)
-(id)JSONStringWithOptions:(unsigned)options serializeUnsupportedClassesUsingBlock:(id)block error:(id*)error;
-(id)JSONDataWithOptions:(unsigned)options serializeUnsupportedClassesUsingBlock:(id)block error:(id*)error;
@end


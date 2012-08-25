/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>


@interface ABImmutableStack : NSObject {
	id _value;
	ABImmutableStack* _next;
}
@property(retain, nonatomic) ABImmutableStack* next;
@property(retain, nonatomic) id value;
+(id)immutableStackWithObject:(id)object next:(id)next;
+(id)emptyStack;
-(id)peek;
-(id)pop;
-(id)push:(id)push;
-(id)initWithObject:(id)object next:(id)next;
-(BOOL)isEmpty;
-(void)dealloc;
-(id)init;
@end


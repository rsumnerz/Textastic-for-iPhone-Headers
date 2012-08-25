/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface ABScopedLine : NSObject {
	NSMutableArray* _lineSegments;
}
@property(readonly, assign, nonatomic) NSMutableArray* lineSegments;
-(void)dealloc;
-(id)attributedStringWithString:(id)string theme:(id)theme textRectWidth:(float)width;
-(id)scopeTreeNodeAtLocation:(unsigned)location;
-(void)addSegmentWithLength:(unsigned)length scopeTreeNode:(id)node;
-(id)init;
@end


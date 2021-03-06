/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Textastic-Structs.h"
#import <Foundation/NSObject.h>

@class NSNumber, NSAttributedString;

@interface ABCodeEditorLayoutCacheEntry : NSObject {
	NSAttributedString* _string;
	CTFrameRef _frame;
	CTFramesetterRef _framesetter;
	NSNumber* _key;
}
@property(retain, nonatomic) NSNumber* key;
@property(readonly, assign, nonatomic) CTFrameRef frame;
@property(readonly, assign, nonatomic) CTFramesetterRef framesetter;
@property(readonly, assign, nonatomic) NSAttributedString* string;
-(void)dealloc;
-(id)initWithString:(id)string framesetter:(CTFramesetterRef)framesetter frame:(CTFrameRef)frame;
@end


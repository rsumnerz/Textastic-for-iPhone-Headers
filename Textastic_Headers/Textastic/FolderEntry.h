/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface FolderEntry : NSObject {
	int indentLevel;
	NSString* completePath;
	NSString* folderName;
}
@property(copy, nonatomic) NSString* folderName;
@property(copy, nonatomic) NSString* completePath;
@property(assign, nonatomic) int indentLevel;
-(void)dealloc;
@end

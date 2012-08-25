/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Textastic-Structs.h"
#import <Foundation/NSObject.h>

@class UIDocumentInteractionController, NSString, NSDictionary, NSNumber;

__attribute__((visibility("hidden")))
@interface FileInformation : NSObject {
	BOOL valid;
	BOOL directory;
	BOOL binary;
	BOOL checkedBinary;
	NSString* completeFilePath;
	NSString* _pathRelativeToDocumentDirectory;
	NSNumber* _fileSettingsId;
	unsigned encoding;
	NSDictionary* fileAttributes;
	int lineEndingType;
	UIDocumentInteractionController* interactionController;
	BOOL marked;
	NSString* fileName;
	NSString* encodingName;
	NSString* lineEndingName;
	NSString* syntaxScopeName;
}
@property(assign, nonatomic, getter=isShowingRemotePreview) BOOL showingRemotePreview;
@property(copy, nonatomic) NSString* remotePreviewURL;
@property(copy, nonatomic) NSString* localPreviewPath;
@property(copy, nonatomic) NSString* customSyntaxScopeName;
@property(readonly, assign, nonatomic) NSString* syntaxScopeName;
@property(assign, nonatomic) NSRange lastSelectedRange;
@property(assign, nonatomic) BOOL marked;
@property(readonly, assign, nonatomic) NSDictionary* fileAttributes;
@property(readonly, assign, nonatomic, getter=isBinary) BOOL binary;
@property(readonly, assign, nonatomic) UIDocumentInteractionController* interactionController;
@property(readonly, assign, nonatomic) NSString* lineEndingName;
@property(assign, nonatomic) int lineEndingType;
@property(readonly, assign, nonatomic) NSString* encodingName;
@property(readonly, assign, nonatomic) NSString* fileName;
@property(assign, nonatomic) unsigned encoding;
@property(copy, nonatomic) NSString* completeFilePath;
@property(readonly, assign, nonatomic, getter=isDirectory) BOOL directory;
@property(readonly, assign, nonatomic, getter=isValid) BOOL valid;
+(void)cleanupFileSettingsDictionary;
+(id)fileDatabaseQueue;
+(void)importFileSettingsToDB:(id)db;
+(void)updateDatabase:(id)database;
+(BOOL)database:(id)database executeBatch:(id)batch error:(id*)error;
+(id)pathRelativeToDocumentDirectoryWithFilePath:(id)filePath;
+(id)applicationSupportDirectory;
+(id)documentsDirectory;
+(id)findOrCreateDirectory:(unsigned)directory inDomain:(unsigned)domain appendPathComponent:(id)component;
+(id)lineEndingNameForLineEndingType:(int)lineEndingType;
+(id)fileInformationArrayForDocumentDirectory;
+(id)fileInformationArrayForDirectory:(id)directory directoriesOnly:(BOOL)only;
+(id)fileInformationArrayForDirectory:(id)directory;
+(id)fileInformationWithFilePath:(id)filePath;
-(void)dealloc;
-(id)linkedConnections;
-(void)removeLinkedConnection:(id)connection;
-(void)addLinkedConnection:(id)connection;
-(id)fileSettingsIdWithDB:(id)db;
-(id)pathRelativeToDocumentDirectory;
-(id)fileIcon;
-(BOOL)isImageExtension:(id)extension;
-(id)fileModificationDateString;
-(id)fileSizeString;
-(int)compare:(id)compare;
-(void)refreshFileInfo;
-(BOOL)isZip;
-(void)refreshFileAttributes;
-(void)saveStringToFile:(id)file;
-(id)stringFromFile;
-(id)convertString:(id)string toLineEndingType:(int)lineEndingType;
-(void)determineEncoding;
-(unsigned)guessEncodingFromData:(id)data;
-(BOOL)checkIfFileIsBinary;
-(id)initWithFilePath:(id)filePath;
@end


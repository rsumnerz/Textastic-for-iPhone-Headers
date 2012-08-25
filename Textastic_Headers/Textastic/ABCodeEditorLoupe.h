/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Textastic-Structs.h"
#import <UIKit/UIView.h>

@class ABCodeEditorContentView, UIImage;

@interface ABCodeEditorLoupe : UIView {
	int _mode;
	CGPoint _touchPoint;
	float _scale;
	ABCodeEditorContentView* _subjectView;
	CGRect _loupeFramePosition;
	CGPoint _loupeTouchPoint;
	CGRect _boundingRect;
	UIImage* _loImage;
	UIImage* _hiImage;
	UIImage* _maskImage;
}
@property(assign, nonatomic) ABCodeEditorContentView* subjectView;
@property(assign, nonatomic) float scale;
@property(assign, nonatomic) int mode;
@property(assign, nonatomic) CGPoint touchPoint;
+(void)initializeImages;
-(void)drawRect:(CGRect)rect;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end


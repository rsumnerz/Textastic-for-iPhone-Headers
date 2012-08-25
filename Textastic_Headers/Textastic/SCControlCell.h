/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SCTableViewCell.h"

@class UIView;

__attribute__((visibility("hidden")))
@interface SCControlCell : SCTableViewCell {
	UIView* control;
	float maxTextLabelWidth;
	float controlIndentation;
	float controlMargin;
}
@property(assign, nonatomic) float controlMargin;
@property(assign, nonatomic) float controlIndentation;
@property(assign, nonatomic) float maxTextLabelWidth;
@property(readonly, assign, nonatomic) UIView* control;
-(void)loadBoundValueIntoControl;
-(void)reloadBoundValue;
-(void)willDisplay;
-(void)layoutSubviews;
-(void)dealloc;
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier;
@end

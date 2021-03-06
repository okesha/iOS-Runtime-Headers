/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class UIButton;

@interface PSDeleteButton : UIView <PSHeaderFooterView> {
    UIButton *_deleteButton;
}

+ (float)deleteButtonHeight;

- (void)addButtonTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned int)arg3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithSpecifier:(id)arg1;
- (void)layoutSubviews;
- (float)preferredHeightForWidth:(float)arg1;
- (void)setButtonTitle:(id)arg1;

@end

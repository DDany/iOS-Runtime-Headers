/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSString, UIColor;

@interface SUTableHeaderView : UIView {
    struct CGSize { 
        float width; 
        float height; 
    UIColor *_bottomBorderColor;
    NSInteger _index;
    UIColor *_shadowColor;
    NSInteger _style;
    NSString *_subtitle;
    } _subtitleSize;
    UIColor *_textColor;
    NSString *_title;
}

@property(retain) UIColor *bottomBorderColor;
@property(retain) UIColor *shadowColor;
@property(retain) NSString *subtitle;
@property(retain) UIColor *textColor;
@property(retain) NSString *title;
@property NSInteger index;
@property NSInteger style;

- (struct CGSize { float x1; float x2; })_subtitleSize;
- (id)bottomBorderColor;
- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (NSInteger)index;
- (void)setBottomBorderColor:(id)arg1;
- (void)setIndex:(NSInteger)arg1;
- (void)setShadowColor:(id)arg1;
- (void)setStyle:(NSInteger)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTextColor:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)shadowColor;
- (void)sizeToFit;
- (NSInteger)style;
- (id)subtitle;
- (id)textColor;
- (id)title;

@end
/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSString, TSUColor;

@interface TSKAnnotationAuthor : TSPObject {
    TSUColor *mColor;
    NSString *mName;
}

@property(readonly) NSString * appearanceColorForAuthor;
@property(readonly) NSString * authorColorName;
@property(readonly) TSUColor * cellViolatorColor;
@property(readonly) TSUColor * changeAdornmentsColor;
@property(readonly) TSUColor * flagFillColor;
@property(readonly) TSUColor * flagPressedColor;
@property(readonly) TSUColor * flagStrokeColor;
@property(readonly) TSUColor * gradientEndColor;
@property(readonly) TSUColor * gradientStartColor;
@property(readonly) NSString * menuSwatchColorForAuthor;
@property(copy) NSString * name;
@property(readonly) TSUColor * popoverAuthorLabelColor;
@property(readonly) TSUColor * popoverButtonTintColor;
@property(readonly) TSUColor * popoverColor;
@property(readonly) BOOL showAuthorComments;
@property(readonly) TSUColor * sidebarChangeBarColor;
@property(readonly) TSUColor * sidebarHoverColor;
@property(readonly) TSUColor * sidebarSelectedBorderColor;
@property(readonly) TSUColor * sidebarSelectedColor;
@property(readonly) TSUColor * sidebarUsernameColor;
@property(retain) TSUColor * storageColor;
@property(readonly) TSUColor * textHighlightColor;
@property(readonly) TSUColor * textMarkupColor;

+ (id)authorColorAppearanceNameForIndex:(unsigned int)arg1;
+ (id)authorColorForIndex:(unsigned int)arg1 forKey:(id)arg2;
+ (id)authorColorNameForIndex:(unsigned int)arg1;
+ (id)authorMenuSwatchColorForIndex:(unsigned int)arg1;
+ (id)authorStorageColorForIndex:(unsigned int)arg1;
+ (id)defaultAuthorName;
+ (unsigned int)presetColorCount;

- (BOOL)allowsImplicitComponentOwnership;
- (id)appearanceColorForAuthor;
- (id)authorColorName;
- (id)cellViolatorColor;
- (id)changeAdornmentsColor;
- (id)componentRootObject;
- (void)dealloc;
- (id)description;
- (id)flagFillColor;
- (id)flagPressedColor;
- (id)flagStrokeColor;
- (id)gradientEndColor;
- (id)gradientStartColor;
- (unsigned int)hash;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1 name:(id)arg2 color:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (id)menuSwatchColorForAuthor;
- (id)name;
- (unsigned int)p_authorColorIndex;
- (id)popoverAuthorLabelColor;
- (id)popoverButtonTintColor;
- (id)popoverColor;
- (void)saveToArchiver:(id)arg1;
- (void)setName:(id)arg1;
- (void)setStorageColor:(id)arg1;
- (BOOL)showAuthorComments;
- (id)sidebarChangeBarColor;
- (id)sidebarHoverColor;
- (id)sidebarSelectedBorderColor;
- (id)sidebarSelectedColor;
- (id)sidebarUsernameColor;
- (id)storageColor;
- (id)textHighlightColor;
- (id)textMarkupColor;

@end
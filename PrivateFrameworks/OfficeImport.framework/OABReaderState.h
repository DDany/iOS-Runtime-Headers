/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableDictionary, <OADColorPalette>;



@interface OABReaderState : NSObject 
{
    Class mClient;
    NSMutableDictionary *mShapeIdMap;
    NSMutableDictionary *mEshContentIdMap;
    <OADColorPalette> *mColorPalette;
    NSMutableDictionary *mBlipIdMap;
}


- (id)drawableForBlipId:(NSInteger)arg1;
- (struct EshContent { }*)eshContentForId:(NSInteger)arg1;
- (void)setDrawable:(id)arg1 forBlipId:(NSInteger)arg2;
- (void)setEshContent:(struct EshContent { }*)arg1 forId:(NSInteger)arg2;
- (id)colorPalette;
- (void)setColorPalette:(id)arg1;
- (id)drawableForShapeId:(NSInteger)arg1;
- (void)setDrawable:(id)arg1 forShapeId:(NSInteger)arg2;
- (id)init;
- (void)dealloc;
- (Class)client;
- (id)initWithClient:(Class)arg1;

@end
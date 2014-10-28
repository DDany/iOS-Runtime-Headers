/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSMutableDictionary, NSString, TSKSelection, TSPObject<TSKModel>;

@interface TPArchivedViewState : TSPObject {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct CGPoint { 
        float x; 
        float y; 
    NSMutableDictionary *_chartUIState;
    BOOL _inspectorHidden;
    BOOL _layoutBordersVisible;
    BOOL _masterDrawablesSelectable;
    BOOL _rulerVisible;
    NSString *_selectedInspectorSwitchSegmentIdentifier;
    TSKSelection *_selection;
    TSPObject<TSKModel> *_selectionModel;
    BOOL _showUserDefinedGuides;
    BOOL _showsActivitySidebar;
    BOOL _showsComments;
    BOOL _showsPageNavigator;
    float _viewScale;
    int _viewScaleMode;
    } _visibleRect;
    } _windowFrame;
    } _wordCountHUDPosition;
    int _wordCountHUDType;
    BOOL _wordCountHUDVisible;
}

- (id).cxx_construct;
- (void)captureViewStateWithProvider:(id)arg1;
- (void)dealloc;
- (id)initFromUnarchiver:(id)arg1;
- (void)readViewStateWithConsumer:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (BOOL)showsComments;

@end
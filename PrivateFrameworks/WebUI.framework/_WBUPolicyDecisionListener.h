/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@class <WebPolicyDecisionListener>, NSDictionary, NSString, WebFrame;

@interface _WBUPolicyDecisionListener : NSObject <WebPolicyDecisionListener> {
    NSDictionary *_formMetadata;
    WebFrame *_frame;
    int _navigationType;
    <WebPolicyDecisionListener> *_originalListener;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (void)download;
- (void)ignore;
- (id)initWithFrame:(id)arg1 navigationType:(int)arg2 formMetadata:(id)arg3 originalListener:(id)arg4;
- (void)use;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@class NSString;

@interface IMAttachmentMessagePartChatItem : IMMessagePartChatItem {
    unsigned int _wantsAttachmentContiguous : 1;
    NSString *_transferGUID;
}

@property(copy,readonly) NSString * transferGUID;

- (Class)__ck_chatItemClass;
- (id)_initWithItem:(id)arg1 text:(id)arg2 index:(int)arg3 transferGUID:(id)arg4;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (BOOL)isAttachmentContiguousWithChatItem:(id)arg1;
- (id)transferGUID;

@end

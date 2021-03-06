/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@class <SFContinuityScannerProtocol>, NSHashTable, NSMutableArray, NSString;

@interface SFContinuityScanManager : NSObject <SFCompanionXPCManagerObserver, SFContinuityScannerClient> {
    <SFContinuityScannerProtocol> *_connectionProxy;
    NSHashTable *_observers;
    NSMutableArray *_queuedIdentifers;
}

@property(retain) <SFContinuityScannerProtocol> * connectionProxy;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(retain) NSHashTable * observers;
@property(retain) NSMutableArray * queuedIdentifers;
@property(readonly) Class superclass;

+ (id)sharedManager;

- (void)activityPayloadFromDeviceIdentifier:(id)arg1 forAdvertisementPayload:(id)arg2 withCompletionHandler:(id)arg3;
- (void)addObserver:(id)arg1;
- (id)connectionProxy;
- (void)dealloc;
- (void)foundDeviceWithDeviceIdentifier:(id)arg1;
- (id)init;
- (void)lostDeviceWithDeviceIdentifier:(id)arg1;
- (id)observers;
- (id)queuedIdentifers;
- (void)receivedAdvertisement:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)setConnectionProxy:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setQueuedIdentifers:(id)arg1;
- (void)setupXPCConnection;
- (void)xpcManagerConnectionInterrupted;

@end

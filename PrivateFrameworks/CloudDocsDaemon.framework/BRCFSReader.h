/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@class BRCAccountSession, BRCRelativePath, NSObject<OS_dispatch_queue>, NSString;

@interface BRCFSReader : NSObject <BRCModule, BRCFSEventsDelegate, BRCFileCoordinationReading> {
    BRCRelativePath *_currentScan;
    NSObject<OS_dispatch_queue> *_serialQueue;
    BRCAccountSession *_session;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) NSObject<OS_dispatch_queue> * serialQueue;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancelScan;
- (void)_continueScan:(id)arg1;
- (void)_didResolvedDocumentID:(unsigned int)arg1 fileID:(unsigned long long)arg2 container:(id)arg3;
- (void)_processDeadItem:(id)arg1;
- (void)_processLostItem:(id)arg1 resolvedToPath:(id)arg2;
- (void)_processLostItem:(id)arg1;
- (void)_processNextLostItem:(id)arg1 inContainer:(id)arg2;
- (void)_resolveDocumentID:(unsigned int)arg1 inContainer:(id)arg2;
- (void)_scanDirectory:(id)arg1 atPath:(id)arg2 lookup:(id)arg3;
- (void)_scanDone:(id)arg1 atPath:(id)arg2 lookup:(id)arg3;
- (void)_slowScanDirectoryAtPath:(id)arg1;
- (void)_startScan:(id)arg1;
- (void)_unlinkAliasAtPath:(id)arg1;
- (void)close;
- (void)fseventAtPath:(id)arg1 withFlags:(unsigned long)arg2;
- (void)fseventOnAlias:(id)arg1 withFlags:(unsigned long)arg2 lookup:(id)arg3;
- (void)fseventOnContainerPath:(id)arg1 withFlags:(unsigned long)arg2;
- (void)fseventOnDeadPath:(id)arg1 withFlags:(unsigned long)arg2 lookup:(id)arg3;
- (void)fseventOnDirectory:(id)arg1 withFlags:(unsigned long)arg2 lookup:(id)arg3;
- (void)fseventOnDocument:(id)arg1 withFlags:(unsigned long)arg2 lookup:(id)arg3;
- (void)fseventOnRootPath:(id)arg1 withFlags:(unsigned long)arg2;
- (id)initWithAccountSession:(id)arg1;
- (id)itemForCreatedDocumentsDirectory:(id)arg1 container:(id)arg2;
- (id)lookupAndReadItemUnderCoordinationAtURL:(id)arg1;
- (void)readUnderCoordinationAtURL:(id)arg1;
- (BOOL)readUnderCoordinationWithLookup:(id)arg1;
- (void)reset;
- (void)resume;
- (void)scanContainerAtPathIfNeeded:(id)arg1;
- (id)serialQueue;
- (void)suspend;

@end

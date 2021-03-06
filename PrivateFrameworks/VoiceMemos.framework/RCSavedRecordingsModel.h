/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@class NSArray, NSFetchRequest, NSFetchedResultsController, NSManagedObjectContext, NSManagedObjectModel;

@interface RCSavedRecordingsModel : NSObject <NSFetchedResultsControllerDelegate> {
    NSManagedObjectContext *_context;
    NSFetchedResultsController *_fetchController;
    int _isSavingDisabledCount;
    NSManagedObjectModel *_model;
    int _notifyToken;
    NSFetchRequest *_savedRecordingsFetchRequest;
    BOOL _valid;
}

@property(readonly) unsigned int count;
@property(readonly) long long currentEntityRevision;
@property int isSavingDisabledCount;
@property(readonly) NSArray * recordings;
@property BOOL valid;

+ (id)_copyFileIntoRecordingsDirectory:(id)arg1;
+ (void)_importImportableRecordingWithSourceAudioURL:(id)arg1 name:(id)arg2 date:(id)arg3 completionHandler:(id)arg4;
+ (void)_insertRecordingWithImportableAudioURL:(id)arg1 name:(id)arg2 date:(id)arg3 completionHandler:(id)arg4;
+ (id)creationDateFromStandardRecordingURL:(id)arg1;
+ (void)determineImportabilityOfRecordingWithAudioURL:(id)arg1 completionHandler:(id)arg2;
+ (void)importRecordingWithSourceAudioURL:(id)arg1 name:(id)arg2 date:(id)arg3 completionHandler:(id)arg4;
+ (void)initialize;
+ (id)savedRecordingsDirectory;
+ (id)sharedModel;
+ (id)sharedModelForQueue:(id)arg1;
+ (id)standardURLForRecordingWithCreationDate:(id)arg1;

- (void).cxx_destruct;
- (id)_allCustomLabels;
- (void)_deleteOrphanedEntityRevisionsAndSave:(BOOL)arg1;
- (void)_deleteRecordingsWithDurationLessThan:(double)arg1 passingTest:(id)arg2;
- (id)_entityRevisionWithRecordingID:(long long)arg1;
- (void)_enumerateSavedRecordingsAndEntityRevisionInArrayOfManagedObjects:(id)arg1 createIfNeeded:(BOOL)arg2 block:(id)arg3;
- (void)_handleExternalModelDidSaveNotification:(id)arg1;
- (void)_handleInternalModelDidSaveNotification:(id)arg1;
- (id)_initWithManagedObjectContext:(id)arg1;
- (id)_labelPresetsForQuery:(id)arg1;
- (void)_migrateDatabaseIfNecessary;
- (long long)_nextEntityRevisionID;
- (long long)_nextRecordingID;
- (void)_postRecordingsModelDidChangeForNotificationName:(id)arg1;
- (id)_recordingWithRecordingID:(long long)arg1;
- (void)_scheduleAutomaticRecordingDeletions;
- (void)_setNextEntityRevisionID:(long long)arg1 save:(BOOL)arg2;
- (void)_setNextRecordingID:(long long)arg1 save:(BOOL)arg2;
- (void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned int)arg4 newIndexPath:(id)arg5;
- (void)controllerDidChangeContent:(id)arg1;
- (unsigned int)count;
- (long long)currentEntityRevision;
- (void)dealloc;
- (BOOL)deleteDatabaseProperty:(id)arg1;
- (void)deleteRecording:(id)arg1;
- (id)entityRevisionsForRecording:(id)arg1;
- (void)enumerateExistingRecordingsSinceEntityRevision:(long long)arg1 withBlock:(id)arg2;
- (void)enumerateExistingRecordingsWithBlock:(id)arg1;
- (id)fetchSavedRecordingIDs;
- (BOOL)hasExistingRecordingForAudioFile:(id)arg1;
- (id)indexPathForRecording:(id)arg1;
- (id)init;
- (id)insertRecordingWithAudioFile:(id)arg1 duration:(double)arg2 date:(id)arg3 customLabelBase:(id)arg4;
- (id)insertRecordingWithAudioFile:(id)arg1 duration:(double)arg2 date:(id)arg3;
- (int)isSavingDisabledCount;
- (id)nextRecordingDefaultLabelWithCustomLabelBase:(id)arg1;
- (void)performBlockAndWait:(id)arg1;
- (void)performWithSavingDisabled:(id)arg1;
- (id)recordingAtIndex:(unsigned int)arg1;
- (id)recordingWithID:(id)arg1;
- (id)recordingWithITunesPersistentID:(long long)arg1;
- (id)recordingWithURIRepresentation:(id)arg1;
- (id)recordings;
- (id)recordingsForSpotlightSearch:(id)arg1;
- (void)save;
- (void)saveIfNecessary;
- (BOOL)saveManagedObjectContext:(id*)arg1;
- (void)setIsSavingDisabledCount:(int)arg1;
- (void)setValid:(BOOL)arg1;
- (BOOL)setValue:(id)arg1 forDatabaseProperty:(id)arg2 save:(BOOL)arg3;
- (BOOL)setValue:(id)arg1 forDatabaseProperty:(id)arg2;
- (BOOL)valid;
- (id)valueForDatabaseProperty:(id)arg1;

@end

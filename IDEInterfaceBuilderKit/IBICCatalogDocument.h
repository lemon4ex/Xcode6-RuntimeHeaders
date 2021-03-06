//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBICCatalogDocument : IDEEditorDocument <IDEDocumentStructureProviding, IDENavigableItemArchivableRepresentationSupport, IBICCatalogItemObserver, IBICCatalogSynchronizerDelegate>
{
    NSMutableSet *_imageCatalogDocumentEditors;
    IBMutableIdentityDictionary *_editorsToWorkspaceDocuments;
    id <IBInvalidation> _catalogObservationToken;
    IBICCatalogMutator *_activeMutator;
    IBICCatalog *_unsynchronizedCatalog;
    DVTDelayedInvocation *_issueValidator;
    NSArray *_importingFileRefs;
    BOOL _replacingContent;
    NSArray *_ideTopLevelStructureObjects;
    IBICPasteboardManager *_pasteboardManager;
    IBICCatalogSynchronizer *_synchronizer;
    IBICTransientUIStateRepository *_transientUIStateRepository;
    NSArray *_issues;
}

+ (BOOL)shouldTrackFileSystemChanges;
+ (BOOL)autosavesDrafts;
+ (BOOL)autosavesInPlace;
+ (id)documentForCatalog:(id)arg1;
+ (void)unregisterOpenDocument:(id)arg1;
+ (void)registerOpenDocument:(id)arg1;
+ (id)openDocuments;
@property(readonly, nonatomic) NSArray *issues; // @synthesize issues=_issues;
@property(readonly, nonatomic) IBICTransientUIStateRepository *transientUIStateRepository; // @synthesize transientUIStateRepository=_transientUIStateRepository;
@property(readonly, nonatomic) IBICCatalogSynchronizer *synchronizer; // @synthesize synchronizer=_synchronizer;
@property(readonly, nonatomic) IBICPasteboardManager *pasteboardManager; // @synthesize pasteboardManager=_pasteboardManager;
@property(readonly) NSArray *ideTopLevelStructureObjects; // @synthesize ideTopLevelStructureObjects=_ideTopLevelStructureObjects;
- (void).cxx_destruct;
- (unsigned long long)navigableItem_indexOfRepresentedObjectForIdentifier:(id)arg1 inRelationshipKeyPath:(id)arg2;
- (id)navigableItem_identifierForRepresentedObjectAtIndex:(unsigned long long)arg1 inRelationshipKeyPath:(id)arg2;
- (void)refreshTopLevelStructureItems;
- (void)setIdeTopLevelStructureObjects:(id)arg1;
- (id)importContentsOfFileReferences:(id)arg1 intoFolder:(id)arg2;
- (void)applyRemoveItemsChange:(id)arg1;
- (void)applyRemoveItemChange:(id)arg1;
- (void)applyModifyImage:(id)arg1 value:(id)arg2 forKeyPath:(id)arg3;
- (void)applyModifyImageRep:(id)arg1 value:(id)arg2 forKeyPath:(id)arg3;
- (void)applyLinkImageRepContent:(id)arg1 toContentOfSibling:(id)arg2;
- (void)applyMoveItem:(id)arg1 andUpdateFileNameToBeUnique:(BOOL)arg2 toParent:(id)arg3;
- (void)applyAddItem:(id)arg1 andUpdateFileNameToBeUnique:(BOOL)arg2 toParent:(id)arg3;
@property(readonly, nonatomic) NSSet *defaultDeviceSpecificImageRepSlots;
- (id)targetPlatforms;
@property(readonly, nonatomic) IBFileBuildSettingsSnapshot *buildSettingsSnapshot;
- (id)workspaceDocuments;
- (void)catalogDidRecoverFromFailureByReplaceContentWithContentFromDisk:(id)arg1 result:(id)arg2;
- (void)catalogWillRecoverFromFailureByReplaceContentWithContentFromDisk:(id)arg1;
- (void)catalogSynchronizerDidDetectExternalChangesOnDisk:(id)arg1;
- (void)catalogSynchronizer:(id)arg1 didCompleteSynchronizingWithStatus:(long long)arg2 error:(id)arg3;
- (void)presentErrorOnBestDocumentEditor:(id)arg1;
- (void)imageCatalogItemDidChangeDisplayOrderedChildren:(id)arg1;
- (void)imageCatalogItem:(id)arg1 willChangeKey:(id)arg2 fromValue:(id)arg3 toValue:(id)arg4;
- (void)batchValidateIssues:(id)arg1;
- (void)didExternallyRelocateFileContent;
- (void)willExternallyRelocateFileContent;
- (void)editorDocumentWillClose;
- (BOOL)readFromURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (void)saveToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)unregisterImageCatalogDocumentEditor:(id)arg1;
- (void)registerImageCatalogDocumentEditor:(id)arg1;
@property(readonly, nonatomic) IBICCatalog *catalog;
- (void)applyChanges:(id)arg1;
- (void)applyChange:(id)arg1;
- (void)catalogSynchronizer:(id)arg1 didApplyMutationToModel:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
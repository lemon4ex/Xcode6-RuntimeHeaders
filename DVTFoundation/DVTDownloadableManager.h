//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DVTDownloadableManager : NSObject <DVTInvalidation>
{
    DVTDispatchLock *_lock;
    DVTDelayedInvocation *_updateDownloadables;
    NSMutableSet *_downloadables;
    NSMutableSet *_downloadedDownloadables;
    NSMutableDictionary *_downloadablesByIdentifier;
    NSOperationQueue *_downloadQueue;
    NSMutableSet *_operations;
    DVTMacroDefinitionTable *_macroDefinitionTable;
    DVTMacroExpansionScope *_macroExpansionScope;
    NSMutableDictionary *_predicateSubstitutionVariables;
    BOOL _automaticUpdate;
    NSURL *_cacheURL;
    NSDate *_doNotPromptAboutUpdatesUntilDate;
}

+ (void)deferActivity:(id)arg1 untilDate:(id)arg2 gracePeriod:(double)arg3 allowBattery:(BOOL)arg4 block:(CDUnknownBlockType)arg5;
+ (void)initialize;
+ (id)defaultDownloadableManager;
@property(retain) NSDate *doNotPromptAboutUpdatesUntilDate; // @synthesize doNotPromptAboutUpdatesUntilDate=_doNotPromptAboutUpdatesUntilDate;
@property BOOL automaticUpdate; // @synthesize automaticUpdate=_automaticUpdate;
@property(copy) NSURL *cacheURL; // @synthesize cacheURL=_cacheURL;
- (void).cxx_destruct;
- (void)setValue:(id)arg1 forMacroName:(id)arg2;
- (void)updateOutdatedDownloadables:(id)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (id)download:(id)arg1 authorization:(struct AuthorizationOpaqueRef *)arg2 error:(id *)arg3;
- (id)operationForDownload:(id)arg1 authorization:(struct AuthorizationOpaqueRef *)arg2 error:(id *)arg3;
- (id)operationForDownload:(id)arg1 authorization:(struct AuthorizationOpaqueRef *)arg2 shouldAuthorizeIfNeeded:(BOOL)arg3 error:(id *)arg4;
- (void)addOperation:(id)arg1;
@property(readonly) NSSet *operations;
- (id)_candidatesForDependency:(id)arg1;
- (void)_triggerAutomaticUpdateCheck;
- (id)outdatedDownloadables;
- (BOOL)hasDownloadedDownloadableOrNewer:(id)arg1;
- (BOOL)isDownloadedDownloadable:(id)arg1;
- (BOOL)_isDownloadedDownloadable:(id)arg1;
- (BOOL)deleteFromCache:(id)arg1 error:(id *)arg2;
- (BOOL)isCachedDownloadable:(id)arg1;
- (id)cacheURLForDownloadable:(id)arg1;
- (id)downloadableForIdentifier:(id)arg1 version:(id)arg2;
- (id)_downloadableForIdentifier:(id)arg1 version:(id)arg2;
- (id)downloadablesForIdentifier:(id)arg1;
- (id)_downloadablesForIdentifier:(id)arg1;
- (void)_willInstallDownloadable:(id)arg1;
@property(readonly) NSSet *downloadedDownloadables;
@property(readonly) NSSet *downloadables;
- (void)rebuildDownloadables;
- (BOOL)refreshWithError:(id *)arg1;
@property(readonly) id <DVTDownloadableInstallationHelper> installationHelper;
- (void)_lockedSetMutation:(id)arg1 key:(id)arg2 kind:(unsigned long long)arg3 change:(id)arg4;
- (void)_withWillDidChangeSetMutationNotifications:(id)arg1 kind:(unsigned long long)arg2 change:(id)arg3 withBlock:(CDUnknownBlockType)arg4;
- (id)_performLockedReturningBlock:(CDUnknownBlockType)arg1;
- (id)_downloadableFilters;
- (void)primitiveInvalidate;
- (id)init;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end
//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDESourceControlWorkingTreeItem : IDESourceControlTreeItem
{
    DVTFilePath *_filePath;
    NSMutableDictionary *_statusForKeyDictionary;
    BOOL _edited;
}

+ (BOOL)automaticallyNotifiesObserversOfConflictStateForUpdateOrMerge;
+ (BOOL)automaticallyNotifiesObserversOfSourceControlServerStatus;
+ (BOOL)automaticallyNotifiesObserversOfSourceControlLocalStatus;
@property(readonly) DVTFilePath *filePath; // @synthesize filePath=_filePath;
- (void).cxx_destruct;
- (void)setSourceControlStatus:(int)arg1 forKey:(id)arg2;
- (int)sourceControlStatusForKey:(id)arg1;
- (id)blameEntriesForRevisionNumber:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)temporaryFileForBranchName:(id)arg1 revisionNumber:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)currentRevisionWithCompletionBlock:(CDUnknownBlockType)arg1;
@property BOOL edited; // @synthesize edited=_edited;
- (void)setConflictStateForUpdateOrMerge:(unsigned long long)arg1;
- (void)setSourceControlServerStatus:(int)arg1;
- (void)setSourceControlLocalStatus:(int)arg1;
- (id)ideModelObjectTypeIdentifier;
- (void)repositoryURLStringAtBranch:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)repositoryURLString;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)primitiveInvalidate;
- (id)initWithFilePath:(id)arg1;

@end
//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface PBXTargetDocument : PBXFileDocument
{
    PBXTarget *_target;
}

+ (id)targetDocumentForTarget:(id)arg1 createIfNeeded:(BOOL)arg2;
+ (Class)defaultFileEditorSubclass;
+ (void)initialize;
- (BOOL)isInProject:(id)arg1;
- (id)bookmarkInProject:(id)arg1;
- (id)fileReferenceInProject:(id)arg1;
- (void)updateDiskStateInfo;
- (int)diskState;
- (void)updateChangeCount:(unsigned long long)arg1;
- (BOOL)isDocumentEdited;
- (BOOL)readFromFile:(id)arg1 ofType:(id)arg2;
- (BOOL)writeToFile:(id)arg1 ofType:(id)arg2;
- (BOOL)isFileWritable;
- (id)target;
- (void)dealloc;
- (void)_projectDidClose:(id)arg1;
- (void)_projectDidChange:(id)arg1;
- (void)_targetWillBeRemoved:(id)arg1;
- (id)initWithTarget:(id)arg1;
- (void)saveDocument:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (id)iconImage;

@end
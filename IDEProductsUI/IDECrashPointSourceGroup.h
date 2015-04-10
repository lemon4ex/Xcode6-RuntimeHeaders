//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDECrashPointSourceGroup : NSObject <IDEKeyDrivenNavigableItemRepresentedObject>
{
    NSArray *_crashPointSources;
    NSString *_name;
}

@property(readonly) NSString *name; // @synthesize name=_name;
@property(readonly) NSArray *crashPointSources; // @synthesize crashPointSources=_crashPointSources;
- (void).cxx_destruct;
@property(readonly) NSString *navigableItem_toolTip;
@property(readonly) NSString *navigableItem_name;
- (id)initWithName:(id)arg1 sources:(id)arg2 groupSources:(BOOL)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTDocumentLocation *navigableItem_contentDocumentLocation;
@property(readonly) DVTFileDataType *navigableItem_documentType;
@property(readonly) IDEFileReference *navigableItem_fileReference;
@property(readonly) NSString *navigableItem_groupIdentifier;
@property(readonly) NSImage *navigableItem_image;
@property(readonly) BOOL navigableItem_isLeaf;
@property(readonly) BOOL navigableItem_isMajorGroup;
@property(readonly) Class superclass;

@end
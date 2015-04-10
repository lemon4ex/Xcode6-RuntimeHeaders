//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDEAddTestBundleToSchemeActionSheetHelper : NSObject <IDEFilePickerViewDelegate>
{
    IDEWorkspace *_workspace;
    IDETestSchemeAction *_schemeAction;
    CDUnknownBlockType _completionBlock;
}

- (void).cxx_destruct;
- (void)filePickerView:(id)arg1 outlineView:(id)arg2 willDisplayCell:(id)arg3 forTableColumn:(id)arg4 item:(id)arg5;
- (void)_showSheetOnWindow:(id)arg1;
- (BOOL)_shouldEnableFilePickerItem:(id)arg1;
- (id)_testableProviders;
- (id)initWithWorkspace:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
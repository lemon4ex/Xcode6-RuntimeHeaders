//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DBGBreakpointAnnotationProvider : DVTAnnotationProvider <DVTTextAnnotationDelegate>
{
    IDEAnnotationContext *_context;
    IDEWorkspaceWindowController *_workspaceWindowController;
    DVTObservingToken *_breakpointsObservingToken;
}

+ (id)annotationProviderForContext:(id)arg1 error:(id *)arg2;
@property(readonly) IDEAnnotationContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)_revealInBreakpointNavigator:(id)arg1;
- (void)_deleteBreakpoint:(id)arg1;
- (void)_editBreakpoint:(id)arg1;
- (void)_editBreakpointForAnnotation:(id)arg1 inTextSideBarView:(id)arg2;
- (id)_createRevealInBreakpointNavigatorMenuItem:(id)arg1;
- (id)_createDeleteBreakpointMenuItem:(id)arg1;
- (id)_createToggleBreakpointMenuItem:(id)arg1;
- (id)_createEditBreakpointMenuItem:(id)arg1 inTextSidebarView:(id)arg2;
- (id)contextMenuItemsForAnnotation:(id)arg1 inTextSidebarView:(id)arg2;
- (void)didRecognizeGestureInAnnotation:(id)arg1 inTextSidebarView:(id)arg2 recognizer:(id)arg3;
- (void)didClickAnnotation:(id)arg1 inTextSidebarView:(id)arg2 event:(id)arg3;
- (void)didDeleteOrReplaceParagraphForAnnotation:(id)arg1;
- (void)didMoveAnnotation:(id)arg1;
- (unsigned long long)annotation:(id)arg1 willMoveToParagraphNumber:(unsigned long long)arg2;
- (void)didRemoveAnnotation:(id)arg1;
- (void)providerWillUninstall;
- (id)_documentURL;
- (void)_removeAnnotation:(id)arg1;
- (void)_handleAnnotationWasRemoved:(id)arg1;
- (void)_handleBreakpointRemoved:(id)arg1;
- (void)_addAnnotationForAddressBreakpoint:(id)arg1;
- (void)_addAnnotationForFileBreakpoint:(id)arg1;
- (void)_handleBreakpointAdded:(id)arg1;
- (void)_handleBreakpointsChanged:(id)arg1;
- (id)initWithContext:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBCocoaStoryboardDocumentCompiler : IBStoryboardDocumentCompiler
{
    BOOL _instantiatedSegueTemplates;
}

- (id)infoPlistDictionaryForCompiledPackageWithViewControllerNibMap:(id)arg1;
- (id)localOptionsForTarget:(id)arg1 withCompilerOptions:(id)arg2;
- (id)targetRuntimeCompilationTargetsForCompilerOptions:(id)arg1;
- (id)compileCompilationUnit:(id)arg1 options:(id)arg2 forSceneCompilationGroup:(id)arg3;
- (id)outletNameForPrimarySceneObject;
- (id)compiledPackageVersion;
- (BOOL)storyboardsAreAvailableForCompilationTargetReturningError:(id *)arg1;
- (id)storyboardPlaceholderIdentifier;
- (id)infoPlistDesignatedEntryPointIdentifierKey;
- (id)infoPlistPackageVersionKey;
- (id)infoPlistViewControllerIdentifierToNibNameMapKey;

@end
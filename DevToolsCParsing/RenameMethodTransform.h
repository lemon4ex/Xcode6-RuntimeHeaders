//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface RenameMethodTransform : Transform
{
    NSString *_oldName;
    NSString *_newName;
    BOOL _renameMethodInAllClasses;
    NSMutableArray *_potentialMatches;
    NSMutableSet *_declarationInstancesAlreadyChanged;
    TreeSearcher *_messageSearcher;
    TreeSearcher *_selectorSearcher;
    Type *_idType;
    Type *_ptrToClassType;
    NSArray *_newComponents;
    NSArray *_oldComponents;
    int _componentCount;
    unsigned int _numberOfIdWarnings;
    NSMutableSet *_classesWithMethodRenamedWarnings;
}

- (BOOL)canFlushFunctionBodiesPerFile;
- (BOOL)performPerFile;
- (void)renameDeclarationInstance:(id)arg1;
- (BOOL)isCorrectTypeOfReceiver:(id)arg1 ifClassMethod:(BOOL)arg2;
- (BOOL)messageSend:(id)arg1 isReceivedByClassInSet:(id)arg2 isClassMethod:(BOOL)arg3;
- (BOOL)checkPerFile;
- (BOOL)checkFinal;
- (BOOL)checkFirstFile;
- (BOOL)checkValidateInputs;
- (id)transformRelatedNames;
- (id)requiredParamDictKeys;
- (void)dealloc;
- (id)initWithTransformInstance:(id)arg1 declaration:(id)arg2 paramDict:(id)arg3;

@end
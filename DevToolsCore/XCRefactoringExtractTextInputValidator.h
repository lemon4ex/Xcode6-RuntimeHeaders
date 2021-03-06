//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCRefactoringExtractTextInputValidator : XCRefactoringTextInputValidator
{
    int _signatureType;
    Type *_returnType;
    NSString *_originalName;
    NSArray *_originalParameters;
    NSString *_originalText;
    struct _NSRange _originalNameRange;
    NSString *_modifiedText;
    BOOL _originalTextHasAsterisks;
    BOOL _originalTextHasCarets;
    BOOL _originalTextHasCommas;
    BOOL _isModifiedSignatureValid;
    struct _NSRange _invalidSignatureErrorRange;
    NSString *_invalidSignatureLocalizedMessage;
    NSString *_modifiedName;
    NSArray *_modifiedParameters;
}

- (id)shouldBeShownLocalizedMessageForChar:(unsigned short)arg1;
- (BOOL)isStringValid:(id)arg1 otherStrings:(id)arg2 localizedMessage:(id *)arg3 invalidRange:(struct _NSRange *)arg4;
- (id)localizedCapitalizedColonString;
- (id)localizedCapitalizedMethodKeywordString:(unsigned long long)arg1;
- (id)localizedCapitalizedMethodNameString;
- (id)localizedCapitalizedFunctionParametersString;
- (id)localizedCapitalizedFunctionNameString;
- (id)localizedCapitalizedParameterNameString:(unsigned long long)arg1;
- (id)localizedCapitalizedLeftSideOfTypeString;
- (id)localizedCapitalizedTypeString;
- (id)localizedCapitalizedLeftSideOfReturnTypeString;
- (id)localizedCapitalizedReturnTypeString;
- (id)missingLocalizedMessage:(id)arg1;
- (id)blankForLocalizedMessage:(id)arg1;
- (id)noCommaAfterLocalizedMessage:(id)arg1;
- (id)noSpaceAfterLocalizedMessage:(id)arg1;
- (id)noParensForLocalizedMessage:(id)arg1;
- (id)extraCharsMessage;
- (id)duplicateNameMessage:(id)arg1;
- (id)duplicateNameMessage:(id)arg1 param1Index:(unsigned long long)arg2 param2Index:(unsigned long long)arg3;
- (id)typeNonmatchingRemainingLocalizedMessage:(id)arg1;
- (id)rightSideOfParameterTypeMissingLocalizedMessage:(id)arg1;
- (id)leftSideOfParameterTypeMissingLocalizedMessage:(id)arg1;
- (id)parameterTypeMissingLocalizedMessage:(id)arg1;
- (id)rightSideOfReturnTypeMissingLocalizedMessage:(id)arg1;
- (id)leftSideOfReturnTypeMissingLocalizedMessage:(id)arg1;
- (id)returnTypeMissingLocalizedMessage:(id)arg1;
- (id)rightSideOfReturnTypeNonmatchingLocalizedMessage:(id)arg1;
- (id)leftSideOfReturnTypeNonmatchingLocalizedMessage:(id)arg1;
- (id)returnTypeNonmatchingLocalizedMessage:(id)arg1;
- (id)endedPrematurelyLocalizedMessage;
- (id)commaFunctionLocalizedMessage;
- (id)endingParenInFunctionLocalizedMessage;
- (id)startingParenInFunctionLocalizedMessage;
- (id)startingPlusInClassMethodLocalizedMessage;
- (id)startingMinusInInstanceMethodLocalizedMessage;
- (id)originalSignatureCharsLocalizedMessage;
- (void)dealloc;
- (id)initWithReturnType:(id)arg1 name:(id)arg2 parameters:(id)arg3 signatureType:(int)arg4;
- (id)modifiedParameters;
- (id)modifiedName;
- (id)invalidSignatureLocalizedMessage;
- (struct _NSRange)invalidSignatureErrorRange;
- (BOOL)isModifiedSignatureValid;
- (void)setModifiedText:(id)arg1;
- (id)modifiedText;
- (struct _NSRange)originalNameRange;
- (id)originalText;
- (id)originalParameters;
- (id)originalName;
- (id)returnType;
- (int)signatureType;
- (void)_generateOriginalText;
- (void)analyzeModifiedText;
- (void)_analyzeMethodFromIndex:(unsigned long long)arg1;
- (BOOL)_matchedMethodParameterInTypes:(id)arg1 new:(id)arg2 index:(unsigned long long *)arg3;
- (void)_analyzeFunctionFromIndex:(unsigned long long)arg1;
- (BOOL)_matchedFunctionClosedParenAtIndex:(unsigned long long *)arg1;
- (BOOL)_matchedFunctionParameterInTypes:(id)arg1 newExtractParameters:(id)arg2 index:(unsigned long long *)arg3;
- (BOOL)_matchedFunctionName:(id *)arg1 andOpenParenAtIndex:(unsigned long long *)arg2;
- (BOOL)_matchedTrailingWhitespaceAfterLocalizedType:(id)arg1 index:(unsigned long long *)arg2;
- (BOOL)_matchedRightSideOfReturnTypeForFunctionAtIndex:(unsigned long long *)arg1;
- (BOOL)_matchedLeftSideOfReturnTypeForFunctionAtIndex:(unsigned long long *)arg1;
- (void)_setOriginalParameterIndexesFor:(id)arg1 inMethod:(BOOL)arg2;
- (BOOL)_isTypeCastStringOfParameter:(id)arg1 equalToThatofExtractParameter:(id)arg2 inMethod:(BOOL)arg3;
- (BOOL)_checkForParameterNameDuplicates:(id)arg1;
- (void)_createParameterWithKeywordRange:(struct _NSRange)arg1 typeStringRange:(struct _NSRange)arg2 nameRange:(struct _NSRange)arg3 typeStringRange2:(struct _NSRange)arg4 newExtractParameters:(id)arg5;
- (BOOL)_matchedParameterName:(struct _NSRange *)arg1 newExtractParameters:(id)arg2 index:(unsigned long long *)arg3;
- (BOOL)_matchedParameterInTypes:(id)arg1 newTypeStringRange:(struct _NSRange *)arg2 foundType:(id *)arg3 index:(unsigned long long *)arg4;
- (BOOL)_matchedReturnTypeAtIndex:(unsigned long long *)arg1;
- (BOOL)_matchedReturnTypeAtIndex:(unsigned long long *)arg1 stringToCheck:(id)arg2 nonmatchingError:(SEL)arg3 missingError:(SEL)arg4;
- (BOOL)_matchedEndOfText:(unsigned long long *)arg1;
- (BOOL)_matchedName:(id *)arg1 localizedCapitalizedNameIfError:(id)arg2 index:(unsigned long long *)arg3;
- (BOOL)_matchedChar:(unsigned short)arg1 localizedMessageIfMissing:(id)arg2 index:(unsigned long long *)arg3;
- (BOOL)_notAtEndWithIndex:(unsigned long long)arg1;
- (int)_statusMatchingTypeString:(id)arg1 index:(unsigned long long *)arg2 errorRange:(struct _NSRange *)arg3 remainingString:(id *)arg4;
- (void)_setMessage:(id)arg1 oneCharRangeAt:(unsigned long long)arg2;
- (unsigned long long)_whitespaceFromIndex:(unsigned long long)arg1;

@end
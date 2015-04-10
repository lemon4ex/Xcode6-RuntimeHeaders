//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBAnnotation : DVTTextAnnotation
{
    NSMutableSet *_referencingLocations;
    NSString *expectedEndPointClassName;
    BOOL shouldDisplayInverted;
    BOOL rolledOver;
    NSString *_annotationName;
    NSString *_containingClassName;
    unsigned long long _kind;
    struct CGRect _lastRectDrawnIn;
}

+ (id)invertedConnectionInterfaceStyle;
+ (id)connectionInterfaceStyle;
@property unsigned long long kind; // @synthesize kind=_kind;
@property(retain) NSString *containingClassName; // @synthesize containingClassName=_containingClassName;
@property(retain) NSString *annotationName; // @synthesize annotationName=_annotationName;
@property struct CGRect lastRectDrawnIn; // @synthesize lastRectDrawnIn=_lastRectDrawnIn;
@property(copy, nonatomic) NSString *expectedEndPointClassName; // @synthesize expectedEndPointClassName;
@property(nonatomic) BOOL shouldDisplayInverted; // @synthesize shouldDisplayInverted;
@property(readonly) NSSet *referencingLocations; // @synthesize referencingLocations=_referencingLocations;
@property(nonatomic) BOOL rolledOver; // @synthesize rolledOver;
- (void).cxx_destruct;
- (id)annotationDisplayDescription;
- (id)annotationDisplayName;
- (id)description;
- (void)drawSidebarMarkerIconInRect:(struct CGRect)arg1 textView:(id)arg2;
- (void)setWantsReplaceLineNumber:(BOOL)arg1;
- (void)updateMarkerImage;
@property(readonly) BOOL isConnected;
- (void)removeReferenceFromLocation:(id)arg1;
- (void)addReferenceFromLocation:(id)arg1;
- (void)purgeAllReferences;
- (long long)relationshipType;
- (id)initWithName:(id)arg1 inClassNamed:(id)arg2 kind:(unsigned long long)arg3;

@end
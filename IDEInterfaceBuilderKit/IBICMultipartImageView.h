//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBICMultipartImageView : DVTLayoutView_ML <NSTextFieldDelegate>
{
    NSMutableDictionary *_repIDsToImageRepViews;
    NSMutableDictionary *_slotsToImageRepViews;
    NSMutableDictionary *_sectionsToGroupsToFooters;
    NSSet *_imageRepIdentifiers;
    NSEvent *_lastMouseDown;
    NSTextField *_titleField;
    IBICMultipartImageSectionTitleView *_unassignedImagesFootter;
    IBNinePartImage *_titleHighlightImage;
    IBNinePartImage *_borderImage;
    struct CGRect _titleHighlightFrame;
    Class _slotClass;
    BOOL _drawsWithKeyAppearance;
    BOOL _wholeSetShowsSelection;
    BOOL _wholeSetShowsContextFocus;
    BOOL _drawsBottomBorder;
    BOOL _titleIsEditing;
    id <IBICMultipartImageViewDelegate> _delegate;
    NSString *_title;
}

+ (id)normalOuterBorderColor;
+ (id)titleTextField;
+ (void)initialize;
@property(nonatomic) BOOL titleIsEditing; // @synthesize titleIsEditing=_titleIsEditing;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) BOOL drawsBottomBorder; // @synthesize drawsBottomBorder=_drawsBottomBorder;
@property(nonatomic) BOOL wholeSetShowsContextFocus; // @synthesize wholeSetShowsContextFocus=_wholeSetShowsContextFocus;
@property(nonatomic) BOOL wholeSetShowsSelection; // @synthesize wholeSetShowsSelection=_wholeSetShowsSelection;
@property(nonatomic) BOOL drawsWithKeyAppearance; // @synthesize drawsWithKeyAppearance=_drawsWithKeyAppearance;
@property(nonatomic) __weak id <IBICMultipartImageViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGRect)titleHighlightFrameForTitleFrame:(struct CGRect)arg1;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (BOOL)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
- (void)keyDown:(id)arg1;
- (void)deleteForward:(id)arg1;
- (void)deleteBackward:(id)arg1;
- (void)performDelete:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)delegateSelectionHandlingForMouseEvent:(id)arg1;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)acceptsFirstResponder;
- (struct CGRect)bandSelectionFrameForRepIdentifier:(id)arg1;
- (void)refreshHighlightState;
- (void)setTitleHighlightImage:(id)arg1;
- (void)setBorderImage:(id)arg1;
- (long long)effectiveBorderStyle;
- (double)effectiveOutterBorderStrokeWidth;
- (id)effectiveTitleColor;
- (id)effectiveOuterBorderColor;
- (void)setTitleHighlightFrame:(struct CGRect)arg1;
- (void)layoutBottomUp;
- (void)layoutTopDown;
- (void)layoutUnassignedMatrix:(id)arg1 withSizingInfo:(CDStruct_3d08495f *)arg2 yPosition:(double *)arg3;
- (void)layoutSlotReps:(id)arg1 withSizingInfo:(CDStruct_3d08495f *)arg2 yPosition:(double *)arg3;
- (void)invokeWithSizingInfoForSections:(id)arg1 andUnassignedMatrix:(id)arg2 block:(CDUnknownBlockType)arg3;
- (struct CGSize)repRowContentSize:(id)arg1;
- (void)populateLayoutOrder:(id)arg1 andUnassignedMatrix:(id)arg2;
- (id)targettedRepIdentifiersAtPoint:(struct CGPoint)arg1;
- (id)hitTestForDetailAreaKeyAtPoint:(struct CGPoint)arg1;
- (id)imageRepIdentifierAtPoint:(struct CGPoint)arg1;
- (BOOL)isImageRepID:(id)arg1 hitByPoint:(struct CGPoint)arg2;
- (struct CGRect)frameForImageOfImageRepWithIdentifier:(id)arg1;
- (BOOL)isFlipped;
- (void)reloadValues;
- (void)setImageRepIdentifiers:(id)arg1 andSlotClass:(Class)arg2;
- (id)groupFooterViewForGroup:(id)arg1 inSection:(id)arg2;
- (id)installNewGroupFooter;
- (id)addImageRepViewToTable:(id)arg1 forKey:(id)arg2;
- (void)removeViewFromTable:(id)arg1 forKey:(id)arg2;
- (void)installView:(id)arg1;
- (void)uninstallView:(id)arg1;
- (void)setHighlightedDragDestinations:(id)arg1;
- (void)setContextFocusedIdentifiers:(id)arg1;
- (void)setSelectedIdentifiers:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
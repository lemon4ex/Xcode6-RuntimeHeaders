//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol DVTDraggingInfo <NSDraggingInfo>
@property(retain, nonatomic) NSSet *draggingSnapGuides;
- (void)invalidateObjectAtEndOfDragLoop:(id <DVTInvalidation>)arg1;
- (struct CGPoint)draggingLocationOnScreen;
- (NSDictionary *)draggingSourceContext;
- (void)setDraggedImageStateNeedsUpdate:(BOOL)arg1;
- (struct CGSize)draggingStickiness;
- (void)setDraggingStickiness:(struct CGSize)arg1;
- (DVTDraggedImageState *)draggedImageState;
@end
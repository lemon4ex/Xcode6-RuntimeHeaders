//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol IBICDetailDocumentViewDelegate <IBViewDragDelegate>
- (void)detailDocumentViewLayoutDidComplete:(IBICDetailDocumentView *)arg1;
- (void)detailDocumentViewWillLayoutTopDown:(IBICDetailDocumentView *)arg1;
- (void)detailDocumentView:(IBICDetailDocumentView *)arg1 cancelPreview:(id)arg2;
- (void)detailDocumentView:(IBICDetailDocumentView *)arg1 togglePreview:(id)arg2;
- (void)detailDocumentView:(IBICDetailDocumentView *)arg1 performDelete:(id)arg2;
- (void)detailDocumentViewDidFinishBandSelecting:(IBICDetailDocumentView *)arg1;
- (void)detailDocumentView:(IBICDetailDocumentView *)arg1 didUpdateBandSelectionRect:(struct CGRect)arg2 withEvent:(NSEvent *)arg3 andInitialSelection:(NSSet *)arg4;
- (NSSet *)detailDocumentViewInitialSelectionForBandSelection:(IBICDetailDocumentView *)arg1;
- (void)detailDocumentView:(IBICDetailDocumentView *)arg1 didTrackContextMenuFromEvent:(NSEvent *)arg2;
- (void)detailDocumentView:(IBICDetailDocumentView *)arg1 willTrackContextMenuFromEvent:(NSEvent *)arg2;
- (NSMenu *)detailDocumentView:(IBICDetailDocumentView *)arg1 menuForEvent:(NSEvent *)arg2;
@end
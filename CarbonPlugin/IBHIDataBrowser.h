//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBHIDataBrowser : IBHIView
{
    int columnWidth;
    int rowHeight;
    BOOL variableWidthColumns;
    BOOL variableHeightRows;
    BOOL showFocusRing;
}

- (void)setShowFocusRing:(BOOL)arg1;
- (BOOL)showFocusRing;
- (void)setVariableHeightRows:(BOOL)arg1;
- (BOOL)variableHeightRows;
- (void)setVariableWidthColumns:(BOOL)arg1;
- (BOOL)variableWidthColumns;
- (void)setRowHeight:(int)arg1;
- (int)rowHeight;
- (void)setColumnWidth:(int)arg1;
- (int)columnWidth;
- (struct IBInsetTag)structureOutset;
- (void)customizeView:(struct OpaqueControlRef *)arg1;
- (BOOL)supportsControlSize:(unsigned short)arg1;
- (void)buildDesignTimeCodingDescription:(id)arg1;

@end
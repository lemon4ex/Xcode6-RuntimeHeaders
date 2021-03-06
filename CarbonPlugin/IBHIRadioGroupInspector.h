//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBHIRadioGroupInspector : IBHIInspector
{
    NSTextField *rowsTextField;
    NSTextField *columnsTextField;
    NSTextField *selectedRowTextField;
    NSTextField *selectedColumnTextField;
    NSTextField *editedTitleTextField;
    NSStepper *rowsStepper;
    NSStepper *columnsStepper;
    NSStepper *selectedRowStepper;
    NSStepper *selectedColumnStepper;
    NSStepper *titleRowStepper;
    NSStepper *titleColStepper;
    NSNumberFormatter *colFormatter;
    NSNumberFormatter *rowFormatter;
    int editedTitleRow;
    int editedTitleCol;
}

+ (id)keyPathsForValuesAffectingEditedRowAndColumnValid;
+ (id)keyPathsForValuesAffectingEditedTitle;
+ (id)keyPathsForValuesAffectingSingleSelection;
- (void)setEditedTitleCol:(int)arg1;
- (int)editedTitleCol;
- (void)setEditedTitleRow:(int)arg1;
- (int)editedTitleRow;
- (void)setEditedTitle:(id)arg1;
- (id)editedTitle;
- (BOOL)isEditedRowAndColumnValid;
- (BOOL)isSingleSelection;
- (id)affectedKeyPathsOfInspectedObjectsForView:(id)arg1;
- (void)refresh;
- (void)awakeFromNib;

@end
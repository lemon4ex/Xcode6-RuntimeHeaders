//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDEProgressSearchField : DVTFindPatternSearchField <DVTInvalidation>
{
    NSString *_sanatizedSuggestionString;
    NSTableView *_suggestionTableView;
    NSTableColumn *_suggestionTitleColumn;
    NSWindow *_suggestionWindow;
    NSArray *_suggestionItems;
    NSArray *_allVisibleSuggestions;
    IDEProgressSearchSuggestionItem *_selectedSuggestionItem;
    id <IDEProgressSearchFieldCommandDelegate> _commandDelegate;
    id <IDEProgressSearchFieldDelegate> _searchFieldDelegate;
}

+ (Class)cellClass;
+ (void)initialize;
@property(retain) id <IDEProgressSearchFieldDelegate> searchFieldDelegate; // @synthesize searchFieldDelegate=_searchFieldDelegate;
@property(retain) id <IDEProgressSearchFieldCommandDelegate> commandDelegate; // @synthesize commandDelegate=_commandDelegate;
@property(copy, nonatomic) NSArray *suggestionItems; // @synthesize suggestionItems=_suggestionItems;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 dataCellForTableColumn:(id)arg2 row:(long long)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)_selectionMade:(id)arg1;
- (void)_controlTextDidChange:(id)arg1;
- (void)_updateMenu;
- (void)_generateMenuWindow;
- (void)_refreshTable;
- (BOOL)textView:(id)arg1 doCommandBySelector:(SEL)arg2;
- (void)controlTextDidChange:(id)arg1;
- (void)controlTextDidEndEditing:(id)arg1;
@property(retain) IDEProgressSearchSuggestionItem *selectedSuggestionItem;
- (void)hideSuggestions;
- (void)showSuggestions;
@property(readonly) BOOL suggestionsVisible;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(readonly) NSArray *allVisibleSuggestions;
- (void)ide_progressSearchField_setup;
- (void)primitiveInvalidate;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly) _IDEProgressSearchFieldCell *cell;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end
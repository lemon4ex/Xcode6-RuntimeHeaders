//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol XCEDataRootAdapterP <NSObject>

@optional
- (BOOL)dataSource:(XCEConfigurableDataSource *)arg1 filterDisplayedRootNode:(XCEConfigurableDataNode *)arg2;
- (void)dataSource:(XCEConfigurableDataSource *)arg1 acceptDroppedItems:(NSArray *)arg2 atChildIndex:(long long)arg3;
- (BOOL)dataSource:(XCEConfigurableDataSource *)arg1 canAcceptDroppedItem:(id)arg2 atChildIndex:(long long)arg3;
- (BOOL)useOrganizerStyleDragAndDrop;
- (void)dataSource:(XCEConfigurableDataSource *)arg1 outlineView:(NSOutlineView *)arg2 sortDescriptorsDidChange:(NSArray *)arg3;
- (BOOL)dataSource:(XCEConfigurableDataSource *)arg1 control:(NSControl *)arg2 didFailToFormatString:(NSString *)arg3 errorDescription:(NSString *)arg4;
- (unsigned long long)outlineView:(NSOutlineView *)arg1 validateDrop:(id <NSDraggingInfo>)arg2 proposedItem:(id)arg3 proposedChildIndex:(long long)arg4;
- (BOOL)outlineView:(NSOutlineView *)arg1 acceptDrop:(id <NSDraggingInfo>)arg2 item:(id)arg3 childIndex:(long long)arg4;
- (BOOL)outlineView:(NSOutlineView *)arg1 createItemsFromPasteboard:(NSPasteboard *)arg2;
- (BOOL)outlineView:(NSOutlineView *)arg1 writeItems:(NSArray *)arg2 toPasteboard:(NSPasteboard *)arg3;
- (NSArray *)dataSource:(XCEConfigurableDataSource *)arg1 pasteboardFilenamesForNodes:(NSArray *)arg2;
- (NSMenu *)dataSource:(XCEConfigurableDataSource *)arg1 contextMenuForSelectedNodes:(NSArray *)arg2;
- (void)dataSource:(XCEConfigurableDataSource *)arg1 askToDeleteRootNodes:(NSArray *)arg2 nonRootNodes:(NSArray *)arg3;
- (void)updateAndSaveRoots;
- (void)textDidEndEditing;
- (BOOL)selectDataNode:(XCEConfigurableDataNode *)arg1;
- (BOOL)doubleClickDataNode:(XCEConfigurableDataNode *)arg1 inColumn:(NSTableColumn *)arg2;
- (BOOL)removeRootDataNode:(XCEConfigurableDataNode *)arg1;
- (BOOL)moveDataNodes:(NSArray *)arg1 toRootIndex:(long long)arg2;
- (BOOL)addRootPaths:(NSArray *)arg1 atIndex:(long long)arg2;
@end
//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBViewCoreAnimationEnabledInspector : IBInspector
{
    NSArrayController *viewArrayController;
    NSView *warningView;
    NSTableColumn *viewNameAndImageColumn;
}

+ (BOOL)supportsMultipleObjectInspection;
- (void)refresh;
- (id)label;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (void)awakeFromNib;

@end
//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDELanguageServiceAvailabilityBanner : IDEViewController <DVTScopeBarContentController>
{
    NSArray *_phrases;
    double _preferredViewHeight;
    double *_cachedMessageTextWidths;
    DVTObservingToken *_viewFrameObservingToken;
    NSString *_messageText;
    NSTextField *_messageTextField;
    DVTButtonTextField *_reportErrorButtonTextField;
    NSString *_toolTip;
}

@property(copy) NSString *toolTip; // @synthesize toolTip=_toolTip;
@property(retain) DVTButtonTextField *reportErrorButtonTextField; // @synthesize reportErrorButtonTextField=_reportErrorButtonTextField;
@property(retain) NSTextField *messageTextField; // @synthesize messageTextField=_messageTextField;
@property(copy) NSString *messageText; // @synthesize messageText=_messageText;
- (void).cxx_destruct;
- (void)_reportErrorButtonTextFieldAction:(id)arg1;
- (void)wasAssociatedWithScopeBarController:(id)arg1;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (void)loadView;
- (void)_updateMessageText;
@property(readonly) NSImage *icon;
@property double preferredViewHeight; // @synthesize preferredViewHeight=_preferredViewHeight;
- (void)primitiveInvalidate;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
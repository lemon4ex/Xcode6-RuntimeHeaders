//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface _IDELocalizationStreamBlockBased : IDELocalizationStream
{
    CDUnknownBlockType _onNextBlock;
    CDUnknownBlockType _onErrorBlock;
    CDUnknownBlockType _onCompletedBlock;
}

@property(copy) CDUnknownBlockType onCompletedBlock; // @synthesize onCompletedBlock=_onCompletedBlock;
@property(copy) CDUnknownBlockType onErrorBlock; // @synthesize onErrorBlock=_onErrorBlock;
@property(copy) CDUnknownBlockType onNextBlock; // @synthesize onNextBlock=_onNextBlock;
- (void).cxx_destruct;
- (void)onCompleted;
- (void)onError:(id)arg1;
- (void)onNext:(id)arg1;
- (id)initWithOnNextBlock:(CDUnknownBlockType)arg1 onErrorBlock:(CDUnknownBlockType)arg2 onCompletedBlock:(CDUnknownBlockType)arg3;

@end
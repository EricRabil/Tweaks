//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WorkflowKit/ICDocumentAction.h>

@class WFFileRepresentation;

@interface ICPostToInstagramAction : ICDocumentAction
{
    WFFileRepresentation *_instagramRepresentation;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WFFileRepresentation *instagramRepresentation; // @synthesize instagramRepresentation=_instagramRepresentation;
- (void)shareAsImageFileWithItem:(id)arg1 caption:(id)arg2 userInterface:(id)arg3 successHandler:(CDUnknownBlockType)arg4 errorHandler:(CDUnknownBlockType)arg5;
- (void)shareAsALAssetWithItem:(id)arg1 caption:(id)arg2 userInterface:(id)arg3 successHandler:(CDUnknownBlockType)arg4 errorHandler:(CDUnknownBlockType)arg5;
- (void)performActionWithInput:(id)arg1 parameters:(id)arg2 userInterface:(id)arg3 successHandler:(CDUnknownBlockType)arg4 errorHandler:(CDUnknownBlockType)arg5;
- (id)inputContentClasses;
- (void)appDidResume:(id)arg1;
- (void)dealloc;

@end


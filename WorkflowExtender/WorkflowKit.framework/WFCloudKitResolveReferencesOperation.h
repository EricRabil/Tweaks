//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WorkflowKit/WFCloudKitAsyncOperation.h>

@class CKFetchRecordsOperation, CKOperationGroup, NSArray, WFCloudKitItemRequest, WFCloudKitItemTask;

@interface WFCloudKitResolveReferencesOperation : WFCloudKitAsyncOperation
{
    WFCloudKitItemRequest *_request;
    NSArray *_records;
    CKOperationGroup *_operationGroup;
    CKFetchRecordsOperation *_currentOperation;
    WFCloudKitItemTask *_task;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WFCloudKitItemTask *task; // @synthesize task=_task;
@property(retain, nonatomic) CKFetchRecordsOperation *currentOperation; // @synthesize currentOperation=_currentOperation;
@property(readonly, nonatomic) CKOperationGroup *operationGroup; // @synthesize operationGroup=_operationGroup;
@property(readonly, nonatomic) NSArray *records; // @synthesize records=_records;
@property(readonly, nonatomic) __weak WFCloudKitItemRequest *request; // @synthesize request=_request;
- (void)cancel;
- (void)start;
- (id)initWithRequest:(id)arg1 records:(id)arg2 operationGroup:(id)arg3 task:(id)arg4;

@end

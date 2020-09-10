//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WorkflowKit/NSObject-Protocol.h>

@class CKRecordID, NSDate, NSDictionary, NSString;

@protocol WFCloudKitItem <NSObject>
+ (NSDictionary *)properties;
+ (NSString *)recordType;
@property(readonly, nonatomic) CKRecordID *identifier;

@optional
- (void)ensureFileAssets;
- (void)setCreatedAt:(NSDate *)arg1 modifiedAt:(NSDate *)arg2 createdBy:(NSString *)arg3;
- (unsigned long long)referenceActionForKey:(NSString *)arg1;
@end


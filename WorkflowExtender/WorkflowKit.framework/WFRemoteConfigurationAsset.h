//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WorkflowKit/WFCloudKitItem-Protocol.h>

@class CKRecordID, NSNumber, NSString, WFFileRepresentation;

@interface WFRemoteConfigurationAsset : NSObject <WFCloudKitItem>
{
    CKRecordID *identifier;
    NSString *_assetType;
    NSString *_shortVersion;
    WFFileRepresentation *_assetDataFile;
    NSString *_configuration;
    NSNumber *_buildNumber;
}

+ (id)properties;
+ (id)recordType;
- (void).cxx_destruct;
@property(copy, nonatomic) NSNumber *buildNumber; // @synthesize buildNumber=_buildNumber;
@property(copy, nonatomic) NSString *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) WFFileRepresentation *assetDataFile; // @synthesize assetDataFile=_assetDataFile;
@property(retain, nonatomic) NSString *shortVersion; // @synthesize shortVersion=_shortVersion;
@property(retain, nonatomic) NSString *assetType; // @synthesize assetType=_assetType;
@property(readonly, nonatomic) CKRecordID *identifier; // @synthesize identifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

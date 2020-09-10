//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WorkflowKit/WFTrigger.h>

@class NSArray, NSString;

@interface WFEmailTrigger : WFTrigger
{
    NSString *_selectedAccount;
    NSString *_selectedSubject;
    NSArray *_selectedRecipients;
    NSArray *_selectedSenders;
    unsigned long long _attachmentConfiguration;
}

+ (_Bool)supportsSecureCoding;
+ (id)localizedDisplayExplanation;
+ (id)localizedDisplayName;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long attachmentConfiguration; // @synthesize attachmentConfiguration=_attachmentConfiguration;
@property(retain, nonatomic) NSArray *selectedSenders; // @synthesize selectedSenders=_selectedSenders;
@property(retain, nonatomic) NSArray *selectedRecipients; // @synthesize selectedRecipients=_selectedRecipients;
@property(retain, nonatomic) NSString *selectedSubject; // @synthesize selectedSubject=_selectedSubject;
@property(retain, nonatomic) NSString *selectedAccount; // @synthesize selectedAccount=_selectedAccount;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)localizedPastTenseDescription;
- (id)localizedDescriptionWithConfigurationSummary;
- (_Bool)hasValidConfiguration;

@end


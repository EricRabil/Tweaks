//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSUserDefaults.h>

@interface NSUserDefaults (Workflow)
+ (id)siriAssistantUserDefaults;
+ (id)systemShortcutsUserDefaults;
+ (id)workflowUserDefaults;
- (id)workflowIdentifierConsumingSingleUseToken:(id)arg1;
- (void)setWorkflowIdentifier:(id)arg1 forToken:(id)arg2;
- (_Bool)wf_voiceParametersDisabled;
- (_Bool)wf_isDeviceIdiomDisabledInSiri:(long long)arg1;
- (_Bool)wf_isCurrentDeviceModelDisabledInSiri;
- (void)wf_registerDefaultDisabledDevices;
- (id)wf_keyForDisablingDeviceIdiom:(long long)arg1;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WorkflowKit/WFAction.h>

@class ICAction, NSArray;

@interface WFInterchangeAction : WFAction
{
    ICAction *_interchangeAction;
    NSArray *_contentClasses;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *contentClasses; // @synthesize contentClasses=_contentClasses;
@property(readonly, nonatomic) ICAction *interchangeAction; // @synthesize interchangeAction=_interchangeAction;
- (void)performActionWithInput:(id)arg1 parameters:(id)arg2 userInterface:(id)arg3 successHandler:(CDUnknownBlockType)arg4 errorHandler:(CDUnknownBlockType)arg5;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (_Bool)skipsProcessingHiddenParameters;
- (id)unsupportedEnvironments;
- (_Bool)mappedValueIsTrue:(id)arg1 forContentMapping:(id)arg2;
- (_Bool)callbackIsCurrentlyDisabled;
- (_Bool)shouldSuppressCallback;
@property(readonly, nonatomic) _Bool requiresCallback;
- (_Bool)neverSuggested;
- (_Bool)outputsMultipleItems;
- (_Bool)inputsMultipleItems;
- (id)outputContentClasses;
- (id)specifiedOutputContentClasses;
- (id)inputContentClasses;
- (id)specifiedInputContentClasses;
- (id)inputParameterKey;
- (_Bool)inputPassthrough;
- (_Bool)inputRequired;
- (id)app;
- (id)userInterfaceTypes;
- (id)requiredResources;
- (_Bool)isDiscoverable;
- (_Bool)isDiscontinued;
- (id)lastModifiedDate;
- (id)creationDate;
- (id)keywords;
- (id)descriptionDictionary;
- (id)subcategoryForCategory:(id)arg1;
- (id)categories;
- (id)parameterSummary;
- (id)shortName;
- (id)name;
- (id)description;
- (id)initWithInterchangeAction:(id)arg1 identifier:(id)arg2 definition:(id)arg3 serializedParameters:(id)arg4;
- (id)initWithInterchangeAction:(id)arg1 serializedParameters:(id)arg2;
- (id)initWithIdentifier:(id)arg1 definition:(id)arg2 serializedParameters:(id)arg3;

@end

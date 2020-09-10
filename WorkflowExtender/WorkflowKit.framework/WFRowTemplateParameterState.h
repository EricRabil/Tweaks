//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WorkflowKit/WFParameterState-Protocol.h>

@class NSArray, NSString, WFBooleanSubstitutableState, WFByteCountUnitSubstitutableState, WFCalendarUnitSubstitutableState, WFContentProperty, WFDateSubstitutableState, WFNumberStringSubstitutableState, WFVariableStringParameterState, WFVariableSubstitutableParameterState;

@interface WFRowTemplateParameterState : NSObject <WFParameterState>
{
    NSString *_propertyName;
    _Bool _variablesDisabled;
    _Bool _removable;
    _Bool _bounded;
    _Bool _hidden;
    Class _contentItemClass;
    WFContentProperty *_contentProperty;
    NSArray *_contentProperties;
    long long _comparisonOperator;
    WFVariableSubstitutableParameterState *_enumerationValue;
    WFVariableStringParameterState *_stringValue;
    WFBooleanSubstitutableState *_booleanValue;
    WFNumberStringSubstitutableState *_numberValue;
    WFVariableStringParameterState *_phoneValue;
    WFVariableStringParameterState *_emailValue;
    WFCalendarUnitSubstitutableState *_calendarUnitValue;
    WFByteCountUnitSubstitutableState *_byteCountUnitValue;
    WFDateSubstitutableState *_dateValue;
    WFDateSubstitutableState *_anotherDateValue;
}

+ (Class)processingValueClass;
- (void).cxx_destruct;
@property(readonly, nonatomic) WFDateSubstitutableState *anotherDateValue; // @synthesize anotherDateValue=_anotherDateValue;
@property(readonly, nonatomic) WFDateSubstitutableState *dateValue; // @synthesize dateValue=_dateValue;
@property(readonly, nonatomic) WFByteCountUnitSubstitutableState *byteCountUnitValue; // @synthesize byteCountUnitValue=_byteCountUnitValue;
@property(readonly, nonatomic) WFCalendarUnitSubstitutableState *calendarUnitValue; // @synthesize calendarUnitValue=_calendarUnitValue;
@property(readonly, nonatomic) WFVariableStringParameterState *emailValue; // @synthesize emailValue=_emailValue;
@property(readonly, nonatomic) WFVariableStringParameterState *phoneValue; // @synthesize phoneValue=_phoneValue;
@property(readonly, nonatomic) WFNumberStringSubstitutableState *numberValue; // @synthesize numberValue=_numberValue;
@property(readonly, nonatomic) WFBooleanSubstitutableState *booleanValue; // @synthesize booleanValue=_booleanValue;
@property(readonly, nonatomic) WFVariableStringParameterState *stringValue; // @synthesize stringValue=_stringValue;
@property(readonly, nonatomic) WFVariableSubstitutableParameterState *enumerationValue; // @synthesize enumerationValue=_enumerationValue;
@property(readonly, nonatomic) _Bool hidden; // @synthesize hidden=_hidden;
@property(readonly, nonatomic) _Bool bounded; // @synthesize bounded=_bounded;
@property(readonly, nonatomic) _Bool removable; // @synthesize removable=_removable;
@property(readonly, nonatomic) long long comparisonOperator; // @synthesize comparisonOperator=_comparisonOperator;
@property(readonly, nonatomic) _Bool variablesDisabled; // @synthesize variablesDisabled=_variablesDisabled;
@property(readonly, copy, nonatomic) NSArray *contentProperties; // @synthesize contentProperties=_contentProperties;
@property(readonly, nonatomic) WFContentProperty *contentProperty; // @synthesize contentProperty=_contentProperty;
@property(readonly, nonatomic) Class contentItemClass; // @synthesize contentItemClass=_contentItemClass;
- (id)stateBySettingAnotherDateValue:(id)arg1;
- (id)stateBySettingDateValue:(id)arg1;
- (id)stateBySettingByteCountUnitValue:(id)arg1;
- (id)stateBySettingCalendarUnitValue:(id)arg1;
- (id)stateBySettingEmailValue:(id)arg1;
- (id)stateBySettingPhoneValue:(id)arg1;
- (id)stateBySettingNumberValue:(id)arg1;
- (id)stateBySettingBooleanValue:(id)arg1;
- (id)stateBySettingStringValue:(id)arg1;
- (id)stateBySettingEnumerationValue:(id)arg1;
- (id)stateBySettingVariablesDisabled:(_Bool)arg1;
- (id)stateBySettingComparisonOperator:(long long)arg1;
- (id)stateBySettingContentProperty:(id)arg1;
- (id)actualCopyWithZone:(struct _NSZone *)arg1;
- (id)actualCopyWithZone:(struct _NSZone *)arg1 propertyName:(id)arg2;
- (void)processWithContext:(id)arg1 userInputRequiredHandler:(CDUnknownBlockType)arg2 valueHandler:(CDUnknownBlockType)arg3;
- (void)getUserInputRequiredValue:(CDUnknownBlockType)arg1 context:(id)arg2;
- (id)defaultStateForInfo:(const struct WFRowTemplateValueInfo *)arg1;
- (_Bool)isValueWithInfoDisplayed:(const struct WFRowTemplateValueInfo *)arg1;
- (id)containedVariables;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSArray *filterableProperties;
- (id)serializedRepresentation;
- (id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3 contentItemClass:(Class)arg4 variablesDisabled:(_Bool)arg5;
- (id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3;
- (id)initWithPropertyName:(id)arg1 contentItemClass:(Class)arg2 comparisonOperator:(long long)arg3 removable:(_Bool)arg4 bounded:(_Bool)arg5 hidden:(_Bool)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

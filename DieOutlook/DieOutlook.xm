@interface CMARConditionalAccessManagerImpl: NSObject
@end

%hook CMARConditionalAccessManagerImpl
-(void)callDelegateWithStatus:(int)arg2 andIdentity:(void *)arg3 {
	%orig(0, arg3);
}
%end
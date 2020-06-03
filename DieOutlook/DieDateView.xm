@interface CMARMamComplianceData: NSObject
@end

%hook CMARMamComplianceData
-(void)parseComplianceFromData:(void *)arg2 {
	return 0x1;
}
%end
#import "MANoiseCancellationController.h"

@implementation MANoiseCancellationController
+ (instancetype) sharedController {
  static MANoiseCancellationController *sharedController = nil;
  static dispatch_once_t onceToken;
  dispatch_once(&onceToken, ^{
    sharedController = [[self alloc] init];
  });
  return sharedController;
}
- (void) invertListeningMode {
  MPAVRoutingController *controller = [[%c(SBMediaController) sharedInstance] valueForKey:@"_routingController"];
	if (!controller) {
		// ?!?!?!??!?!?!!
		return;
	}
  NSArray *pickedRoutes = [controller pickedRoutes];
	for (MPAVOutputDeviceRoute *object in pickedRoutes) {
		// NOT WANT
		if ([object isMemberOfClass: %c(MPAVOutputDeviceRoute)] == NO) continue;
		// NOT WANT
		if ([object isAirpodsRoute] == NO) continue;
		for (MRAVConcreteOutputDevice *output in [object outputDevices]) {
			// NOT WANT
			if ([output isMemberOfClass: %c(MRAVConcreteOutputDevice)] == NO) continue;
			NSArray *availableModes = [output availableBluetoothListeningModes];
			NSString *uid = [output uid];
			// parses the mac address so we can snatch her from bluetoothmanager
			uid = [uid substringToIndex:17];
			BluetoothManager *manager = [%c(BluetoothManager) sharedInstance];
			NSMutableDictionary *btAddrDict = [manager valueForKey:@"_btAddrDict"];
			NSString *btId = [btAddrDict objectForKey: uid];
			NSMutableDictionary *btDeviceDict = [manager valueForKey:@"_btDeviceDict"];
			NSArray *keys = [btDeviceDict allKeys];
			BluetoothDevice *device = nil;
			for (BluetoothDevice *dev in keys) {
				NSString *value = [btDeviceDict objectForKey:dev];
				if ([value isEqual:btId]) {
					device = (BluetoothDevice *) value;
					break;
				}
			}
			if (!device) {
				// WTF?
				return;
			}
			unsigned int listeningMode = [device listeningMode];
			if (listeningMode == 0) {
				// NOT AIRPODS. FUCKING RUN
				return;
			}
			NSString *goalMode;

			if (listeningMode == 2) goalMode = [availableModes objectAtIndex:2];
			else goalMode = [availableModes objectAtIndex:1];
			[output setCurrentBluetoothListeningMode:goalMode error:nil];
		}
	}
}
@end
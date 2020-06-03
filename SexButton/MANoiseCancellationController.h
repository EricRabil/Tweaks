#import <Foundation/Foundation.h>

@interface MRAVConcreteOutputDevice: NSObject {}
-(BOOL)setCurrentBluetoothListeningMode:(id)mode error:(id *)err;
-(NSArray *)availableBluetoothListeningModes;
-(NSString *)uid;
@end

@interface MPAVOutputDeviceRoute: NSObject {}
-(NSArray *)outputDevices;
-(BOOL)isAirpodsRoute;
@end

@interface MPAVRoutingController: NSObject {}
@property(readonly, nonatomic) NSArray *pickedRoutes;
@end

@interface SBMediaController: NSObject {
	MPAVRoutingController *_routingController;
}
+ (id)sharedInstance;
@end

@interface BluetoothDevice: NSObject {}
-(unsigned int)listeningMode;
@end

@interface BluetoothManager: NSObject {}
+(id)sharedInstance;
@end

@interface MANoiseCancellationController: NSObject
+ (instancetype) sharedController;
- (void) invertListeningMode;
@end
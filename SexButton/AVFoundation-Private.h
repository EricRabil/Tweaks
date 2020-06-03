
#import <AVFoundation/AVFoundation.h>

@interface AVOutputDevice: NSObject

@property(readonly, nonatomic) NSString *currentBluetoothListeningMode;
@property(readonly, nonatomic) NSArray *availableBluetoothListeningModes;
- (BOOL)setCurrentBluetoothListeningMode:(NSString *)mode error:(NSError **)outError;

@property (readonly, nonatomic) NSString *deviceID;
@property (readonly, nonatomic) NSString *name;

@end

@interface AVOutputContext: NSObject
+ (instancetype)sharedSystemAudioContext;
@property (nonatomic, readonly) NSArray <AVOutputDevice *> *outputDevices;
@end
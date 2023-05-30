//
//  Power.h
//  Autumn
//

#import <Foundation/Foundation.h>
#import "Module.h"
#import <CoreGraphics/CoreGraphics.h>

@protocol JSExport_Power <JSExport>

+ (NSDictionary*) getBatteryInfo;

+ (CFTimeInterval) userIdleTime;
+ (void(^)(void)) preventSleep;

@end

@interface Power : NSObject <JSExport_Power, Module>

@end

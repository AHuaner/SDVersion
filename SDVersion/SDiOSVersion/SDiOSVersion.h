//
//  SDiOSVersion.h
//  SDVersion
//
//  Copyright (c) 2016 Sebastian Dobrincu. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, DeviceVersion){
    UnknownDevice         = 0,
    Simulator             = 1,
	
    iPhone4               = 3,
    iPhone4S              = 4,
    iPhone5               = 5,
    iPhone5C              = 6,
    iPhone5S              = 7,
    iPhone6               = 8,
    iPhone6Plus           = 9,
    iPhone6S              = 10,
    iPhone6SPlus          = 11,
    iPhone7               = 12,
    iPhone7Plus           = 13,
    iPhone8               = 14,
    iPhone8Plus           = 15,
    iPhoneX               = 16,
    iPhoneSE              = 17,
    iPhoneXS              = 18,
    iPhoneXR              = 19,
    iPhoneXSMax           = 20,
    iPhone11              = 21,
    iPhone11Pro           = 22,
    iPhone11ProMax        = 23,
    iPhoneSE2nd           = 24,

    iPad1                 = 25,
    iPad2                 = 26,
    iPadMini              = 27,
    iPad3                 = 28,
    iPad4                 = 29,
    iPadAir               = 30,
    iPadMini2             = 31,
    iPadAir2              = 32,
    iPadMini3             = 33,
    iPadMini4             = 34,
    iPadPro12Dot9Inch     = 35,
    iPadPro9Dot7Inch      = 36,
    iPad5                 = 37,
    iPadPro12Dot9Inch2Gen = 38,
    iPadPro10Dot5Inch     = 39,
    iPad6                 = 40,
    iPad7                 = 41,
    iPadAir3              = 42,
    iPadMini5             = 43,
    iPadPro11Inch         = 44,
    iPadPro12Dot9Inch3Gen = 45,

    iPodTouch1Gen         = 46,
    iPodTouch2Gen         = 47,
    iPodTouch3Gen         = 48,
    iPodTouch4Gen         = 49,
    iPodTouch5Gen         = 50,
    iPodTouch6Gen         = 51
};

typedef NS_ENUM(NSInteger, DeviceSize){
    UnknownSize     = 0,
    Screen3Dot5inch = 1,
    Screen4inch     = 2,
    Screen4Dot7inch = 3,
    Screen5Dot5inch = 4,
    Screen5Dot8inch = 5,
    Screen6Dot1inch = 6,
    Screen6Dot5inch = 7
};

@interface SDiOSVersion : NSObject

+ (DeviceVersion)deviceVersion;
+ (NSString *)deviceNameForVersion:(DeviceVersion)deviceVersion;
+ (DeviceSize)resolutionSize;
+ (DeviceSize)deviceSize;
+ (NSString *)deviceSizeName:(DeviceSize)deviceSize;
+ (NSString *)deviceNameString;
+ (BOOL)isZoomed;

+ (BOOL)versionEqualTo:(NSString *)version;
+ (BOOL)versionGreaterThan:(NSString *)version;
+ (BOOL)versionGreaterThanOrEqualTo:(NSString *)version;
+ (BOOL)versionLessThan:(NSString *)version;
+ (BOOL)versionLessThanOrEqualTo:(NSString *)version;

@end

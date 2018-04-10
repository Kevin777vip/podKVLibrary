//
//  UIDevice+Hardware.h
//  JuMei
//
//  Created by Pinglin Tang on 13-5-17.
//  Copyright (c) 2013年 Jumei Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

#define IFPGA_NAMESTRING                @"iFPGA"

#define IPHONE_1G_NAMESTRING            @"iPhone 1G"
#define IPHONE_3G_NAMESTRING            @"iPhone 3G"
#define IPHONE_3GS_NAMESTRING           @"iPhone 3GS" 
#define IPHONE_4_NAMESTRING             @"iPhone 4" 
#define IPHONE_4S_NAMESTRING            @"iPhone 4S"
#define IPHONE_5_NAMESTRING             @"iPhone 5"
#define IPHONE_UNKNOWN_NAMESTRING       @"Unknown iPhone"

#define IPOD_1G_NAMESTRING              @"iPod touch 1G"
#define IPOD_2G_NAMESTRING              @"iPod touch 2G"
#define IPOD_3G_NAMESTRING              @"iPod touch 3G"
#define IPOD_4G_NAMESTRING              @"iPod touch 4G"
#define IPOD_UNKNOWN_NAMESTRING         @"Unknown iPod"

#define IPAD_1G_NAMESTRING              @"iPad 1G"
#define IPAD_2G_NAMESTRING              @"iPad 2G"
#define IPAD_3G_NAMESTRING              @"iPad 3G"
#define IPAD_4G_NAMESTRING              @"iPad 4G"
#define IPAD_UNKNOWN_NAMESTRING         @"Unknown iPad"

#define APPLETV_2G_NAMESTRING           @"Apple TV 2G"
#define APPLETV_3G_NAMESTRING           @"Apple TV 3G"
#define APPLETV_4G_NAMESTRING           @"Apple TV 4G"
#define APPLETV_UNKNOWN_NAMESTRING      @"Unknown Apple TV"

#define IOS_FAMILY_UNKNOWN_DEVICE       @"Unknown iOS device"

#define SIMULATOR_NAMESTRING            @"iPhone Simulator"
#define SIMULATOR_IPHONE_NAMESTRING     @"iPhone Simulator"
#define SIMULATOR_IPAD_NAMESTRING       @"iPad Simulator"
#define SIMULATOR_APPLETV_NAMESTRING    @"Apple TV Simulator" // :)

typedef enum {
    UIDeviceUnknown,
    
    UIDeviceSimulator,
    UIDeviceSimulatoriPhone,
    UIDeviceSimulatoriPad,
    UIDeviceSimulatorAppleTV,
    
    UIDevice1GiPhone,
    UIDevice3GiPhone,
    UIDevice3GSiPhone,
    UIDevice4iPhone,
    UIDevice4SiPhone,
    UIDevice5iPhone,
    
    UIDevice1GiPod,
    UIDevice2GiPod,
    UIDevice3GiPod,
    UIDevice4GiPod,
    UIDevice5GiPod,
    
    UIDevice1GiPad,
    UIDevice2GiPad,
    UIDevice3GiPad,
    UIDevice4GiPad,
    
    UIDeviceAppleTV2,
    UIDeviceAppleTV3,
    UIDeviceAppleTV4,
    
    UIDeviceUnknowniPhone,
    UIDeviceUnknowniPod,
    UIDeviceUnknowniPad,
    UIDeviceUnknownAppleTV,
    UIDeviceIFPGA,

} UIDevicePlatform;

typedef enum {
    UIDeviceFamilyiPhone,
    UIDeviceFamilyiPod,
    UIDeviceFamilyiPad,
    UIDeviceFamilyAppleTV,
    UIDeviceFamilyUnknown,
    
} UIDeviceFamily;

@interface UIDevice (Hardware)


- (NSString *) platform;

- (NSString *) hwmodel;

/**
 *    @brief 获取设备的名称
 *
 */
- (UIDevicePlatform) platformType;

/**
 *    @brief 获取设备的通俗名称，例如iPhone 4S
 *
 */
- (NSString *) platformString;

/**
 *    @brief 获取设备的CPU频率
 *
 */
- (NSUInteger) cpuFrequency;

/**
 *    @brief 获取设备的总线频率
 *
 */
- (NSUInteger) busFrequency;

/**
 *    @brief 获取设备的CPU核心数量
 *
 */
- (NSUInteger) cpuCount;

/**
 *    @brief 获取设备的RAM大小
 *
 */
- (NSUInteger) totalMemory;

/**
 *    @brief 获取设备可用的RAM大小
 *
 */
- (NSUInteger) userMemory;

/**
 *    @brief 获取设备存储空间
 *
 */
- (NSNumber *) totalDiskSpace;

/**
 *    @brief 获取设备可用存储空间
 *
 */
- (NSNumber *) freeDiskSpace;

/**
 *    @brief 获取设备mac地址
 *
 */
- (NSString *) macaddress;

/**
 *    @brief 判断是否是视网膜屏
 *
 */
- (BOOL) hasRetinaDisplay;

/**
 *    @brief 获取设备家族
 *
 */
- (UIDeviceFamily) deviceFamily;

@end
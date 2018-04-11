//
//  KVMecros.h
//  FengbangB
//
//  Created by kevin on 14/11/2017.
//  Copyright © 2017 kevin. All rights reserved.
//

#ifndef KVMecros_h
#define KVMecros_h

/***************单例模式宏**************/
#define MACRO_SHARED_INSTANCE_INTERFACE +(instancetype)sharedInstance;

#define MACRO_SHARED_INSTANCE_IMPLEMENTATION(CLASS) \
+(instancetype)sharedInstance \
{ \
static CLASS * sharedInstance = nil; \
static dispatch_once_t onceToken; \
dispatch_once(&onceToken, ^{ \
sharedInstance = [[CLASS alloc] init]; \
}); \
return sharedInstance; \
}

#define KV_SCREEN_WIDTH [UIScreen mainScreen].bounds.size.width
#define KV_SCREEN_HEIGHT [UIScreen mainScreen].bounds.size.height
#define KV_SAFE_TOP ([UIApplication sharedApplication].statusBarFrame.size.height + 44)
#define KV_SCALE_NUMBER ([UIScreen mainScreen].bounds.size.width/375)

#define KV_APPDelegate ((AppDelegate*)[UIApplication sharedApplication].delegate)

//全局Userdefault key
#define KV_UUID_STR @"KV_UUID_STR"
#define KV_KEYCHAIN_ACCOUNT @"com.fengbangleasing.iosapp"

#endif /* KVMecros_h */

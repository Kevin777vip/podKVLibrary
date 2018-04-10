//
//  KVDeviceInfoManger.m
//  FengbangC
//
//  Created by fb on 2018/2/27.
//  Copyright © 2018年 kevin. All rights reserved.
//

#import "KVDeviceInfoManger.h"
#import <SAMKeychain.h>
@interface KVDeviceInfoManger()

@end
@implementation KVDeviceInfoManger
MACRO_SHARED_INSTANCE_IMPLEMENTATION(KVDeviceInfoManger)

- (NSString*)getUuidStr {
    NSString *uuidstr = [[NSUserDefaults standardUserDefaults] objectForKey:KV_UUID_STR];
    if ([uuidstr isAvailable]) {
        return uuidstr;
    }else{
        NSString *keychainStr = [SAMKeychain passwordForService:KV_UUID_STR account:KV_KEYCHAIN_ACCOUNT];
        if (keychainStr.isAvailable) {
            [[NSUserDefaults standardUserDefaults] setObject:keychainStr forKey:KV_UUID_STR];
            return keychainStr;
        }else{
            NSString *newUuid = [NSString uuidString];
            if (newUuid.isAvailable) {
                [[NSUserDefaults standardUserDefaults] setObject:newUuid forKey:KV_UUID_STR];
                [SAMKeychain setPassword:newUuid forService:KV_UUID_STR account:KV_KEYCHAIN_ACCOUNT];
            }
            return newUuid;
        }
    }
}
@end

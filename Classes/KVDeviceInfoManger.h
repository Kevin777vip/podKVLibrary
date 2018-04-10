//
//  KVDeviceInfoManger.h
//  FengbangC
//
//  Created by fb on 2018/2/27.
//  Copyright © 2018年 kevin. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface KVDeviceInfoManger : NSObject
MACRO_SHARED_INSTANCE_INTERFACE
- (NSString*)getUuidStr;
@end

//
//  NSDictionary+KVAdditional.h
//  FengbangB
//
//  Created by kevin on 16/11/2017.
//  Copyright © 2017 kevin. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDictionary (KVAdditional)
- (BOOL)isAvailable;
- (BOOL)hasValueForKey:(NSString *)key;
@end

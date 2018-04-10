//
//  NSArray+KVAdditional.m
//  FengbangB
//
//  Created by kevin on 16/11/2017.
//  Copyright © 2017 kevin. All rights reserved.
//

#import "NSArray+KVAdditional.h"

@implementation NSArray (KVAdditional)
- (BOOL)isAvailable{
    if(self && [self isKindOfClass:[NSArray class]] && [self count] > 0){
        return YES;
    }
    return NO;
}
@end

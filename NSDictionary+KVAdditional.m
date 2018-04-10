//
//  NSDictionary+KVAdditional.m
//  FengbangB
//
//  Created by kevin on 16/11/2017.
//  Copyright © 2017 kevin. All rights reserved.
//

#import "NSDictionary+KVAdditional.h"

@implementation NSDictionary (KVAdditional)
- (BOOL)isAvailable{
    if(self && [self isKindOfClass:[NSDictionary class]] && [self allKeys].count > 0){
        return YES;
    }
    return NO;
}

- (BOOL)hasValueForKey:(NSString *)key
{
    
    BOOL hasValue = FALSE;
    if (key)
    {
        if ([self valueForKey:key])
        {
            hasValue = TRUE;
        }
    }
    
    return hasValue;
}
@end

//
//  NSString+KVAdditional.m
//  FengbangB
//
//  Created by kevin on 16/11/2017.
//  Copyright © 2017 kevin. All rights reserved.
//

#import "NSString+KVAdditional.h"

@implementation NSString (KVAdditional)
- (BOOL)isAvailable{
    if(self && [self isKindOfClass:[NSString class]] && [self stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]].length > 0){
        return YES;
    }
    return NO;
}

+ (NSString *)uuidString
{
    CFUUIDRef uuid_ref = CFUUIDCreate(NULL);
    CFStringRef uuid_string_ref= CFUUIDCreateString(NULL, uuid_ref);
    NSString *uuid = [NSString stringWithString:(__bridge NSString *)uuid_string_ref];
    CFRelease(uuid_ref);
    CFRelease(uuid_string_ref);
    return [uuid lowercaseString];
}

@end

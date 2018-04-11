//
//  NSObject+Additional.m
//  FengbangB
//
//  Created by kevin on 15/11/2017.
//  Copyright © 2017 kevin. All rights reserved.
//

#import "NSObject+Additional.h"
#import <objc/runtime.h>
#import "NSMutableDictionary+SafeAccess.h"
@implementation NSObject (Additional)
- (NSDictionary *)propertyDictionary {
    // Add properties of Self
    NSMutableDictionary *dict = [NSMutableDictionary dictionary];
    unsigned count;
    objc_property_t *properties = class_copyPropertyList([self class], &count);
    for (NSInteger i = 0; i < count; i++) {
        NSString *key = [NSString stringWithUTF8String:property_getName(properties[i])];
        if ([self respondsToSelector:@selector(valueForKey:)]) {
            NSString *value = [self valueForKey:key];
            
            [dict safe_setObject:value forKey:key];
        }
    }
    free(properties);
    
    // Add all superclass properties of Self as well, until it hits NSObject
    NSString *superClassName = [[self superclass] nameOfClass];
    if (![superClassName isEqualToString:@"NSObject"]) {
        for (NSString *property in [[[self superclass] propertyDictionary] allKeys]) {
            if ([[self superclass] respondsToSelector:@selector(valueForKey:)]) {
                NSString *value = [[self superclass] valueForKey:property];
                [dict safe_setObject:value forKey:property];
            }
        }
    }
    
    // Return the Dict
    return dict;
}

-(NSString *)nameOfClass {
    return [NSString stringWithUTF8String:class_getName([self class])];
}
@end

//
//  NSMutableDictionary+SafeAccess.m
//  FengbangB
//
//  Created by kevin on 14/11/2017.
//  Copyright © 2017 kevin. All rights reserved.
//

#import "NSMutableDictionary+SafeAccess.h"

@implementation NSMutableDictionary (SafeAccess)
-(void)safe_setObject:(id)object forKey:(NSString*)aKey {
    if (![self isKindOfClass:[NSMutableDictionary class]]) {
        return ;
    }
    if (object && self && aKey != nil) {
        [self setObject:object forKey:aKey];
    }
}
@end

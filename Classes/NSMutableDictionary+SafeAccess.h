//
//  NSMutableDictionary+SafeAccess.h
//  FengbangB
//
//  Created by kevin on 14/11/2017.
//  Copyright © 2017 kevin. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSMutableDictionary (SafeAccess)
-(void)safe_setObject:(id)object forKey:(NSString*)aKey;
@end

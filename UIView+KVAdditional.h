//
//  UIView+KVAddiontional.h
//  FengbangB
//
//  Created by kevin on 16/11/2017.
//  Copyright © 2017 kevin. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (KVAddiontional)
-(CGFloat)left;
-(CGFloat)right;
-(CGFloat)width;
-(CGFloat)height;
-(CGFloat)bottom;
-(CGFloat)top;
-(BOOL)containsViewWithTag:(NSInteger)tagNum;
-(void)clearAllSubViews;
@end

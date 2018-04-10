//
//  UIView+KVAddiontional.m
//  FengbangB
//
//  Created by kevin on 16/11/2017.
//  Copyright © 2017 kevin. All rights reserved.
//

#import "UIView+KVAdditional.h"

@implementation UIView (KVAddiontional)
-(CGFloat)left{
    return self.frame.origin.x;
}

-(CGFloat)right{
    return self.frame.origin.x + self.frame.size.width;
}

-(CGFloat)width{
    return self.frame.size.width;
}

-(CGFloat)height{
    return self.frame.size.height;
}

-(CGFloat)bottom{
    return self.frame.origin.y + self.frame.size.height;
}

-(CGFloat)top{
    return self.frame.origin.y;
}

-(BOOL)containsViewWithTag:(NSInteger)tagNum{
    BOOL ifcontains = NO;
    for (UIView *view in self.subviews) {
        if (view.tag == tagNum) {
            ifcontains = YES;
        }
    }
    return ifcontains;
}

-(void)clearAllSubViews{
    if (self) {
        
    }else{
        return;
    }
    for (UIView *view in self.subviews) {
        [view removeFromSuperview];
    }
}

@end

//
//  UIImageView+UIMaker.m
//  UIMaker
//
//  Created by admin on 2017/12/25.
//  Copyright © 2017年 admin. All rights reserved.
//

#import "UIImageView+UIMaker.h"

@implementation UIImageView (UIMaker)

/*
-(UIImageView *(^)(char *))setImageName;
-(UIImageView *(^)(UIImage *))setImage;
-(UIImageView *(^)(NSArray<UIImage *> *))setImages;
-(UIImageView *(^)(NSTimeInterval, NSInteger))setAnimation;
*/
-(UIImageView *(^)(NSString *))setImageName {
    return ^(NSString *name) {
        self.image = [UIImage imageNamed:name];
        return self;
    };
}
-(UIImageView *(^)(UIImage *))setImage {
    return ^(UIImage *image) {
        self.image = image;
        return self;
    };
}
-(UIImageView *(^)(NSArray<UIImage *> *))setImages {
    return ^(NSArray *arr) {
        self.animationImages = arr;
        return self;
    };
}
-(UIImageView *(^)(NSTimeInterval, NSInteger))setAnimation {
    return ^(NSTimeInterval duration, NSInteger repeatCount) {
        self.animationDuration = duration;
        self.animationRepeatCount = repeatCount;
        return self;
    };
}
@end

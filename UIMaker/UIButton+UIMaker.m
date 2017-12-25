//
//  UIButton+UIMaker.m
//  UIMaker
//
//  Created by admin on 2017/12/25.
//  Copyright © 2017年 admin. All rights reserved.
//

#import "UIButton+UIMaker.h"
#import <objc/runtime.h>

@implementation UIButton (UIMaker)
/*
-(UIButton *(^)(char *, UIControlState))setTitle;
-(UIButton *(^)(UIColor *, UIControlState))setTitleColor;
-(UIButton *(^)(UIImage *, UIControlState))setImage;
-(UIButton *(^)(UIImage *, UIControlState))setBackgroundImage;
-(UIButton *(^)(UIFont *))setFont;
-(UIButton *(^)(BOOL))setSelected;
-(UIButton *(^)(BOOL))setEnabled;
-(UIButton *(^)(UIButton *))setAction;
*/
-(UIButton *(^)(NSString *, UIControlState))setTitle {
    return ^(NSString *title, UIControlState state) {
        [self setTitle:title forState:state];
        return self;
    };
}
-(UIButton *(^)(UIColor *, UIControlState))setTitleColor {
    return ^(UIColor *color, UIControlState state) {
        [self setTitleColor:color forState:state];
        return self;
    };
}
-(UIButton *(^)(UIImage *, UIControlState))setImage {
    return ^(UIImage *image, UIControlState state) {
        [self setImage:image forState:state];
        return self;
    };
}
-(UIButton *(^)(UIImage *, UIControlState))setBackgroundImage {
    return ^(UIImage *image, UIControlState state) {
        [self setBackgroundImage:image forState:state];
        return self;
    };
}
-(UIButton *(^)(UIFont *))setFont {
    return ^(UIFont *font) {
        self.titleLabel.font = font;
        return self;
    };
}
-(UIButton *(^)(BOOL))setSelected {
    return ^(BOOL selected) {
        self.selected = selected;
        return self;
    };
}
-(UIButton *(^)(BOOL))setEnabled {
    return ^(BOOL enable) {
        self.enabled = enable;
        return self;
    };
}
-(UIButton *(^)(UIButtonCallBack))setAction {
    return ^(UIButtonCallBack callback) {
        objc_setAssociatedObject(self, @"kUIButtonCallBack", callback, OBJC_ASSOCIATION_COPY_NONATOMIC);
        [self addTarget:self action:@selector(buttonAction:) forControlEvents:UIControlEventTouchUpInside];
        return self;
    };
}
-(void)buttonAction:(UIButton *)sender {
    UIButtonCallBack callback = objc_getAssociatedObject(self, @"kUIButtonCallBack");
    if (callback) {
        callback(self);
    }
}
-(UIButton *(^)(id, SEL))setDelegate {
    return ^(id obj, SEL selector) {
        if ([obj respondsToSelector:selector]) {
            [self addTarget:obj action:selector forControlEvents:UIControlEventTouchUpInside];
        } else {
            NSLog(@"你好像没有实现 %@ 方法", NSStringFromSelector(selector));
        }
        return self;
    };
}
@end

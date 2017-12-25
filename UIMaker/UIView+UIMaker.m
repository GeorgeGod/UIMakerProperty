//
//  UIView+Extension.m
//  UIMaker
//
//  Created by admin on 2017/12/25.
//  Copyright © 2017年 admin. All rights reserved.
//

#import "UIView+UIMaker.h"
#import <objc/runtime.h>

@implementation UIView (UIMaker)

/*
 +(instancetype)maker;
-(UIView *(^)(CGRect))setFrame;
-(UIView *(^)(UIColor *))setBackgroundColor;
-(UIView *(^)(CGFloat))setAlpha;
-(UIView *(^)(BOOL))setHidden;
-(UIView *(^)(CGFloat))setCornerRadius;
-(UIView *(^)(CGFloat, UIColor *))setBorder;
-(UIView *(^)(CGFloat))setBorderWidth;
-(UIView *(^)(UIColor *))setBorderColor;
-(UIView *(^)(NSInteger))setTag;
-(UIView *(^)(UIViewContentMode))setContentMode;
-(UIView *(^)(BOOL))setUserInterface;
-(UIView *(^)(BOOL))setClipsToBounds;
-(UIView *(^)(BOOL))setEnabled;
-(UIView *(^)(UViewCallBack))setTapAction;
-(UIView *(^)(UIView *))setSuperView;
 */


+(instancetype)maker {
    return [self new];
}
-(UIView *(^)(CGRect))setFrame {
    return ^(CGRect rect) {
        self.frame = rect;
        return self;
    };
}
-(UIView *(^)(UIColor *))setBackgroundColor {
    return ^(UIColor *color) {
        self.backgroundColor = color;
        return self;
    };
}
-(UIView *(^)(CGFloat))setAlpha {
    return ^(CGFloat alpha) {
        self.alpha = alpha;
        return self;
    };
}
-(UIView *(^)(BOOL))setHidden {
    return ^(BOOL hidden) {
        self.hidden = hidden;
        return self;
    };
}
-(UIView *(^)(CGFloat))setCornerRadius {
    return ^(CGFloat radius) {
        self.layer.cornerRadius = radius;
        return self;
    };
}
-(UIView *(^)(CGFloat, UIColor *))setBorder {
    return ^(CGFloat width, UIColor *color) {
        self.layer.borderWidth = width;
        self.layer.borderColor = color.CGColor;
        return self;
    };
}
-(UIView *(^)(CGFloat))setBorderWidth {
    return ^(CGFloat width) {
        self.layer.borderWidth = width;
        return self;
    };
}
-(UIView *(^)(UIColor *))setBorderColor {
    return ^(UIColor *color) {
        self.layer.borderColor = color.CGColor;
        return self;
    };
}
-(UIView *(^)(NSInteger))setTag {
    return ^(NSInteger tag) {
        self.tag = tag;
        return self;
    };
}
-(UIView *(^)(UIViewContentMode))setContentMode {
    return ^(UIViewContentMode mode) {
        self.contentMode = mode;
        return self;
    };
}
-(UIView *(^)(BOOL))setUserInterface {
    return ^(BOOL enabled) {
        self.userInteractionEnabled = enabled;
        return self;
    };
}
-(UIView *(^)(BOOL))setClipsToBounds {
    return ^(BOOL clips) {
        self.clipsToBounds = clips;
        return self;
    };
}
-(UIView *(^)(UIViewCallBack))setTapAction {
    return ^(UIViewCallBack callback) {
        objc_setAssociatedObject(self, @"kUIViewCallBack", callback, OBJC_ASSOCIATION_COPY_NONATOMIC);
        UITapGestureRecognizer *tap = [[UITapGestureRecognizer alloc] initWithTarget:self action:@selector(tapAction:)];
        self.userInteractionEnabled = YES;
        [self addGestureRecognizer:tap];
        return self;
    };
}
-(void)tapAction:(UITapGestureRecognizer *)gesture {
    UIViewCallBack callback = objc_getAssociatedObject(self, @"kUIViewCallBack");
    if (callback) {
        callback(gesture.view);
    }
}

-(UIView *(^)(UIView *))setSuperView {
    return ^(UIView *superView) {
        [superView addSubview:self];
        return self;
    };
}

@end

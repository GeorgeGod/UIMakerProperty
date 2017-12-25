//
//  UITextView+UIMaker.m
//  UIMaker
//
//  Created by admin on 2017/12/25.
//  Copyright © 2017年 admin. All rights reserved.
//

#import "UITextView+UIMaker.h"

@implementation UITextView (UIMaker)

/*
 -(UITextView *(^)(NSString *))setText;
 -(UITextView *(^)(NSAttributedString *))setAttrText;
 -(UITextView *(^)(UIColor *))setTextColor;
 -(UITextView *(^)(UIFont *))setFont;
 
 -(UITextView *(^)(id))setDelegate;
 
 -(UITextView *(^)(UIKeyboardType))setKeyboardType;
 -(UITextView *(^)(UIReturnKeyType))setReturnKeyType;
 
 -(UITextView *(^)(NSString *))setPlaceholder;
 -(UITextView *(^)(UIEdgeInsets))setContentInsets;
 */

-(UITextView *(^)(NSString *))setText {
    return ^(NSString *text) {
        self.text = text;
        return self;
    };
}
-(UITextView *(^)(NSAttributedString *))setAttrText {
    return ^(NSAttributedString *attr) {
        self.attributedText = attr;
        return self;
    };
}
-(UITextView *(^)(UIColor *))setTextColor {
    return ^(UIColor *color) {
        self.textColor = color;
        return self;
    };
}
-(UITextView *(^)(UIFont *))setFont {
    return ^(UIFont *font) {
        self.font = font;
        return self;
    };
}
-(UITextView *(^)(id))setDelegate {
    return ^(id obj) {
        self.delegate = obj;
        return self;
    };
}
-(UITextView *(^)(UIKeyboardType))setKeyboardType {
    return ^(UIKeyboardType type) {
        self.keyboardType = type;
        return self;
    };
}
-(UITextView *(^)(UIReturnKeyType))setReturnKeyType {
    return ^(UIReturnKeyType type) {
        self.returnKeyType = type;
        return self;
    };
}
-(UITextView *(^)(NSString *))setPlaceholder {
    return ^(NSString *placeholder) {
        NSLog(@"暂时还未实现该方法：%@", NSStringFromSelector(_cmd));
        return self;
    };
}
-(UITextView *(^)(UIEdgeInsets))setContentInsets {
    return ^(UIEdgeInsets insets) {
        self.textContainerInset = insets;
        return self;
    };
}
@end

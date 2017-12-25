//
//  UITextField+UIMaker.m
//  UIMaker
//
//  Created by admin on 2017/12/25.
//  Copyright © 2017年 admin. All rights reserved.
//

#import "UITextField+UIMaker.h"
#import <objc/runtime.h>

@implementation UITextField (UIMaker)
/*
 -(UITextField *(^)(NSString *))setText;
 -(UITextField *(^)(NSAttributedString *))setAttrText;
 -(UITextField *(^)(UIColor *))setTextColor;
 -(UITextField *(^)(UIFont *))setFont;
 -(UITextField *(^)(NSTextAlignment))setTextAlignment;
 -(UITextField *(^)(id))setDelegate;
 -(UITextField *(^)(id))setEditChangedDelegate;
 
 -(UITextField *(^)(UIKeyboardType))setKeyboardType;
 -(UITextField *(^)(UIReturnKeyType))setReturnKeyType;
 -(UITextField *(^)(UITextFieldViewMode))setClearMode;
 
 -(UITextField *(^)(NSString *))setPlaceholder;
 -(UITextField *(^)(UIView *, UITextFieldViewMode))setLeftView;
 -(UITextField *(^)(UIView *, UITextFieldViewMode))setRightView;
 */

-(UITextField *(^)(NSString *))setText {
    return ^(NSString *text) {
        self.text = text;
        return self;
    };
}
-(UITextField *(^)(NSAttributedString *))setAttrText {
    return ^(NSAttributedString *attr) {
        self.attributedText = attr;
        return self;
    };
}
-(UITextField *(^)(UIColor *))setTextColor {
    return ^(UIColor *color) {
        self.textColor = color;
        return self;
    };
}
-(UITextField *(^)(UIFont *))setFont {
    return ^(UIFont *font) {
        self.font = font;
        return self;
    };
}
-(UITextField *(^)(NSTextAlignment))setTextAlignment {
    return ^(NSTextAlignment align) {
        self.textAlignment = align;
        return self;
    };
}
-(UITextField *(^)(id))setDelegate {
    return ^(id object) {
        self.delegate = object;
        return self;
    };
}
-(UITextField *(^)(id, UITextFieldCallBack))setEditChangedDelegate {
    return ^(id object, UITextFieldCallBack callback) {
        objc_setAssociatedObject(self, @"kUITextFieldCallBack", callback, OBJC_ASSOCIATION_COPY_NONATOMIC);
        [self addTarget:self action:@selector(textFieldDidChangedEditing:) forControlEvents:UIControlEventEditingChanged];
        return self;
    };
}
- (void)textFieldDidChangedEditing:(UITextField *)textField {
    UITextFieldCallBack callback = objc_getAssociatedObject(self, @"kUITextFieldCallBack");
    if (callback) {
        callback(self);
    }
}
-(UITextField *(^)(UIKeyboardType))setKeyboardType {
    return ^(UIKeyboardType type) {
        self.keyboardType = type;
        return self;
    };
}
-(UITextField *(^)(UIReturnKeyType))setReturnKeyType {
    return ^(UIReturnKeyType type) {
        self.returnKeyType = type;
        return self;
    };
}
-(UITextField *(^)(UITextFieldViewMode))setClearMode {
    return ^(UITextFieldViewMode mode) {
        self.clearButtonMode = mode;
        return self;
    };
}
-(UITextField *(^)(NSString *))setPlaceholder {
    return ^(NSString *placeholder) {
        self.placeholder = placeholder;
        return self;
    };
}
-(UITextField *(^)(UIView *, UITextFieldViewMode))setLeftView {
    return ^(UIView *leftV, UITextFieldViewMode mode) {
        self.leftView = leftV;
        self.leftViewMode = mode;
        return self;
    };
}
-(UITextField *(^)(UIView *, UITextFieldViewMode))setRightView {
    return ^(UIView *rightV, UITextFieldViewMode mode) {
        self.leftView = rightV;
        self.leftViewMode = mode;
        return self;
    };
}

@end

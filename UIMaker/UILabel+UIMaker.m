//
//  UILabel+UIMaker.m
//  UIMaker
//
//  Created by admin on 2017/12/25.
//  Copyright © 2017年 admin. All rights reserved.
//

#import "UILabel+UIMaker.h"

@implementation UILabel (UIMaker)

/*
 -(UILabel *(^)(NSString *))setText;
 -(UILabel *(^)(UIColor *))setTextColor;
 -(UILabel *(^)(UIFont *))setFont;
 -(UILabel *(^)(NSTextAlignment))setTextAlignment;
 -(UILabel *(^)(NSLineBreakMode))setLineBreakMode;
 -(UILabel *(^)(NSInteger))setNumberOfLines;
 -(UILabel *(^)(BOOL))setEnabled;
 -(UILabel *(^)(BOOL))setAdjust;
 */
-(UILabel *(^)(NSString *))setText {
    return ^(NSString *text) {
        self.text = text;
        return self;
    };
}
-(UILabel *(^)(UIColor *))setTextColor {
    return ^(UIColor *color) {
        self.textColor = color;
        return self;
    };
}
-(UILabel *(^)(UIFont *))setFont {
    return ^(UIFont *font) {
        self.font = font;
        return self;
    };
}
-(UILabel *(^)(NSTextAlignment))setTextAlignment {
    return ^(NSTextAlignment align) {
        self.textAlignment = align;
        return self;
    };
}
-(UILabel *(^)(NSLineBreakMode))setLineBreakMode {
    return ^(NSLineBreakMode mode) {
        self.lineBreakMode = mode;
        return self;
    };
}
-(UILabel *(^)(NSInteger))setNumberOfLines {
    return ^(NSInteger number) {
        self.numberOfLines = number;
        return self;
    };
}
-(UILabel *(^)(BOOL))setEnabled {
    return ^(BOOL enabled) {
        self.enabled = enabled;
        return self;
    };
}
-(UILabel *(^)(BOOL))setAdjust {
    return ^(BOOL adjust) {
        self.adjustsFontSizeToFitWidth = YES;
        return self;
    };
}

@end

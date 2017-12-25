//
//  UIScrollView+UIMaker.m
//  UIMaker
//
//  Created by admin on 2017/12/25.
//  Copyright © 2017年 admin. All rights reserved.
//

#import "UIScrollView+UIMaker.h"

@implementation UIScrollView (UIMaker)

/*
 -(UIScrollView *(^)(CGPoint))setContentOffset;
 -(UIScrollView *(^)(CGSize))setContentSize;
 -(UIScrollView *(^)(UIEdgeInsets))setContentInsets;
 -(UIScrollView *(^)(id))setDelegate;
 -(UIScrollView *(^)(BOOL))setBounces;
 -(UIScrollView *(^)(BOOL))setAlwaysBounceVertical;
 -(UIScrollView *(^)(BOOL))setAlwaysBounceHorizontal;
 -(UIScrollView *(^)(BOOL))setScrollEnabled;
 -(UIScrollView *(^)(BOOL))setShowsVertical;
 -(UIScrollView *(^)(BOOL))setShowsHorizontal;
 -(UIScrollView *(^)(UIEdgeInsets))setIndicatorInsets;
 -(UIScrollView *(^)(UIScrollViewIndicatorStyle))setIndicatorStyle;
 -(UIScrollView *(^)(UIScrollViewKeyboardDismissMode))setKeyboardDismissMode;
 */

-(UIScrollView *(^)(CGPoint))setContentOffset {
    return ^(CGPoint point) {
        self.contentOffset = point;
        return self;
    };
}
-(UIScrollView *(^)(CGSize))setContentSize {
    return ^(CGSize size) {
        self.contentSize = size;
        return self;
    };
}
-(UIScrollView *(^)(UIEdgeInsets))setContentInsets {
    return ^(UIEdgeInsets insets) {
        self.contentInset = insets;
        return self;
    };
}
-(UIScrollView *(^)(id))setDelegate {
    return ^(id obj) {
        self.delegate = obj;
        return self;
    };
}
-(UIScrollView *(^)(BOOL))setBounces {
    return ^(BOOL bounces) {
        self.bounces = bounces;
        return self;
    };
}
-(UIScrollView *(^)(BOOL))setAlwaysBounceVertical {
    return ^(BOOL always) {
        self.alwaysBounceVertical = always;
        return self;
    };
}
-(UIScrollView *(^)(BOOL))setAlwaysBounceHorizontal {
    return ^(BOOL always) {
        self.alwaysBounceHorizontal = always;
        return self;
    };
}
-(UIScrollView *(^)(BOOL))setScrollEnabled {
    return ^(BOOL enabled) {
        self.scrollEnabled = enabled;
        return self;
    };
}
-(UIScrollView *(^)(BOOL))setShowsVertical {
    return ^(BOOL shows) {
        self.showsVerticalScrollIndicator = shows;
        return self;
    };
}
-(UIScrollView *(^)(BOOL))setShowsHorizontal {
    return ^(BOOL shows) {
        self.showsHorizontalScrollIndicator = shows;
        return self;
    };
}
-(UIScrollView *(^)(UIEdgeInsets))setIndicatorInsets {
    return ^(UIEdgeInsets insets) {
        self.scrollIndicatorInsets = insets;
        return self;
    };
}
-(UIScrollView *(^)(UIScrollViewIndicatorStyle))setIndicatorStyle {
    return ^(UIScrollViewIndicatorStyle style) {
        self.indicatorStyle = style;
        return self;
    };
}
-(UIScrollView *(^)(UIScrollViewKeyboardDismissMode))setKeyboardDismissMode {
    return ^(UIScrollViewKeyboardDismissMode mode) {
        self.keyboardDismissMode = mode;
        return self;
    };
}

@end

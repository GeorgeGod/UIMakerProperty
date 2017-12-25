//
//  UIScrollView+UIMaker.h
//  UIMaker
//
//  Created by admin on 2017/12/25.
//  Copyright © 2017年 admin. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIScrollView (UIMaker)

+(instancetype)maker;


/**
 设置frame
 */
-(UIScrollView *(^)(CGRect))setFrame;

/**
 设置背景色
 */
-(UIScrollView *(^)(UIColor *))setBackgroundColor;

/**
 设置透明度
 */
-(UIScrollView *(^)(CGFloat))setAlpha;

/**
 设置是否隐藏
 */
-(UIScrollView *(^)(BOOL))setHidden;

/**
 设置圆角
 */
-(UIScrollView *(^)(CGFloat))setCornerRadius;

/**
 设置边框
 */
-(UIScrollView *(^)(CGFloat, UIColor *))setBorder;

/**
 设置边框宽度
 */
-(UIScrollView *(^)(CGFloat))setBorderWidth;

/**
 设置边框颜色
 */
-(UIScrollView *(^)(UIColor *))setBorderColor;

/**
 设置tag值
 */
-(UIScrollView *(^)(NSInteger))setTag;

/**
 设置内容显示模式
 */
-(UIScrollView *(^)(UIViewContentMode))setContentMode;

/**
 设置是否可触摸
 */
-(UIScrollView *(^)(BOOL))setUserInterface;

/**
 设置是否裁剪
 */
-(UIScrollView *(^)(BOOL))setClipsToBounds;

/**
 设置是否可用
 */
-(UIScrollView *(^)(BOOL))setEnabled;

/**
 添加到父视图上
 */
-(UIScrollView *(^)(UIView *))setSuperView;





/*** 上面是继承UIView的 ****/
/*** 下面是UIScrollView独有的 ****/

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

@end

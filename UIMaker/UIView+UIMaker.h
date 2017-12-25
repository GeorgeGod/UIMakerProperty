//
//  UIView+Extension.h
//  UIMaker
//
//  Created by admin on 2017/12/25.
//  Copyright © 2017年 admin. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^UIViewCallBack)(UIView *view);
@interface UIView (UIMaker)

+(instancetype)maker;

//@property (nonatomic, copy, readonly) UIView *(^setFrame)(CGRect);
//@property (nonatomic, copy, readonly) UIView *(^setSuperView)(UIView *);

/**
 设置frame
 */
-(UIView *(^)(CGRect))setFrame;

/**
 设置背景色
 */
-(UIView *(^)(UIColor *))setBackgroundColor;

/**
 设置透明度
 */
-(UIView *(^)(CGFloat))setAlpha;

/**
 设置是否隐藏
 */
-(UIView *(^)(BOOL))setHidden;

/**
 设置圆角
 */
-(UIView *(^)(CGFloat))setCornerRadius;

/**
 设置边框
 */
-(UIView *(^)(CGFloat, UIColor *))setBorder;

/**
 设置边框宽度
 */
-(UIView *(^)(CGFloat))setBorderWidth;

/**
 设置边框颜色
 */
-(UIView *(^)(UIColor *))setBorderColor;

/**
 设置tag值
 */
-(UIView *(^)(NSInteger))setTag;

/**
 设置内容显示模式
 */
-(UIView *(^)(UIViewContentMode))setContentMode;

/**
 设置是否可触摸
 */
-(UIView *(^)(BOOL))setUserInterface;

/**
 设置是否裁剪
 */
-(UIView *(^)(BOOL))setClipsToBounds;

///**
// 设置是否可用
// */
//-(UIView *(^)(BOOL))setEnabled;

/**
 设置点击事件
 */
-(UIView *(^)(UIViewCallBack))setTapAction;

/**
 添加到父视图上
 */
-(UIView *(^)(UIView *))setSuperView;

@end

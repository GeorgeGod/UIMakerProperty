//
//  UILabel+UIMaker.h
//  UIMaker
//
//  Created by admin on 2017/12/25.
//  Copyright © 2017年 admin. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^UILabelCallBack)(UILabel *lab);
@interface UILabel (UIMaker)

+(instancetype)maker;


/**
 设置frame
 */
-(UILabel *(^)(CGRect))setFrame;

/**
 设置背景色
 */
-(UILabel *(^)(UIColor *))setBackgroundColor;

/**
 设置透明度
 */
-(UILabel *(^)(CGFloat))setAlpha;

/**
 设置是否隐藏
 */
-(UILabel *(^)(BOOL))setHidden;

/**
 设置圆角
 */
-(UILabel *(^)(CGFloat))setCornerRadius;

/**
 设置边框
 */
-(UILabel *(^)(CGFloat, UIColor *))setBorder;

/**
 设置边框宽度
 */
-(UILabel *(^)(CGFloat))setBorderWidth;

/**
 设置边框颜色
 */
-(UILabel *(^)(UIColor *))setBorderColor;

/**
 设置tag值
 */
-(UILabel *(^)(NSInteger))setTag;

/**
 设置内容显示模式
 */
-(UILabel *(^)(UIViewContentMode))setContentMode;

/**
 设置是否可触摸
 */
-(UILabel *(^)(BOOL))setUserInterface;

/**
 设置是否裁剪
 */
-(UILabel *(^)(BOOL))setClipsToBounds;

/**
 设置点击事件
 */
-(UILabel *(^)(UILabelCallBack))setTapAction;

/**
 添加到父视图上
 */
-(UILabel *(^)(UIView *))setSuperView;






/*** 上面是继承UIView的 ****/
/*** 下面才是UILabel独有的 ****/

-(UILabel *(^)(NSString *))setText;
-(UILabel *(^)(UIColor *))setTextColor;
-(UILabel *(^)(UIFont *))setFont;
-(UILabel *(^)(NSTextAlignment))setTextAlignment;
-(UILabel *(^)(NSLineBreakMode))setLineBreakMode;
-(UILabel *(^)(NSInteger))setNumberOfLines;
-(UILabel *(^)(BOOL))setEnabled;
-(UILabel *(^)(BOOL))setAdjust;



@end

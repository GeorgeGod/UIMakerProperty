//
//  UIButton+UIMaker.h
//  UIMaker
//
//  Created by admin on 2017/12/25.
//  Copyright © 2017年 admin. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^UIButtonCallBack)(UIButton *button);
@interface UIButton (UIMaker)

+(instancetype)maker;


/**
 设置frame
 */
-(UIButton *(^)(CGRect))setFrame;

/**
 设置背景色
 */
-(UIButton *(^)(UIColor *))setBackgroundColor;

/**
 设置透明度
 */
-(UIButton *(^)(CGFloat))setAlpha;

/**
 设置是否隐藏
 */
-(UIButton *(^)(BOOL))setHidden;

/**
 设置圆角
 */
-(UIButton *(^)(CGFloat))setCornerRadius;

/**
 设置边框
 */
-(UIButton *(^)(CGFloat, UIColor *))setBorder;

/**
 设置边框宽度
 */
-(UIButton *(^)(CGFloat))setBorderWidth;

/**
 设置边框颜色
 */
-(UIButton *(^)(UIColor *))setBorderColor;

/**
 设置tag值
 */
-(UIButton *(^)(NSInteger))setTag;

/**
 设置内容显示模式
 */
-(UIButton *(^)(UIViewContentMode))setContentMode;

/**
 设置是否可触摸
 */
-(UIButton *(^)(BOOL))setUserInterface;

/**
 设置是否裁剪
 */
-(UIButton *(^)(BOOL))setClipsToBounds;

/**
 设置点击事件
 */
-(UIButton *(^)(UIButton *))setTapAction;

/**
 添加到父视图上
 */
-(UIButton *(^)(UIView *))setSuperView;




/*** 上面是继承UIView的 ****/
/*** 下面才是UIButton独有的 ****/


/**
 设置按钮的标题
 */
-(UIButton *(^)(NSString *, UIControlState))setTitle;

/**
 设置按钮标题的颜色
 */
-(UIButton *(^)(UIColor *, UIControlState))setTitleColor;

/**
 设置按钮上面的图片
 */
-(UIButton *(^)(UIImage *, UIControlState))setImage;

/**
 设置按钮上面的背景图片
 */
-(UIButton *(^)(UIImage *, UIControlState))setBackgroundImage;

/**
 设置按钮的字体大小
 */
-(UIButton *(^)(UIFont *))setFont;

/**
 设置按钮是否选中
 */
-(UIButton *(^)(BOOL))setSelected;

/**
 设置按钮是否可用
 */
-(UIButton *(^)(BOOL))setEnabled;


/**
 设置按钮的点击事件
 */
-(UIButton *(^)(UIButtonCallBack))setAction;

/**
 设置按钮的点击事件代理
 */
-(UIButton *(^)(id, SEL))setDelegate;


@end

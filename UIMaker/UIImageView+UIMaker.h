//
//  UIImageView+UIMaker.h
//  UIMaker
//
//  Created by admin on 2017/12/25.
//  Copyright © 2017年 admin. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImageView (UIMaker)

+(instancetype)maker;


/**
 设置frame
 */
-(UIImageView *(^)(CGRect))setFrame;

/**
 设置背景色
 */
-(UIImageView *(^)(UIColor *))setBackgroundColor;

/**
 设置透明度
 */
-(UIImageView *(^)(CGFloat))setAlpha;

/**
 设置是否隐藏
 */
-(UIImageView *(^)(BOOL))setHidden;

/**
 设置圆角
 */
-(UIImageView *(^)(CGFloat))setCornerRadius;

/**
 设置边框
 */
-(UIImageView *(^)(CGFloat, UIColor *))setBorder;

/**
 设置边框宽度
 */
-(UIImageView *(^)(CGFloat))setBorderWidth;

/**
 设置边框颜色
 */
-(UIImageView *(^)(UIColor *))setBorderColor;

/**
 设置tag值
 */
-(UIImageView *(^)(NSInteger))setTag;

/**
 设置内容显示模式
 */
-(UIImageView *(^)(UIViewContentMode))setContentMode;

/**
 设置是否可触摸
 */
-(UIImageView *(^)(BOOL))setUserInterface;

/**
 设置是否裁剪
 */
-(UIImageView *(^)(BOOL))setClipsToBounds;

/**
 设置点击事件
 */
-(UIImageView *(^)(UIImageView *))setTapAction;

/**
 添加到父视图上
 */
-(UIImageView *(^)(UIView *))setSuperView;




/*** 上面是继承UIView的 ****/
/*** 下面才是UIImageView独有的 ****/

/**
 设置图片的名字
 */
-(UIImageView *(^)(NSString *))setImageName;

/**
 设置图片
 */
-(UIImageView *(^)(UIImage *))setImage;

/**
 设置动画数组
 */
-(UIImageView *(^)(NSArray<UIImage *> *))setImages;

/**
 设置动画的时间和次数
 */
-(UIImageView *(^)(NSTimeInterval, NSInteger))setAnimation;



@end

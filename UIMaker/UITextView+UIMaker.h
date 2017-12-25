//
//  UITextView+UIMaker.h
//  UIMaker
//
//  Created by admin on 2017/12/25.
//  Copyright © 2017年 admin. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UITextView (UIMaker)

+(instancetype)maker;


/**
 设置frame
 */
-(UITextView *(^)(CGRect))setFrame;

/**
 设置背景色
 */
-(UITextView *(^)(UIColor *))setBackgroundColor;

/**
 设置透明度
 */
-(UITextView *(^)(CGFloat))setAlpha;

/**
 设置是否隐藏
 */
-(UITextView *(^)(BOOL))setHidden;

/**
 设置圆角
 */
-(UITextView *(^)(CGFloat))setCornerRadius;

/**
 设置边框
 */
-(UITextView *(^)(CGFloat, UIColor *))setBorder;

/**
 设置边框宽度
 */
-(UITextView *(^)(CGFloat))setBorderWidth;

/**
 设置边框颜色
 */
-(UITextView *(^)(UIColor *))setBorderColor;

/**
 设置tag值
 */
-(UITextView *(^)(NSInteger))setTag;

/**
 设置内容显示模式
 */
-(UITextView *(^)(UIViewContentMode))setContentMode;

/**
 设置是否可触摸
 */
-(UITextView *(^)(BOOL))setUserInterface;

/**
 设置是否裁剪
 */
-(UITextView *(^)(BOOL))setClipsToBounds;

/**
 设置是否可用
 */
-(UITextView *(^)(BOOL))setEnabled;

/**
 添加到父视图上
 */
-(UITextView *(^)(UIView *))setSuperView;






/*** 上面是继承UIView的 ****/
/*** 下面才是UITextView独有的 ****/

-(UITextView *(^)(NSString *))setText;
-(UITextView *(^)(NSAttributedString *))setAttrText;
-(UITextView *(^)(UIColor *))setTextColor;
-(UITextView *(^)(UIFont *))setFont;
-(UITextView *(^)(id))setDelegate;
-(UITextView *(^)(UIKeyboardType))setKeyboardType;
-(UITextView *(^)(UIReturnKeyType))setReturnKeyType;
-(UITextView *(^)(NSString *))setPlaceholder;
-(UITextView *(^)(UIEdgeInsets))setContentInsets;

@end

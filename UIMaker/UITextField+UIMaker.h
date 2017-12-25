//
//  UITextField+UIMaker.h
//  UIMaker
//
//  Created by admin on 2017/12/25.
//  Copyright © 2017年 admin. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^UITextFieldCallBack)(UITextField *textField);
@interface UITextField (UIMaker)


+(instancetype)maker;


/**
 设置frame
 */
-(UITextField *(^)(CGRect))setFrame;

/**
 设置背景色
 */
-(UITextField *(^)(UIColor *))setBackgroundColor;

/**
 设置透明度
 */
-(UITextField *(^)(CGFloat))setAlpha;

/**
 设置是否隐藏
 */
-(UITextField *(^)(BOOL))setHidden;

/**
 设置圆角
 */
-(UITextField *(^)(CGFloat))setCornerRadius;

/**
 设置边框
 */
-(UITextField *(^)(CGFloat, UIColor *))setBorder;

/**
 设置边框宽度
 */
-(UITextField *(^)(CGFloat))setBorderWidth;

/**
 设置边框颜色
 */
-(UITextField *(^)(UIColor *))setBorderColor;

/**
 设置tag值
 */
-(UITextField *(^)(NSInteger))setTag;

/**
 设置内容显示模式
 */
-(UITextField *(^)(UIViewContentMode))setContentMode;

/**
 设置是否可触摸
 */
-(UITextField *(^)(BOOL))setUserInterface;

/**
 设置是否裁剪
 */
-(UITextField *(^)(BOOL))setClipsToBounds;

/**
 设置是否可用
 */
-(UITextField *(^)(BOOL))setEnabled;

/**
 添加到父视图上
 */
-(UITextField *(^)(UIView *))setSuperView;






/*** 上面是继承UIView的 ****/
/*** 下面才是UITextField独有的 ****/

-(UITextField *(^)(NSString *))setText;
-(UITextField *(^)(NSAttributedString *))setAttrText;
-(UITextField *(^)(UIColor *))setTextColor;
-(UITextField *(^)(UIFont *))setFont;
-(UITextField *(^)(NSTextAlignment))setTextAlignment;

/**
 设置代理
 */
-(UITextField *(^)(id))setDelegate;
-(UITextField *(^)(id, UITextFieldCallBack))setEditChangedDelegate;

-(UITextField *(^)(UIKeyboardType))setKeyboardType;
-(UITextField *(^)(UIReturnKeyType))setReturnKeyType;
-(UITextField *(^)(UITextFieldViewMode))setClearMode;

-(UITextField *(^)(NSString *))setPlaceholder;
-(UITextField *(^)(UIView *, UITextFieldViewMode))setLeftView;
-(UITextField *(^)(UIView *, UITextFieldViewMode))setRightView;
@end

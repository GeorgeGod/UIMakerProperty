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

@property (nonatomic, copy, readonly) UITextView *(^setFrame)(CGRect);
@property (nonatomic, copy, readonly) UITextView *(^setBackgroundColor)(UIColor *);
@property (nonatomic, copy, readonly) UITextView *(^setAlpha)(CGFloat);
@property (nonatomic, copy, readonly) UITextView *(^setHidden)(BOOL);
@property (nonatomic, copy, readonly) UITextView *(^setCornerRadius)(CGFloat);
@property (nonatomic, copy, readonly) UITextView *(^setBorder)(CGFloat, UIColor *);
@property (nonatomic, copy, readonly) UITextView *(^setBorderWidth)(CGFloat);
@property (nonatomic, copy, readonly) UITextView *(^setBorderColor)(UIColor *);
@property (nonatomic, copy, readonly) UITextView *(^setTag)(NSInteger);
@property (nonatomic, copy, readonly) UITextView *(^setContentMode)(UIViewContentMode);
@property (nonatomic, copy, readonly) UITextView *(^setUserInterface)(BOOL);
@property (nonatomic, copy, readonly) UITextView *(^setClipsToBounds)(BOOL);
//@property (nonatomic, copy, readonly) UITextView *(^setTapAction)(UITextFieldCallBack);
@property (nonatomic, copy, readonly) UITextView *(^setSuperView)(UIView *);


/*** 上面是继承UIView的 ****/
/*** 下面才是UITextView独有的 ****/

@property (nonatomic, copy, readonly) UITextView *(^setText)(NSString *);
@property (nonatomic, copy, readonly) UITextView *(^setAttrText)(NSAttributedString *);
@property (nonatomic, copy, readonly) UITextView *(^setTextColor)(UIColor *);
@property (nonatomic, copy, readonly) UITextView *(^setFont)(UIFont *);
@property (nonatomic, copy, readonly) UITextView *(^setDelegate)(id);
@property (nonatomic, copy, readonly) UITextView *(^setKeyboardType)(UIKeyboardType);
@property (nonatomic, copy, readonly) UITextView *(^setReturnKeyType)(UIReturnKeyType);
@property (nonatomic, copy, readonly) UITextView *(^setPlaceholder)(UIKeyboardType);
@property (nonatomic, copy, readonly) UITextView *(^setContentInsets)(UIEdgeInsets);
@end

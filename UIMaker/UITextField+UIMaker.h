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

@property (nonatomic, copy, readonly) UITextField *(^setFrame)(CGRect);
@property (nonatomic, copy, readonly) UITextField *(^setBackgroundColor)(UIColor *);
@property (nonatomic, copy, readonly) UITextField *(^setAlpha)(CGFloat);
@property (nonatomic, copy, readonly) UITextField *(^setHidden)(BOOL);
@property (nonatomic, copy, readonly) UITextField *(^setCornerRadius)(CGFloat);
@property (nonatomic, copy, readonly) UITextField *(^setBorder)(CGFloat, UIColor *);
@property (nonatomic, copy, readonly) UITextField *(^setBorderWidth)(CGFloat);
@property (nonatomic, copy, readonly) UITextField *(^setBorderColor)(UIColor *);
@property (nonatomic, copy, readonly) UITextField *(^setTag)(NSInteger);
@property (nonatomic, copy, readonly) UITextField *(^setContentMode)(UIViewContentMode);
@property (nonatomic, copy, readonly) UITextField *(^setUserInterface)(BOOL);
@property (nonatomic, copy, readonly) UITextField *(^setClipsToBounds)(BOOL);
//@property (nonatomic, copy, readonly) UITextField *(^setTapAction)(UITextFieldCallBack);
@property (nonatomic, copy, readonly) UITextField *(^setSuperView)(UIView *);


/*** 上面是继承UIView的 ****/
/*** 下面才是UITextField独有的 ****/

@property (nonatomic, copy, readonly) UITextField *(^setText)(NSString *);
@property (nonatomic, copy, readonly) UITextField *(^setAttrText)(NSAttributedString *);
@property (nonatomic, copy, readonly) UITextField *(^setTextColor)(UIColor *);
@property (nonatomic, copy, readonly) UITextField *(^setFont)(UIFont *);
@property (nonatomic, copy, readonly) UITextField *(^setTextAlignment)(NSTextAlignment);
@property (nonatomic, copy, readonly) UITextField *(^setDelegate)(id);
@property (nonatomic, copy, readonly) UITextField *(^setEditChangedDelegate)(id, UITextFieldCallBack);
@property (nonatomic, copy, readonly) UITextField *(^setKeyboardType)(UIKeyboardType);
@property (nonatomic, copy, readonly) UITextField *(^setReturnKeyType)(UIReturnKeyType);
@property (nonatomic, copy, readonly) UITextField *(^setClearMode)(UITextFieldViewMode);
@property (nonatomic, copy, readonly) UITextField *(^setPlaceholder)(NSString *);
@property (nonatomic, copy, readonly) UITextField *(^setLeftView)(UIView *, UITextFieldViewMode);
@property (nonatomic, copy, readonly) UITextField *(^setRightView)(UIView *, UITextFieldViewMode);
@end

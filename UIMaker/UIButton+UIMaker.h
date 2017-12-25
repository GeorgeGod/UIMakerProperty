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

@property (nonatomic, copy, readonly) UIButton *(^setFrame)(CGRect);
@property (nonatomic, copy, readonly) UIButton *(^setBackgroundColor)(UIColor *);
@property (nonatomic, copy, readonly) UIButton *(^setAlpha)(CGFloat);
@property (nonatomic, copy, readonly) UIButton *(^setHidden)(BOOL);
@property (nonatomic, copy, readonly) UIButton *(^setCornerRadius)(CGFloat);
@property (nonatomic, copy, readonly) UIButton *(^setBorder)(CGFloat, UIColor *);
@property (nonatomic, copy, readonly) UIButton *(^setBorderWidth)(CGFloat);
@property (nonatomic, copy, readonly) UIButton *(^setBorderColor)(UIColor *);
@property (nonatomic, copy, readonly) UIButton *(^setTag)(NSInteger);
@property (nonatomic, copy, readonly) UIButton *(^setContentMode)(UIViewContentMode);
@property (nonatomic, copy, readonly) UIButton *(^setUserInterface)(BOOL);
@property (nonatomic, copy, readonly) UIButton *(^setClipsToBounds)(BOOL);
@property (nonatomic, copy, readonly) UIButton *(^setTapAction)(UIButtonCallBack);
@property (nonatomic, copy, readonly) UIButton *(^setSuperView)(UIView *);


/*** 上面是继承UIView的 ****/
/*** 下面才是UIButton独有的 ****/

@property (nonatomic, copy, readonly) UIButton *(^setTitle)(NSString *, UIControlState);
@property (nonatomic, copy, readonly) UIButton *(^setTitleColor)(UIColor *, UIControlState);
@property (nonatomic, copy, readonly) UIButton *(^setImage)(UIImage *, UIControlState);
@property (nonatomic, copy, readonly) UIButton *(^setBackgroundImage)(UIImage *, UIControlState);
@property (nonatomic, copy, readonly) UIButton *(^setFont)(UIFont *);
@property (nonatomic, copy, readonly) UIButton *(^setSelected)(BOOL);
@property (nonatomic, copy, readonly) UIButton *(^setEnabled)(BOOL);
@property (nonatomic, copy, readonly) UIButton *(^setAction)(UIButtonCallBack);
@property (nonatomic, copy, readonly) UIButton *(^setTargetAndAction)(id, SEL);
@property (nonatomic, copy, readonly) UIButton *(^setDelegate)(id, SEL);
@end

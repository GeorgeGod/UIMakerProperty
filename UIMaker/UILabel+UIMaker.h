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

@property (nonatomic, copy, readonly) UILabel *(^setFrame)(CGRect);
@property (nonatomic, copy, readonly) UILabel *(^setBackgroundColor)(UIColor *);
@property (nonatomic, copy, readonly) UILabel *(^setAlpha)(CGFloat);
@property (nonatomic, copy, readonly) UILabel *(^setHidden)(BOOL);
@property (nonatomic, copy, readonly) UILabel *(^setCornerRadius)(CGFloat);
@property (nonatomic, copy, readonly) UILabel *(^setBorder)(CGFloat, UIColor *);
@property (nonatomic, copy, readonly) UILabel *(^setBorderWidth)(CGFloat);
@property (nonatomic, copy, readonly) UILabel *(^setBorderColor)(UIColor *);
@property (nonatomic, copy, readonly) UILabel *(^setTag)(NSInteger);
@property (nonatomic, copy, readonly) UILabel *(^setContentMode)(UIViewContentMode);
@property (nonatomic, copy, readonly) UILabel *(^setUserInterface)(BOOL);
@property (nonatomic, copy, readonly) UILabel *(^setClipsToBounds)(BOOL);
@property (nonatomic, copy, readonly) UILabel *(^setTapAction)(UILabelCallBack);
@property (nonatomic, copy, readonly) UILabel *(^setTargetAndAction)(id, SEL);
@property (nonatomic, copy, readonly) UILabel *(^setSuperView)(UIView *);

/*** 上面是继承UIView的 ****/
/*** 下面才是UILabel独有的 ****/

@property (nonatomic, copy, readonly) UILabel *(^setText)(NSString *);
@property (nonatomic, copy, readonly) UILabel *(^setFont)(UIFont *);
@property (nonatomic, copy, readonly) UILabel *(^setTextAlignment)(NSTextAlignment);
@property (nonatomic, copy, readonly) UILabel *(^setLineBreakMode)(NSLineBreakMode);
@property (nonatomic, copy, readonly) UILabel *(^setNumberOfLines)(NSInteger);
@property (nonatomic, copy, readonly) UILabel *(^setEnabled)(BOOL);
@property (nonatomic, copy, readonly) UILabel *(^setAdjust)(BOOL);
@end

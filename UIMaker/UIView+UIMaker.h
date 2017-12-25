//
//  UIView+Extension.h
//  UIMaker
//
//  Created by admin on 2017/12/25.
//  Copyright © 2017年 admin. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Masonry.h"
#ifdef MAS_VIEW
typedef void(^UIViewConstraint)(MASConstraintMaker *make);
#endif
typedef void(^UIViewCallBack)(UIView *view);
@interface UIView (UIMaker)

+(instancetype)maker;

@property (nonatomic, copy, readonly) UIView *(^setFrame)(CGRect);
@property (nonatomic, copy, readonly) UIView *(^setBackgroundColor)(UIColor *);
@property (nonatomic, copy, readonly) UIView *(^setAlpha)(CGFloat);
@property (nonatomic, copy, readonly) UIView *(^setHidden)(BOOL);
@property (nonatomic, copy, readonly) UIView *(^setCornerRadius)(CGFloat);
@property (nonatomic, copy, readonly) UIView *(^setBorder)(CGFloat, UIColor *);
@property (nonatomic, copy, readonly) UIView *(^setBorderWidth)(CGFloat);
@property (nonatomic, copy, readonly) UIView *(^setBorderColor)(UIColor *);
@property (nonatomic, copy, readonly) UIView *(^setTag)(NSInteger);
@property (nonatomic, copy, readonly) UIView *(^setContentMode)(UIViewContentMode);
@property (nonatomic, copy, readonly) UIView *(^setUserInterface)(BOOL);
@property (nonatomic, copy, readonly) UIView *(^setClipsToBounds)(BOOL);
@property (nonatomic, copy, readonly) UIView *(^setTapAction)(UIViewCallBack);
@property (nonatomic, copy, readonly) UIView *(^setTargetAndAction)(id, SEL);
@property (nonatomic, copy, readonly) UIView *(^setSuperView)(UIView *);
#ifdef MAS_VIEW
@property (nonatomic, copy, readonly) UIView *(^setConstraint)(UIViewConstraint);
#endif
@end

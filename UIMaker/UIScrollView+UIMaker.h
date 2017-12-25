//
//  UIScrollView+UIMaker.h
//  UIMaker
//
//  Created by admin on 2017/12/25.
//  Copyright © 2017年 admin. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIScrollView (UIMaker)

+(instancetype)maker;

@property (nonatomic, copy, readonly) UIScrollView *(^setFrame)(CGRect);
@property (nonatomic, copy, readonly) UIScrollView *(^setBackgroundColor)(UIColor *);
@property (nonatomic, copy, readonly) UIScrollView *(^setAlpha)(CGFloat);
@property (nonatomic, copy, readonly) UIScrollView *(^setHidden)(BOOL);
@property (nonatomic, copy, readonly) UIScrollView *(^setCornerRadius)(CGFloat);
@property (nonatomic, copy, readonly) UIScrollView *(^setBorder)(CGFloat, UIColor *);
@property (nonatomic, copy, readonly) UIScrollView *(^setBorderWidth)(CGFloat);
@property (nonatomic, copy, readonly) UIScrollView *(^setBorderColor)(UIColor *);
@property (nonatomic, copy, readonly) UIScrollView *(^setTag)(NSInteger);
@property (nonatomic, copy, readonly) UIScrollView *(^setContentMode)(UIViewContentMode);
@property (nonatomic, copy, readonly) UIScrollView *(^setUserInterface)(BOOL);
@property (nonatomic, copy, readonly) UIScrollView *(^setClipsToBounds)(BOOL);
//@property (nonatomic, copy, readonly) UIScrollView *(^setTapAction)(UIImageViewCallBack);
@property (nonatomic, copy, readonly) UIScrollView *(^setSuperView)(UIView *);



/*** 上面是继承UIView的 ****/
/*** 下面是UIScrollView独有的 ****/
@property (nonatomic, copy, readonly) UIScrollView *(^setContentOffset)(CGPoint);
@property (nonatomic, copy, readonly) UIScrollView *(^setContentSize)(CGSize);
@property (nonatomic, copy, readonly) UIScrollView *(^setContentInsets)(UIEdgeInsets);
@property (nonatomic, copy, readonly) UIScrollView *(^setDelegate)(id);
@property (nonatomic, copy, readonly) UIScrollView *(^setBounces)(BOOL);
@property (nonatomic, copy, readonly) UIScrollView *(^setAlwaysBounceVertical)(BOOL);
@property (nonatomic, copy, readonly) UIScrollView *(^setAlwaysBounceHorizontal)(BOOL);
@property (nonatomic, copy, readonly) UIScrollView *(^setScrollEnabled)(BOOL);
@property (nonatomic, copy, readonly) UIScrollView *(^setShowsVertical)(BOOL);
@property (nonatomic, copy, readonly) UIScrollView *(^setShowsHorizontal)(BOOL);
@property (nonatomic, copy, readonly) UIScrollView *(^setIndicatorInsets)(UIEdgeInsets);
@property (nonatomic, copy, readonly) UIScrollView *(^setIndicatorStyle)(UIScrollViewIndicatorStyle);
@property (nonatomic, copy, readonly) UIScrollView *(^setKeyboardDismissMode)(UIScrollViewKeyboardDismissMode);
@end

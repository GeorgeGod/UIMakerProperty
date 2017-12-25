//
//  UIImageView+UIMaker.h
//  UIMaker
//
//  Created by admin on 2017/12/25.
//  Copyright © 2017年 admin. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^UIImageViewCallBack)(UIImageView *imageView);
@interface UIImageView (UIMaker)

+(instancetype)maker;

@property (nonatomic, copy, readonly) UIImageView *(^setFrame)(CGRect);
@property (nonatomic, copy, readonly) UIImageView *(^setBackgroundColor)(UIColor *);
@property (nonatomic, copy, readonly) UIImageView *(^setAlpha)(CGFloat);
@property (nonatomic, copy, readonly) UIImageView *(^setHidden)(BOOL);
@property (nonatomic, copy, readonly) UIImageView *(^setCornerRadius)(CGFloat);
@property (nonatomic, copy, readonly) UIImageView *(^setBorder)(CGFloat, UIColor *);
@property (nonatomic, copy, readonly) UIImageView *(^setBorderWidth)(CGFloat);
@property (nonatomic, copy, readonly) UIImageView *(^setBorderColor)(UIColor *);
@property (nonatomic, copy, readonly) UIImageView *(^setTag)(NSInteger);
@property (nonatomic, copy, readonly) UIImageView *(^setContentMode)(UIViewContentMode);
@property (nonatomic, copy, readonly) UIImageView *(^setUserInterface)(BOOL);
@property (nonatomic, copy, readonly) UIImageView *(^setClipsToBounds)(BOOL);
@property (nonatomic, copy, readonly) UIImageView *(^setTapAction)(UIImageViewCallBack);
@property (nonatomic, copy, readonly) UIImageView *(^setTargetAndAction)(id, SEL);
@property (nonatomic, copy, readonly) UIImageView *(^setSuperView)(UIView *);



/*** 上面是继承UIView的 ****/
/*** 下面才是UIImageView独有的 ****/
@property (nonatomic, copy, readonly) UIImageView *(^setImageName)(NSString *);
@property (nonatomic, copy, readonly) UIImageView *(^setImage)(UIImage *);
@property (nonatomic, copy, readonly) UIImageView *(^setImages)(NSArray<UIImage *> *);
@property (nonatomic, copy, readonly) UIImageView *(^setAnimation)(NSTimeInterval, NSInteger);
@end

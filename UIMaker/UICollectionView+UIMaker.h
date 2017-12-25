//
//  UICollectionView+UIMaker.h
//  UIMaker
//
//  Created by admin on 2017/12/25.
//  Copyright © 2017年 admin. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UICollectionView (UIMaker)

+(instancetype)maker;


/**
 设置frame
 */
-(UICollectionView *(^)(CGRect))setFrame;

/**
 设置背景色
 */
-(UICollectionView *(^)(UIColor *))setBackgroundColor;

/**
 设置透明度
 */
-(UICollectionView *(^)(CGFloat))setAlpha;

/**
 设置是否隐藏
 */
-(UICollectionView *(^)(BOOL))setHidden;

/**
 设置圆角
 */
-(UICollectionView *(^)(CGFloat))setCornerRadius;

/**
 设置边框
 */
-(UICollectionView *(^)(CGFloat, UIColor *))setBorder;

/**
 设置边框宽度
 */
-(UICollectionView *(^)(CGFloat))setBorderWidth;

/**
 设置边框颜色
 */
-(UICollectionView *(^)(UIColor *))setBorderColor;

/**
 设置tag值
 */
-(UICollectionView *(^)(NSInteger))setTag;

/**
 设置内容显示模式
 */
-(UICollectionView *(^)(UIViewContentMode))setContentMode;

/**
 设置是否可触摸
 */
-(UICollectionView *(^)(BOOL))setUserInterface;

/**
 设置是否裁剪
 */
-(UICollectionView *(^)(BOOL))setClipsToBounds;

/**
 设置是否可用
 */
-(UICollectionView *(^)(BOOL))setEnabled;

/**
 添加到父视图上
 */
-(UICollectionView *(^)(UIView *))setSuperView;






/*** 上面是继承UIView的 ****/
/*** 下面才是UICollectionView独有的 ****/
-(UICollectionView *(^)(id))setDelegateAndDataSource;

@end

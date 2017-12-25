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


@property (nonatomic, copy, readonly) UICollectionView *(^setFrame)(CGRect);
@property (nonatomic, copy, readonly) UICollectionView *(^setBackgroundColor)(UIColor *);
@property (nonatomic, copy, readonly) UICollectionView *(^setAlpha)(CGFloat);
@property (nonatomic, copy, readonly) UICollectionView *(^setHidden)(BOOL);
@property (nonatomic, copy, readonly) UICollectionView *(^setCornerRadius)(CGFloat);
@property (nonatomic, copy, readonly) UICollectionView *(^setBorder)(CGFloat, UIColor *);
@property (nonatomic, copy, readonly) UICollectionView *(^setBorderWidth)(CGFloat);
@property (nonatomic, copy, readonly) UICollectionView *(^setBorderColor)(UIColor *);
@property (nonatomic, copy, readonly) UICollectionView *(^setTag)(NSInteger);
@property (nonatomic, copy, readonly) UICollectionView *(^setContentMode)(UIViewContentMode);
@property (nonatomic, copy, readonly) UICollectionView *(^setUserInterface)(BOOL);
@property (nonatomic, copy, readonly) UICollectionView *(^setClipsToBounds)(BOOL);
//@property (nonatomic, copy, readonly) UICollectionView *(^setTapAction)(UIImageViewCallBack);
@property (nonatomic, copy, readonly) UICollectionView *(^setSuperView)(UIView *);



/*** 上面是继承UIView的 ****/
/*** 下面才是UICollectionView独有的 ****/
@property (nonatomic, copy, readonly) UICollectionView *(^setDelegateAndDataSource)(id);
@end

//
//  UITableView+UIMaker.h
//  UIMaker
//
//  Created by admin on 2017/12/25.
//  Copyright © 2017年 admin. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UITableView (UIMaker)

+(instancetype)maker;
+(instancetype)makerPlain;
+(instancetype)makerGrouped;

@property (nonatomic, copy, readonly) UITableView *(^setFrame)(CGRect);
@property (nonatomic, copy, readonly) UITableView *(^setBackgroundColor)(UIColor *);
@property (nonatomic, copy, readonly) UITableView *(^setAlpha)(CGFloat);
@property (nonatomic, copy, readonly) UITableView *(^setHidden)(BOOL);
@property (nonatomic, copy, readonly) UITableView *(^setCornerRadius)(CGFloat);
@property (nonatomic, copy, readonly) UITableView *(^setBorder)(CGFloat, UIColor *);
@property (nonatomic, copy, readonly) UITableView *(^setBorderWidth)(CGFloat);
@property (nonatomic, copy, readonly) UITableView *(^setBorderColor)(UIColor *);
@property (nonatomic, copy, readonly) UITableView *(^setTag)(NSInteger);
@property (nonatomic, copy, readonly) UITableView *(^setContentMode)(UIViewContentMode);
@property (nonatomic, copy, readonly) UITableView *(^setUserInterface)(BOOL);
@property (nonatomic, copy, readonly) UITableView *(^setClipsToBounds)(BOOL);
//@property (nonatomic, copy, readonly) UITableView *(^setTapAction)(UIImageViewCallBack);
@property (nonatomic, copy, readonly) UITableView *(^setSuperView)(UIView *);



/*** 上面是继承UIView的 ****/
/*** 下面是UIScrollView独有的 ****/
@property (nonatomic, copy, readonly) UITableView *(^setContentOffset)(CGPoint);
@property (nonatomic, copy, readonly) UITableView *(^setContentSize)(CGSize);
@property (nonatomic, copy, readonly) UITableView *(^setContentInsets)(UIEdgeInsets);
@property (nonatomic, copy, readonly) UITableView *(^setBounces)(BOOL);
@property (nonatomic, copy, readonly) UITableView *(^setAlwaysBounceVertical)(BOOL);
@property (nonatomic, copy, readonly) UITableView *(^setAlwaysBounceHorizontal)(BOOL);
@property (nonatomic, copy, readonly) UITableView *(^setScrollEnabled)(BOOL);
@property (nonatomic, copy, readonly) UITableView *(^setShowsVertical)(BOOL);
@property (nonatomic, copy, readonly) UITableView *(^setShowsHorizontal)(BOOL);
@property (nonatomic, copy, readonly) UITableView *(^setIndicatorInsets)(UIEdgeInsets);
@property (nonatomic, copy, readonly) UITableView *(^setIndicatorStyle)(UIScrollViewIndicatorStyle);
@property (nonatomic, copy, readonly) UITableView *(^setKeyboardDismissMode)(UIScrollViewKeyboardDismissMode);



/*** 下面才是UITableView独有的 ****/
@property (nonatomic, copy, readonly) UITableView *(^setDelegateAndDataSource)(id);
@property (nonatomic, copy, readonly) UITableView *(^setRowHeight)(CGFloat);
@property (nonatomic, copy, readonly) UITableView *(^setHeaderHeight)(CGFloat);
@property (nonatomic, copy, readonly) UITableView *(^setFooterHeight)(CGFloat);
@property (nonatomic, copy, readonly) UITableView *(^setSeparatorStyle)(UITableViewCellSeparatorStyle);
@property (nonatomic, copy, readonly) UITableView *(^setHeaderView)(UIView *);
@property (nonatomic, copy, readonly) UITableView *(^setFooterView)(UIView *);
@end

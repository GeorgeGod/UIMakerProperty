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


/**
 设置frame
 */
-(UITableView *(^)(CGRect))setFrame;

/**
 设置背景色
 */
-(UITableView *(^)(UIColor *))setBackgroundColor;

/**
 设置透明度
 */
-(UITableView *(^)(CGFloat))setAlpha;

/**
 设置是否隐藏
 */
-(UITableView *(^)(BOOL))setHidden;

/**
 设置圆角
 */
-(UITableView *(^)(CGFloat))setCornerRadius;

/**
 设置边框
 */
-(UITableView *(^)(CGFloat, UIColor *))setBorder;

/**
 设置边框宽度
 */
-(UITableView *(^)(CGFloat))setBorderWidth;

/**
 设置边框颜色
 */
-(UITableView *(^)(UIColor *))setBorderColor;

/**
 设置tag值
 */
-(UITableView *(^)(NSInteger))setTag;

/**
 设置内容显示模式
 */
-(UITableView *(^)(UIViewContentMode))setContentMode;

/**
 设置是否可触摸
 */
-(UITableView *(^)(BOOL))setUserInterface;

/**
 设置是否裁剪
 */
-(UITableView *(^)(BOOL))setClipsToBounds;

/**
 设置是否可用
 */
-(UITableView *(^)(BOOL))setEnabled;

/**
 添加到父视图上
 */
-(UITableView *(^)(UIView *))setSuperView;






/*** 上面是继承UIView的 ****/
/*** 下面是UIScrollView独有的 ****/
-(UITableView *(^)(CGPoint))setContentOffset;
-(UITableView *(^)(CGSize))setContentSize;
-(UITableView *(^)(UIEdgeInsets))setContentInsets;
-(UITableView *(^)(BOOL))setBounces;
-(UITableView *(^)(BOOL))setAlwaysBounceVertical;
-(UITableView *(^)(BOOL))setAlwaysBounceHorizontal;
-(UITableView *(^)(BOOL))setScrollEnabled;
-(UITableView *(^)(BOOL))setShowsVertical;
-(UITableView *(^)(BOOL))setShowsHorizontal;
-(UITableView *(^)(UIEdgeInsets))setIndicatorInsets;
-(UITableView *(^)(UIScrollViewIndicatorStyle))setIndicatorStyle;
-(UITableView *(^)(UIScrollViewKeyboardDismissMode))setKeyboardDismissMode;


/*** 下面才是UITableView独有的 ****/
-(UITableView *(^)(id))setDelegateAndDataSource;
-(UITableView *(^)(CGFloat))setRowHeight;
-(UITableView *(^)(CGFloat))setHeaderHeight;
-(UITableView *(^)(CGFloat))setFooterHeight;
-(UITableView *(^)(UITableViewCellSeparatorStyle))setSeparatorStyle;

-(UITableView *(^)(UIView *))setHeaderView;
-(UITableView *(^)(UIView *))setFooterView;

@end

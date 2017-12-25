//
//  UITableView+UIMaker.m
//  UIMaker
//
//  Created by admin on 2017/12/25.
//  Copyright © 2017年 admin. All rights reserved.
//

#import "UITableView+UIMaker.h"

@implementation UITableView (UIMaker)

/*
 -(UITableView *(^)(CGFloat))setRowHeight;
 -(UITableView *(^)(CGFloat))setHeaderHeight;
 -(UITableView *(^)(CGFloat))setFooterHeight;
 -(UITableView *(^)(UITableViewCellSeparatorStyle))setSeparatorStyle;
 
 -(UITableView *(^)(UIView *))setHeaderView;
 -(UITableView *(^)(UIView *))setFooterView;
 */

-(UITableView *(^)(id))setDelegateAndDataSource {
    return ^(id obj) {
        self.delegate = obj;
        self.dataSource = obj;
        return self;
    };
}
-(UITableView *(^)(CGFloat))setRowHeight {
    return ^(CGFloat height) {
        self.rowHeight = height;
        return self;
    };
}
-(UITableView *(^)(CGFloat))setHeaderHeight {
    return ^(CGFloat height) {
        self.sectionHeaderHeight = height;
        return self;
    };
}
-(UITableView *(^)(CGFloat))setFooterHeight {
    return ^(CGFloat height) {
        self.sectionFooterHeight = height;
        return self;
    };
}
-(UITableView *(^)(UITableViewCellSeparatorStyle))setSeparatorStyle {
    return ^(UITableViewCellSeparatorStyle style) {
        self.separatorStyle = style;
        return self;
    };
}
-(UITableView *(^)(UIView *))setHeaderView {
    return ^(UIView *header) {
        self.tableHeaderView = header;
        return self;
    };
}
-(UITableView *(^)(UIView *))setFooterView {
    return ^(UIView *footer) {
        self.tableFooterView = footer;
        return self;
    };
}
@end

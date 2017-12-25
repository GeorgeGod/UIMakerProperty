//
//  UICollectionView+UIMaker.m
//  UIMaker
//
//  Created by admin on 2017/12/25.
//  Copyright © 2017年 admin. All rights reserved.
//

#import "UICollectionView+UIMaker.h"

@implementation UICollectionView (UIMaker)

+(instancetype)maker {
    UICollectionViewFlowLayout *layout = [UICollectionViewFlowLayout new];
    UICollectionView *col = [[UICollectionView alloc] initWithFrame:CGRectZero collectionViewLayout:layout];
    return col;
}

-(UICollectionView *(^)(id))setDelegateAndDataSource {
    return ^(id obj) {
        self.delegate = obj;
        self.dataSource = obj;
        return self;
    };
}
@end

//
//  ViewController.m
//  UIMakerDemo
//
//  Created by admin on 2017/12/25.
//  Copyright © 2017年 admin. All rights reserved.
//

#import "ViewController.h"
#import "UIMaker.h"

@interface ViewController ()<UITableViewDelegate, UITableViewDataSource>

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];

    NSLog(@"Maker Version is %lf", UIMakerVersionNumber);
    
    UIView.maker.setFrame(CGRectMake(100, 100, 100, 100)).setBackgroundColor([UIColor redColor]).setSuperView(self.view).setAlpha(0.5);

    UILabel.maker.setFrame(CGRectMake(100, 220, 100, 100)).setBackgroundColor([UIColor greenColor]).setSuperView(self.view).setText(@"ssa");

    UITableView.makerGrouped.setFrame(self.view.bounds).setDelegateAndDataSource(self).setSuperView(self.view);
        UILabel.maker.setFrame(CGRectMake(100, 200, 100, 100));
    
    UIImageView.maker.setFrame(CGRectMake(100, 100, 100, 100)).setBackgroundColor([UIColor redColor]).setTapAction(^(UIImageView *iv) {
        
        if ([iv isKindOfClass:[UIImageView class]]) {
            NSLog(@"---ssssss");
        } else {
            NSLog(@"---eeeeee");
        }
    }).setSuperView(self.view).setCornerRadius(50).setClipsToBounds(YES).setBorder(5, [UIColor greenColor]);
    
    UIView.maker.setFrame(CGRectMake(100, 220, 100, 100)).setBackgroundColor([UIColor greenColor]).setTargetAndAction(self, @selector(btnAction:)).setSuperView(self.view).setUserInterface(YES);
}

-(NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section {
    return 10;
}
-(UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath {
    return [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleDefault reuseIdentifier:@""];
}

-(void)btnAction:(UIButton *)sender {
    NSLog(@"=====aa");
    [self setFrame:(CGRect){0, 0, 100, 100}];
}

-(void)setFrame:(CGRect)rect {
    
}

@end

//
//  ViewController.m
//  UIMakerDemo
//
//  Created by admin on 2017/12/25.
//  Copyright © 2017年 admin. All rights reserved.
//

#import "ViewController.h"
#import "UIMaker.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
//    UIButton
//    UILabel *lab = [UILabel new];
//    lab.enabled = YES;
//
//    UITextField *tf = [UITextField new];
//    tf.keyboardType = UIKeyboardTypeURL;

    UIView.maker.setFrame(CGRectMake(100, 100, 100, 100)).setBackgroundColor([UIColor redColor]).setSuperView(self.view).setTapAction(^(UIView *view){
        NSLog(@"滴滴滴");
    });
    
//    UILabel.maker.setTextColor([UIColor whiteColor]).setFrame(CGRectMake(100, 220, 100, 100)).setBackgroundColor([UIColor greenColor]).setSuperView(self.view).setText(@"www").setTapAction(^(UILabel *lab){
//        NSLog(@"aaa");
//    });
//    
//    UIButton.maker.setTitle(@"title", UIControlStateNormal).setSuperView(self.view).setFrame(CGRectMake(100, 340, 100, 44)).setAction(^(UIButton *sender) {
//        NSLog(@"bbb");
//    }).setBackgroundColor([UIColor yellowColor]).setDelegate(self, @selector(btnAction:));
//    
//    UILabel.maker.setFrame(CGRectMake(220, 100, 50, 100)).setBackgroundColor([UIColor purpleColor]).setSuperView(self.view);
    
    UIView.maker.setFrame(CGRectMake(100, 100, 100, 100)).setSuperView(self.view).setBackgroundColor([UIColor redColor]);
}

//-(void)btnAction:(UIButton *)sender {
//    NSLog(@"=====aa");
//}


@end

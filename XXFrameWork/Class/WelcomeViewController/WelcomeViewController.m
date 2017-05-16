//
//  WelcomeViewController.m
//  XXFrameWork
//
//  Created by 徐徐 on 2017/5/16.
//  Copyright © 2017年 徐徐. All rights reserved.
//

#import "WelcomeViewController.h"

@interface WelcomeViewController ()

@property (nonatomic,strong) UILabel *welcomeLabel;


@end

@implementation WelcomeViewController

- (void)viewDidLoad {
    [super viewDidLoad];

    [self.view addSubview:self.welcomeLabel];
}

- (UILabel *)welcomeLabel {
    if (!_welcomeLabel) {
        _welcomeLabel = [[UILabel alloc]initWithFrame:CGRectMake(100, 100, 100, 100)];
        _welcomeLabel.textColor  = [UIColor blackColor];
        _welcomeLabel.font = [UIFont systemFontOfSize:16];
        _welcomeLabel.text = @"引导页";
    }
    return _welcomeLabel;
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end

//
//  XXBaseViewController.m
//  XXFrameWork
//
//  Created by 徐徐 on 2017/5/12.
//  Copyright © 2017年 徐徐. All rights reserved.
//

#import "XXBaseViewController.h"

@interface XXBaseViewController ()

@end

@implementation XXBaseViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    self.view.backgroundColor = [UIColor whiteColor];
    [self.view addSubview:self.topBar];
    [self.view addSubview:self.contentView];
}

- (XXCustomTopBarView *)topBar {
    if (!_topBar) {
        _topBar = [[XXCustomTopBarView alloc] initWithFrame:CGRectMake(0, 0, self.view.frame.size.width, 64) backBlock:^{
            [self.navigationController popViewControllerAnimated:YES];
        } rightBlock:^{
            
        }];
    }
    return _topBar;
}

- (UIView *)contentView {
    if (_contentView) {
        _contentView = [UIView new];
        _contentView.frame = CGRectMake(0, self.topBar.frame.origin.y + self.topBar.frame.size.height, self.view.frame.size.width, self.view.frame.size.height - self.topBar.frame.origin.y - self.topBar.frame.size.height);
    }
    return _contentView;
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end

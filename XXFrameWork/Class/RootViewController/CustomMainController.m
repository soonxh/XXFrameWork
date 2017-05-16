//
//  CustomMainController.m
//  XXFrameWork
//
//  Created by 徐徐 on 2017/5/16.
//  Copyright © 2017年 徐徐. All rights reserved.
//

#import "CustomMainController.h"
#import "FirstViewController.h"
#import "SecondViewController.h"
#import "XXBaseViewController.h"

@interface CustomMainController ()

@end

@implementation CustomMainController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    self.view.backgroundColor = [UIColor whiteColor];
    
    self.tabBar.tintColor = [UIColor redColor];//修改颜色
    self.tabBar.translucent = YES;

    [self addChildViewControllerWithvcName:[FirstViewController new] title:@"第一" imageName:@"tab_newhome_normal" selectedImage:@"tab_newhome_pressed"];
    [self addChildViewControllerWithvcName:[SecondViewController new] title:@"第二" imageName:@"tab_write_normal" selectedImage:@"tab_write_pressed"];
    [self addChildViewControllerWithvcName:[SecondViewController new] title:@"第三" imageName:@"tab_write_normal" selectedImage:@"tab_write_pressed"];

}

- (void)addChildViewControllerWithvcName:(XXBaseViewController *)vcName title:(NSString *)title imageName:(NSString *)imageName selectedImage:(NSString *)selectedImage {
    
    UINavigationController *NC = [[UINavigationController alloc]initWithRootViewController:vcName];
//    NC.topViewController.title = title;
    NC.navigationBarHidden = YES;
    
    NC.tabBarItem.title = title;
    
    NC.tabBarItem.image = [UIImage imageNamed:imageName];
    
    UIImage *selectTempImg = [[UIImage imageNamed:selectedImage] imageWithRenderingMode:UIImageRenderingModeAlwaysOriginal];//去掉渲染
    NC.tabBarItem.selectedImage = selectTempImg;
    
    NSMutableDictionary *textAttrs = [NSMutableDictionary dictionary];
    textAttrs[NSFontAttributeName] = [UIFont systemFontOfSize:12];
    NSMutableDictionary *selectedTextAttrs = [NSMutableDictionary dictionary];
    selectedTextAttrs[NSFontAttributeName] = [UIFont systemFontOfSize:12];
    selectedTextAttrs[NSForegroundColorAttributeName] = [UIColor colorWithRed:255.0/255.0 green:122.0/255.0 blue:123.0/255.0 alpha:1];
    [NC.tabBarItem setTitleTextAttributes:textAttrs forState:(UIControlStateNormal)];
    [NC.tabBarItem setTitleTextAttributes:selectedTextAttrs forState:(UIControlStateSelected)];
    
    [self addChildViewController:NC];
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end

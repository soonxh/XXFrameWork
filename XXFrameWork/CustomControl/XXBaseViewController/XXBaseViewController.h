//
//  XXBaseViewController.h
//  XXFrameWork
//
//  Created by 徐徐 on 2017/5/12.
//  Copyright © 2017年 徐徐. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "XXCustomTopBarView.h"

@interface XXBaseViewController : UIViewController<UITabBarControllerDelegate>


@property (nonatomic,strong) XXCustomTopBarView *topBar;
@property (nonatomic,strong) UIView *contentView;

@end

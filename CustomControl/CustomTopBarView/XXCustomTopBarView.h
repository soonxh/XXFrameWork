//
//  XXCustomTopBarView.h
//  XXFrameWork
//
//  Created by 徐徐 on 2017/5/12.
//  Copyright © 2017年 徐徐. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^CustomTopBarBackBlock)();
typedef void(^CustomTopBarRightBlock)();


@interface XXCustomTopBarView : UIView

@property (nonatomic,strong) UIImageView *bgImageView;
@property (nonatomic,strong) UIButton *backBtn;
@property (nonatomic,strong) UIButton *rightBtn;
@property (nonatomic,strong) UILabel *titleLabel;

- (instancetype)initWithFrame:(CGRect)frame backBlock:(CustomTopBarBackBlock)backblock rightBlock:(CustomTopBarRightBlock)rightblock;

@end

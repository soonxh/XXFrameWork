//
//  XXCustomTopBarView.m
//  XXFrameWork
//
//  Created by 徐徐 on 2017/5/12.
//  Copyright © 2017年 徐徐. All rights reserved.
//

#import "XXCustomTopBarView.h"

@implementation XXCustomTopBarView

- (instancetype)initWithFrame:(CGRect)frame  backBlock:(CustomTopBarBackBlock)backblock rightBlock:(CustomTopBarRightBlock)rightblock{
    self = [super initWithFrame:frame];
    if (self) {
        [self creatUI];
        if (backblock) {
            backblock();
        }
        
        if (rightblock) {
            rightblock();
        }
    }
    return self;
}

- (void)creatUI {
    [self addSubview:self.bgImageView];
    [self addSubview:self.titleLabel];
    [self addSubview:self.backBtn];
}

- (UIImageView *)bgImageView {
    if (!_bgImageView) {
        _bgImageView = [UIImageView new];
        _bgImageView.backgroundColor = [UIColor redColor];
        _bgImageView.frame = self.frame;
    }
    return _bgImageView;
}

- (UIButton *)backBtn {
    if (!_backBtn) {
        _backBtn = [UIButton buttonWithType:UIButtonTypeCustom];
        _backBtn.backgroundColor = [UIColor greenColor];
        _backBtn.frame = CGRectMake(10, 10, 20, 20);
    }
    return _backBtn;
}

- (UIButton *)rightBtn {
    if (!_rightBtn) {
        _rightBtn = [UIButton buttonWithType:UIButtonTypeCustom];
        _rightBtn.backgroundColor = [UIColor greenColor];
    }
    return _rightBtn;
}

- (UILabel *)titleLabel {
    if (!_titleLabel) {
        _titleLabel = [UILabel new];
        _titleLabel.textAlignment = NSTextAlignmentCenter;
        _titleLabel.textColor = [UIColor blackColor];
        _titleLabel.frame = CGRectMake(100, 20, 100, 30);
    }
    return _titleLabel;
}

@end

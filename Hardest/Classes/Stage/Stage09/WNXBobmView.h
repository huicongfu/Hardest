//
//  WNXBobmView.h
//  Hardest
//
//  Created by 维尼的小熊 on 16/4/12.
//  Copyright © 2016年 维尼的小熊. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WNXBobmView : UIView

@property (nonatomic, copy) void (^timeOver)();

- (void)startCountDown;

- (NSTimeInterval)stopCountDown;

- (void)pasueCountDown;

- (void)resumeCountDown;

- (void)clean;

- (void)cleanLabelStage;

@end

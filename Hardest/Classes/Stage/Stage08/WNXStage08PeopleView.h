//
//  WNXStage08PeopleView.h
//  Hardest
//
//  Created by 维尼的小熊 on 16/4/11.
//  Copyright © 2016年 维尼的小熊. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WNXStage08PeopleView : UIView

@property (nonatomic, copy) void(^startTakePhoto)();
@property (nonatomic, copy) void(^shopTakePhoto)();
@property (nonatomic, copy) void(^nextTakePhoto)(BOOL isPass);

- (BOOL)takePhotoWithIndex:(int)index;

- (void)showModel;

- (void)stopTime;

- (void)cleanDate;

- (void)pause;
- (void)resume;

@end

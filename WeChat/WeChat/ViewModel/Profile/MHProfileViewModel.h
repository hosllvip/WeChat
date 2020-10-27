//
//  MHProfileViewModel.h
//  WeChat
//
//  Created by senba on 2017/9/11.
//  Copyright © 2017年 CoderMikeHe. All rights reserved.
//

#import "MHCommonViewModel.h"
#import "MHCommonArrowItemViewModel.h"
#import "MHCommonProfileHeaderItemViewModel.h"

#import "MHVideoTrendsWrapperViewModel.h"


@interface MHProfileViewModel : MHCommonViewModel
/// The current `user`.
@property (nonatomic, readonly , strong) MHUser *user;
/// cameraCommand
@property (nonatomic, readonly, strong) RACCommand *cameraCommand;


/// 下拉视频动态
/// videoTrendsWrapperViewModel
@property (nonatomic, readonly, strong) MHVideoTrendsWrapperViewModel *videoTrendsWrapperViewModel;
/// offsetInfo
@property (nonatomic, readonly, copy) NSDictionary *offsetInfo;
@end

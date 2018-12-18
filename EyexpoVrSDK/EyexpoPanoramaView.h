//
//  EyexpoPanoramaView.h
//  DianPingVrDemo
//
//  Created by ShuangYi on 2018/11/10.
//  Copyright © 2018 ShuangYi. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <GLKit/GLKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface EyexpoPanoramaView : GLKView

@property (nonatomic, strong, readonly) UIImageView *loadingIv;


/**
 vr 图片完成加载
 */
@property (nonatomic) BOOL vrLoadedB;

@property (nonatomic, copy) void (^loadVrFinished)(NSError *error);

/**
 新建全景图对象
 
 @param frame panorama view展示区域
 */
- (instancetype)initWithFrame:(CGRect)frame;

- (void)showLoadingImg:(UIImage *)img;

/**
 加载全景图片
 */
- (void)startVrWithImg:(UIImage *)img;

/**
 当不再使用时应该释放内存，e.g：tableView代理的didEndDisplayingCell
 */
- (void)unloadImage;

@end



NS_ASSUME_NONNULL_END

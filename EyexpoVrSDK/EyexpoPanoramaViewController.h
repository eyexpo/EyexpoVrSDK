//
//  ViewController.h
//  全景_图片
//
//  Created by huang.ziyang on 16/8/4.
//  Copyright © 2016年 H. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <GLKit/GLKit.h>

@interface EyexpoPanoramaViewController : GLKViewController

@property (nonatomic, strong) UIImage *vrImg;

/**
 点击view，dismiss ViewController
 */
@property (nonatomic) BOOL enableTouchToDismissB;


/**
 继承此vc，然后在viewDidLoad中调用

 */
- (void)addVrImg:(UIImage *)img;

@end


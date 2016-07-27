//
//  HYLaunchImageAdView.h
//  HYLaunchImageAd
//
//  Created by 黄海燕 on 16/7/26.
//  Copyright © 2016年 huanghy. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <UIImageView+WebCache.h>


#define mainHeight      [[UIScreen mainScreen] bounds].size.height
#define mainWidth       [[UIScreen mainScreen] bounds].size.width

typedef NS_ENUM(NSUInteger,AdType){
    FullScreenAdType = 1,//全屏的广告
    LogoAdType = 0,//带logo的广告
    
};

typedef void (^HYClick) (NSInteger tag);

@interface HYLaunchImageAdView : UIView

@property (strong, nonatomic) UIImageView *aDImgView;
@property (strong, nonatomic) UIImageView *launchImageView;
@property (strong, nonatomic) UIWindow *window;
@property (assign, nonatomic) NSInteger adTime; //倒计时总时长,默认3秒
@property (strong, nonatomic) UIButton *skipBtn;

@property (nonatomic, copy)HYClick clickBlock;

- (instancetype)initWithWindow:(UIWindow *)window andType:(NSInteger)type andImgUrl:(NSString *)url;

@end

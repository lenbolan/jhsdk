//
//  AppManager.h
//  ggsdk
//
//  Created by lenbo lan on 2021/10/15.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

// 是否开放所有功能，NO - 只开放登录和上传凭证
static BOOL OPEN_FULL_ABILITY = NO;

@interface AppManager : NSObject

/// 装配广告配置
/// @param data 广告参数数据
+(void)setupParams:(NSArray *)data;

/// 获取App配置
+(void)getAppConfig;

/// 打开推广功能
/// @param vc 当前UIViewController
+(void)popup:(UIViewController *)vc;


/// 打开登录窗口
/// @param vc 当前UIViewController
+(void)login:(UIViewController *)vc;

/// 是否已登录
+(BOOL)isLogin;

/// 是否开放全功能
/// @param flag YES=开放全功能，NO=只开放上传图片
+(void)setFullAbility:(BOOL)flag;

/// 是否为全功能开放
+(BOOL)isFullAbility;

/// 是否打开日志输出
/// @param flag YES=打开日志输出
+(void)setLogEnable:(BOOL)flag;

@end

NS_ASSUME_NONNULL_END

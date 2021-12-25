//
//  AppManager.h
//  ggsdk
//
//  Created by lenbo lan on 2021/10/15.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

// 打开窗口：-1=只登录；0=打开全部; 1=激励; 2=上传凭证
static int NAVI_ID = -1;

@interface AppManager : NSObject

/// 装配广告配置
/// @param data 广告参数数据
+(void)setupParams:(NSArray *)data;

/// 获取App配置
+(void)getAppConfig;

/// 打开推广功能
/// @param vc 当前UIViewController
/// @param naviId 打开窗口：-1=只登录；0=打开全部; 1=激励; 2=上传凭证
+(void)popup:(UIViewController *)vc naviId:(int)naviId;

/// 是否已登录
+(BOOL)isLogin;

/// 打开窗口：-1=只登录；0=打开全部; 1=激励; 2=上传凭证
+(void)setNaviId:(int)naviId;

/// 打开窗口：-1=只登录；0=打开全部; 1=激励; 2=上传凭证
+(int)getNaviId;

/// 是否打开日志输出
/// @param flag YES=打开日志输出
+(void)setLogEnable:(BOOL)flag;

@end

NS_ASSUME_NONNULL_END

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

+(void)setupParams:(NSArray *)data;

+(void)getAppConfig;

+(void)popup:(UIViewController *)vc;

+(void)setFullAbility:(BOOL)flag;

+(void)setLogEnable:(BOOL)flag;

@end

NS_ASSUME_NONNULL_END

//
//  AppManager.h
//  ggsdk
//
//  Created by lenbo lan on 2021/10/15.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface AppManager : NSObject

+(void)setupParams:(NSArray *)data;

+(void)getAppConfig;

+(void)popup:(UIViewController *)vc;

@end

NS_ASSUME_NONNULL_END

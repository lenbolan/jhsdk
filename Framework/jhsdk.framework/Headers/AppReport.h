//
//  AppReport.h
//  ggsdk
//
//  Created by lenbo lan on 2021/12/3.
//

#import <Foundation/Foundation.h>
//#import "UIDevice+Extension.h"

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, AdPlatform) {
    AdPlatformBU,
    AdPlatformGDT
};

typedef NS_ENUM(NSUInteger, AdType) {
    AdTypeSplash,
    AdTypeReward,
    AdTypeBanner,
    AdTypeFlow
};

typedef NS_ENUM(NSUInteger, AdAction) {
    AdActionOpen,
    AdActionStart,
    AdActionLoaded,
    AdActionShow,
    AdActionJump,
    AdActionClick,
    AdActionClose,
    AdActionJumpAndClose
};

typedef struct {
    int uid;
    NSString *phoneNum;
    NSString *phoneType;
    NSString *idfa;
    NSString *idfv;
    NSString *udid;
    NSString *netOperator;
    NSString *netState;
    NSString *ipAddr;
    NSString *sysVersion;
    NSString *appName;
    NSString *bundleId;
    NSString *appVersion;
    NSString *token;
    int serverAppId;
    int clickableNum;
} BaseAdInfo;

@interface AppReport : NSObject

@property (nonatomic, assign) BaseAdInfo baseAdInfo;

+(instancetype)shareInstance;

-(void)initInfo;

-(void)logBaseInfo;


/// 生成广告ID
/// @param adType 广告类型
+ (NSString *)createAdId:(int)adType;

/// 获取手机设备相关数据
-(NSMutableDictionary *)getBaseInfo;

/// 初始化
/// @param uid 用户ID
/// @param phoneNum 手机号
/// @param token 凭证
-(void)rAdInit:(int)uid
      phoneNum:(NSString *)phoneNum
         token:(NSString *)token;


/// 打开广告
/// @param adPlat 广告平台
/// @param adType 广告类型
/// @param adId 广告ID
-(void)rAdOpen:(AdPlatform)adPlat
        adType:(AdType)adType
          adId:(NSString *)adId;


/// 开始加载广告
/// @param adPlat 广告平台
/// @param adType 广告类型
/// @param adId 广告ID
- (void)rAdStart:(AdPlatform)adPlat
          adType:(AdType)adType
            adId:(NSString *)adId;


/// 加载完成
/// @param adPlat 广告平台
/// @param adType 广告类型
/// @param adId 广告ID
/// @param loadedTime 广告加载完成时间（时间戳）
- (void)rAdLoaded:(AdPlatform)adPlat
           adType:(AdType)adType
             adId:(NSString *)adId
       loadedTime:(NSUInteger)loadedTime;


/// 展示
/// @param adPlat 广告平台
/// @param adType 广告类型
/// @param adId 广告ID
/// @param loadedTime 广告加载完成时间（时间戳）
- (void)rAdShow:(AdPlatform)adPlat
         adType:(AdType)adType
           adId:(NSString *)adId
     loadedTime:(NSUInteger)loadedTime;


/// 点击广告
/// @param adPlat 广告平台
/// @param adType 广告类型
/// @param adId 广告ID
/// @param showTime 广告展示时间（时间戳）
/// @param isRepeat 是否为重复点击，0 为第1次点击
- (void)rAdClick:(AdPlatform)adPlat
          adType:(AdType)adType
            adId:(NSString *)adId
        showTime:(NSUInteger)showTime
        isRepeat:(NSUInteger)isRepeat;


/// 跳过广告
/// @param adPlat 广告平台
/// @param adType 广告类型
/// @param adId 广告ID
- (void)rAdJump:(AdPlatform)adPlat
         adType:(AdType)adType
           adId:(NSString *)adId;


/// 关闭广告
/// @param adPlat 广告平台
/// @param adType 广告类型
/// @param adId 广告ID
/// @param openTime 打开广告的时间（时间戳）
/// @param startLoadTime 广告开始加载的时间 （时间戳）
/// @param dataLoadedTime 广告数据加载完成时间（时间戳）
/// @param videoLoadedTime 广告视频加载完成时间（时间戳）
/// @param showTime 广告展示时间（时间戳）
/// @param clickTime 广告点击时间（时间戳）
/// @param jumpTime 广告跳过时间（时间戳）
- (void)rAdClose:(AdPlatform)adPlat
          adType:(AdType)adType
            adId:(NSString *)adId
        openTime:(NSUInteger)openTime
   startLoadTime:(NSUInteger)startLoadTime
  dataLoadedTime:(NSUInteger)dataLoadedTime
 videoLoadedTime:(NSUInteger)videoLoadedTime
        showTime:(NSUInteger)showTime
       clickTime:(NSUInteger)clickTime
        jumpTime:(NSUInteger)jumpTime;


/// 广告出错
/// @param adPlat 广告平台
/// @param adType 广告类型
/// @param err 错误信息
/// @param adId 广告ID
- (void)rAdError:(AdPlatform)adPlat
          adType:(AdType)adType
             err:(NSString*)err
            adId:(NSString *)adId;

/// 上报手机设备相关的基础数据
-(void)rAdBaseInfo;

@end

NS_ASSUME_NONNULL_END

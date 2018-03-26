//
//  GuoanCommunity.h
//  GuoanCommunitySDK
//
//  Created by OctMon on 2018/2/9.
//  Copyright © 2018年 Guoan Community (Beijing) Technology Co., Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "GuoanCommunityUserInfo.h"

@interface GuoanCommunity : NSObject

/**
 设置平台的appkey

 @param appKey appKey
 @param appSecret appSecret
 */
+ (void)setAppKey:(NSString *)appKey appSecret:(NSString *)appSecret;

+ (void)setLogEnabled:(BOOL)value;

/**
 设置是否打印sdk的log信息, 默认NO(不打印log).

 @param format 设置为YES会输出log信息可供调试参考.除非特殊需要,否则发布产品时需改回NO.
 */
+ (void)log:(NSString *)format, ...;

/**
 跳转到SDK首页

 @param current 宿主控制器
 */
+ (void)intoCommunityHome:(UIViewController *)current;

/**
 跳转到SDK指定H5页面
 
 @param current 当前控制器
 @param urlString H5链接地址
 */

+ (void)intoCommunity:(UIViewController *)current urlString:(NSString *)urlString;

/**
 获取sdk版本号

 @return 版本
 */
+ (NSString *)sdkVersion;

/**
 调起宿主关闭SDK
 
 @param handler 回调
 */
+ (void)onCloseCommunityHandler:(void(^)(void))handler;

/**
 调起宿主登录

 @param handler 回调
 */
+ (void)onTryLoginHandler:(void(^)(void))handler;

/**
 调起宿主获取用户信息
 
 @param handler 回调
 */
+ (void)onGetUserInfoHandler:(GuoanCommunityUserInfo *(^)(void))handler;

/**
 调起宿主分享

 @param handler 回调 (NSString *title, NSString *desc, NSString *link, NSString *imgUrl)
 */
+ (void)onShareHandler:(void (^)(NSString *title, NSString *desc, NSString *link, NSString *imgUrl))handler;

@end
//
//  AirSenseSDK.h
//  AirSenseSDK
//
//  Created by Shengsheng on 14/11/16.
//  Copyright © 2016 Cloud Wings. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ASError;

@interface ASAirSenseManager : NSObject

/**
 * Request needed permissions.
 */
+ (void)requestPermission;

/**
 * Register app to SDK server.
 *
 * @param appId AppId.
 * @param appSecret AppSecret.
 * @param success Success callback.
 * @param failure Failure callback.
 */
+ (void)registerWithAppId:(NSString *)appId appSecret:(NSString *)appSecret success:(void(^)(void))success failure:(void(^)(ASError *error))failure;

@end

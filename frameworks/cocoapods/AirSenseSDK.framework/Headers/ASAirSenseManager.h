//
//  ASAirSenseManager.h
//  AirSenseSDK
//
//  Created by Shengsheng on 14/11/16.
//  Copyright © 2016 Cloud Wings. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ASError;
@class ASAirSenseManager;
@class ASUserContent;

@protocol ASAirSenseManagerDelegate <NSObject>

@required

/**
 * Decide whether the AirSense detection can start. Check network access or other prerequisites to start the detection.
 * @return Whether the AirSense detection can start.
 */
- (BOOL)airSenseManagerCanStartDetection;

/**
 * Called when the AirSense detection starts.
 */
- (void)airSenseManagerDidStartDetection;

/**
 * Called when AirSense detection is successfully done with user content detected.
 * @param userContent User content detected.
 */
- (void)airSenseManagerDidSucceedWithUserContent:(ASUserContent *)userContent;

/**
 * Called when AirSense detection process is canceled by user.
 */
- (void)airSenseManagerDidCancel;

/**
 * Called when failure occurred with AirSense detection.
 * @param error Description for the failed detection.
 */
- (void)airSenseManagerDidFailWithError:(ASError *)error;

@end

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

/**
 * Set AirSenseManagerDelegate to handle AirSense detection events.
 *
 * @param airSenseManagerDelegate instance who confirms to AirSenseManagerDelegate protocol
 */
+ (void)setAirSenseManagerDelegate:(id<ASAirSenseManagerDelegate>)airSenseManagerDelegate;

/**
 * Start AirSense detection process.
 */
+ (void)startAirSenseDetection;

/**
 * Stop AirSense detection process.
 */
+ (void)stopAirSenseDetection;

/**
 * After calling this method, when shake motion has been detected by the given view controller, the AirSense detection process will start.
 *
 * @param viewController View controller who will detect the shake motion to trigger AirSense detection. For example, a custom UIViewController subclass instance.
 *
 * @note You can only set one view controller to trigger AirSense detection by shaking.
 *       If you set a new view controller, the previous view controller will lose the ability.
 */
+ (void)enableShakeForViewController:(UIViewController *)viewController;

/**
 * Disable shaking to trigger AirSense detection.
 */
+ (void)disableShake;

@end

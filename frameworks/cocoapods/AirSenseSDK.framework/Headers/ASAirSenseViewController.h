//
//  ASAirSenseViewController.h
//  AirSenseSDK
//
//  Created by Shengsheng on 20/8/16.
//  Copyright © 2016 Cloud Wings. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ASAirSenseViewController, ASUserContent, ASError;

@protocol ASAirSenseDelegate <NSObject>

@required

/**
 * Decide whether the AirSense detection can start. Check network access or other prerequisites to start the detection.
 * @param controller Controller who owns this delegate.
 * @return Whether the AirSense detection can start.
 */
- (BOOL)airSenseControllerCanStartDetection:(ASAirSenseViewController *)controller;

/**
 * Called when the AirSense detection starts.
 * @param controller The shake controller.
 */
- (void)airSenseControllerDidStartDetection:(ASAirSenseViewController *)controller;

/**
 * Called when AirSense detection is successfully done with user content detected.
 * @param controller Controller who owns this delegate.
 * @param userContent User content detected.
 */
- (void)airSenseController:(ASAirSenseViewController *)controller didSucceedWithUserContent:(ASUserContent *)userContent;

/**
 * Called when AirSense detection process is canceled by user.
 * @param controller Controller who owns this delegate.
 */
- (void)airSenseControllerDidCancel:(ASAirSenseViewController *)controller;

/**
 * Called when failure occurred with AirSense detection.
 * @param controller Controller who owns this delegate.
 * @param error Description for the failed detection.
 */
- (void)airSenseController:(ASAirSenseViewController *)controller didFailWithError:(ASError *)error;

@end

@interface ASAirSenseViewController : UIViewController

/** The AirSense delegate for the view controller. */
@property (weak, nonatomic) id<ASAirSenseDelegate> airSenseDelegate;

/** Enable or disable shake by assigning this field. If enabled, AirSense detection will start if user shakes device. */
@property (assign, nonatomic) BOOL shakeEnabled;

/**
 * Start AirSense detection process.
 */
- (void)startAirSenseDetection;

/**
 * Stop AirSense detection process.
 */
- (void)stopAirSenseDetection;

@end

//
//  ASShakeViewController.h
//  AirSenseSDK
//
//  Created by Jet Lee on 30/8/17.
//  Copyright © 2017 Cloud Wings. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ASShakeViewController, ASUserContent, ASError;

@protocol ASShakeDelegate <NSObject>

@optional

/**
 * Actions if microphone access denied.
 * @param controller The shake controller.
 */
- (void)shakeControllerPermissionDenied:(ASShakeViewController *)controller;

@required

/**
 * Decide whether user can shake.
 * @param controller The shake controller.
 * @return Whether user can shake.
 */
- (BOOL)shakeControllerCanShake:(ASShakeViewController *)controller;

/**
 * User has just shook the device.
 * @param controller The shake controller.
 */
- (void)shakeControllerDidShake:(ASShakeViewController *)controller;

/**
 * Successfully retrieved user content.
 * @param controller The shake controller.
 * @param userContent Retrieved user content.
 */
- (void)shakeController:(ASShakeViewController *)controller didSucceedWithUserContent:(ASUserContent *)userContent;

/**
 * User canceled retrieving.
 * @param controller The shake controller.
 */
- (void)shakeControllerDidCancel:(ASShakeViewController *)controller;

/**
 * Failed to retrieve tag.
 * @param controller The shake controller.
 * @param error Error description.
 */
- (void)shakeController:(ASShakeViewController *)controller didFailWithError:(ASError *)error;

@end

@interface ASShakeViewController : UIViewController

/** Shake delegate for this view controller. */
@property (weak, nonatomic) id<ASShakeDelegate> shakeDelegate;

/** Enable or disable shake by assigning this field. */
@property (assign, nonatomic) BOOL shakeEnabled;

/**
 * Simulate a shake without actually shaking device.
 */
- (void)startShake;

/**
 * Cancel shake.
 */
- (void)cancelShake;

@end

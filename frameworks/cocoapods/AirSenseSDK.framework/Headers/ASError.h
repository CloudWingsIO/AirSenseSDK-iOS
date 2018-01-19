//
//  ASErrorModel.h
//  AirSenseSDK
//
//  Created by Jet Lee on 23/8/17.
//  Copyright © 2017 Cloud Wings. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 * Error code definition.
 */
typedef NS_ENUM(NSInteger, ASErrorCode) {
    /// Detection timeout
    ASErrorCodeDetectionTimeout = 1001,
    /// Detection error
    ASErrorCodeDetectionError = 1002,
    /// App locked
    ASErrorCodeAppLocked = 1101,
    /// AppId or appSecret invalid
    ASErrorCodeCredentialInvalid = 1102,
    /// Authentication error
    ASErrorCodeAuthenticationError = 1103,
    /// App not registered
    ASErrorCodeAppNotRegisteredError = 1104,
    /// Microphone permission not granted
    ASErrorCodeMicrophonePermissionError = 1201,
    /// Failed to setup audio session
    ASErrorCodeAudioSessionSetupFailure = 1202,
    /// Network error
    ASErrorCodeNetworkError = 9901,
    /// Server error: backend error description
    ASErrorCodeServerError = 9902,
    /// System error: System error description
    ASErrorCodeSystemError = 9903,
    /// Unknown error
    ASErrorCodeUnknownError = 9999,
};

/**
 * ASError defines the error which could occur in the AirSenseSDK.
 */
@interface ASError : NSObject

@property (assign, nonatomic, readonly) ASErrorCode code;
@property (copy, nonatomic, readonly) NSString *message;

+ (instancetype)errorWithCode:(ASErrorCode)code message:(NSString *)message;

@end

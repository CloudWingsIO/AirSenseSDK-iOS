//
//  ASUserContent.h
//  AirSenseSDK
//
//  Created by Shengsheng on 6/3/17.
//  Copyright © 2017 Cloud Wings. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 User content type.
 */
typedef NS_ENUM(NSInteger, ASUserContentType) {
    ASUserContentTypeScene = 1,
    ASUserContentTypeProduct = 2,
    ASUserContentTypeEvent = 3
};

/**
 User content.
 */
@interface ASUserContent : NSObject

@property(assign, nonatomic) ASUserContentType type;
@property(copy, nonatomic) NSString *title;
@property(copy, nonatomic) NSString *desc;
@property(copy, nonatomic) NSString *imageUrl;
@property(copy, nonatomic) NSDictionary *customizedInfo;

@end

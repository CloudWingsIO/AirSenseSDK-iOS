//
//  ASUserContentProduct.h
//  AirSenseSDK
//
//  Created by Shengsheng on 6/3/17.
//  Copyright © 2017 Cloud Wings. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ASUserContent.h"

/**
 Product position in the scene.
 */
@interface ASUserContentProductPosition : NSObject

/** 0: position not exist, 1: top-left, 2: top-right, 3: bottom-right, 4: bottom-left */
@property (assign, nonatomic) NSUInteger direction;
@property (assign, nonatomic) NSUInteger left;
@property (assign, nonatomic) NSUInteger top;

@end

/**
 Product.
 */
@interface ASUserContentProduct : ASUserContent

@property(copy, nonatomic) NSString *productId;
@property(copy, nonatomic) NSString *price;
@property(copy, nonatomic) NSString *currency;
@property(copy, nonatomic) NSString *url;
@property(copy, nonatomic) NSString *source;
@property(copy, nonatomic) NSString *seller;
@property(strong, nonatomic) ASUserContentProductPosition *position;

@end

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
 Product position of the scene.
 */
typedef struct {
    /** 0: position not exist, 1: top-left, 2: top-right, 3: bottom-right, 4: bottom-left */
    NSUInteger direction;
    NSUInteger left;
    NSUInteger top;
} ASUserContentProductPosition;

/**
 Product.
 */
@interface ASUserContentProduct : ASUserContent

@property(assign, nonatomic) unsigned long long productId;
@property(assign, nonatomic) float price;
@property(copy, nonatomic) NSString *currency;
@property(copy, nonatomic) NSString *source;
@property(copy, nonatomic) NSString *seller;
@property(assign, nonatomic) ASUserContentProductPosition position;

@end

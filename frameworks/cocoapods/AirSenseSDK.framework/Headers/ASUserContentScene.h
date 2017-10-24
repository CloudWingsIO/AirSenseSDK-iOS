//
//  ASUserContentScene.h
//  AirSenseSDK
//
//  Created by Shengsheng on 18/3/17.
//  Copyright © 2017 Cloud Wings. All rights reserved.
//

#import "ASUserContent.h"
@class ASUserContentProduct;

/**
 Scene.
 */
@interface ASUserContentScene : ASUserContent

@property(assign, nonatomic) unsigned long long sceneId;
@property(copy, nonatomic) NSString *source;
@property(assign, nonatomic) NSUInteger imageWidth;
@property(assign, nonatomic) NSUInteger imageHeight;
@property(strong, nonatomic) NSArray<ASUserContentProduct *> *products;

@end

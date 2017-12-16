//
//  ASUserContentEvent.h
//  AirSenseSDK
//
//  Created by Shengsheng on 6/3/17.
//  Copyright © 2017 Cloud Wings. All rights reserved.
//

#import "ASUserContent.h"

/**
 Event.
 */
@interface ASUserContentEvent : ASUserContent

@property(copy, nonatomic) NSString *eventId;
@property(copy, nonatomic) NSString *url;
@property(copy, nonatomic) NSString *price;
@property(copy, nonatomic) NSString *currency;
@property(copy, nonatomic) NSString *date;
@property(copy, nonatomic) NSString *sponsor;

@end

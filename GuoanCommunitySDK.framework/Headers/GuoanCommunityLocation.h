//
//  GuoanCommunityLocation.h
//  GuoanCommunitySDK
//
//  Created by OctMon on 2018/3/28.
//  Copyright © 2018年 Guoan Community (Beijing) Technology Co., Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface GuoanCommunityLocation : NSObject

@property (nonatomic, strong) NSString *cityCode;
@property (nonatomic, assign) CGFloat lat;
@property (nonatomic, assign) CGFloat lon;

- (NSDictionary *)toDictionary;

@end
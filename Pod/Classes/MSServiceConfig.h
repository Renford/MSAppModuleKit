//
//  AppConfig.h
//  AppSettings
//
//  Created by ryan on 15/8/10.
//  Copyright (c) 2015年 Ryan. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MSServiceCofig : NSObject

// Push
+ (UIUserNotificationType)userNotificationTypes;
+ (UIRemoteNotificationType)remoteNotificationTypes;


@end
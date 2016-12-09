//
//  GleanTapImplementation.h
//  GleanTap
//
//  Created by Snyxius on 11/23/16.
//  Copyright © 2016 snyxius. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <UserNotifications/UserNotifications.h>

@interface GleanTapImplementation : NSObject<UNUserNotificationCenterDelegate>

-(void)registerForPushNotifications;
-(void)handlePushNotificationRegistration:(NSString*)deviceToken;
-(void)handlePushNotificationRegistration:(NSString*)deviceToken withDataDict:(NSDictionary*)dataDict;
-(void)saveUserDetails:(NSDictionary*)dataDict;
-(void)handlePushReceived:(NSDictionary*)pushData;
-(void)triggerEventWithEventName:(NSString*)eventName;
-(void)identitfyUserWithData:(NSDictionary*)dataDict;
-(void)saveUserSession;
@end

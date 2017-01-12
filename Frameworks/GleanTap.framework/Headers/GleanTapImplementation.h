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
#import <CoreLocation/CoreLocation.h>
@interface GleanTapImplementation : NSObject<UNUserNotificationCenterDelegate,CLLocationManagerDelegate,UIApplicationDelegate>

-(void)registerForPushNotifications;
-(void)handlePushNotificationRegistration:(NSString*)deviceToken;
-(void)handlePushNotificationRegistration:(NSString*)deviceToken withDataDict:(NSDictionary*)dataDict;
-(void)saveUserDetails:(NSDictionary*)dataDict;
-(void)handlePushReceived:(NSDictionary*)pushData;
-(void)triggerEventWithEventName:(NSString*)eventName;
-(void)triggerTags:(NSArray*)tagNames;
-(void)identitfyUserWithData:(NSDictionary*)dataDict;
-(void)assignYourOwnUserID:(NSString*)userID;
+ (GleanTapImplementation*)sharedObject;

@end

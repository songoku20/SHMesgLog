//
//  MesgLog.h
//  MesgLog
//
//  Created by Hoant on 2/4/16.
//  Copyright (c) 2016 Hoant. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SHLogParams.h"

@interface SHMesgLog : NSObject

+ (id _Nonnull) shareInstance;
// Get version of SDK
-(NSString * _Nonnull) getVersion;
// Get device unique id
-(NSString * _Nonnull) getDeviceID;
// Tracking view with params
-(BOOL) sendLogTrackingView:(SHLogParams * _Nullable)params;
// Tracking click banner
-(void) sendLogClickBanner:(NSString * _Nonnull)app_id org:(NSString* _Nonnull)org cov:(NSInteger)cov;
// Send log confirm with extension
-(void) sendLogConfirm:(NSString * _Nullable)confirmExt;
// Set extension
-(void) setExt:(NSString* _Nullable)ext;
// Call when UIApplicationDidEnterBackgroundNotification
-(void)handleAppQuit;
// Call when UIApplicationDidBecomeActiveNotification
-(void)handleAppOpen;
// Call when UIApplicationWillEnterForegroundNotification
-(void)handleAppEnterForeground;
// Call when UIApplicationWillTerminateNotification
-(void)handleAppWillTerminate;

@end

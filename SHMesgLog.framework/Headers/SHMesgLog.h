//
//  SHMesgLog.h
//  SHMesgLog
//
//  Created by SUUNC on 10/10/20.
//  Copyright (c) 2020 SUUNC. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AdSupport/AdSupport.h>
#import "SHLogParams.h"

@interface SHMesgLog : NSObject
// Instance
+ (id)shareInstance;

// Library version
- (NSString *)getVersion;

// Device identifier
- (NSString *)getDeviceID;

// Set extend value
- (void)setExt:(NSString *)ext;

// Send log confirmation
- (void)sendLogConfirm:(NSString *)confirmExt;

// Send log click banner
- (void)sendLogClickBanner:(NSString *)app_id org:(NSString *)org cov:(NSInteger)cov;

// Send log tracking view
- (BOOL)sendLogTrackingView:(SHLogParams *)params;

//For handle app=
// Call when UIApplicationDidBecomeActiveNotification
- (void)handleAppOpen;

// Call when UIApplicationDidEnterBackgroundNotification
- (void)handleAppQuit;

// Call when UIApplicationWillEnterForegroundNotification
- (void)handleAppEnterForeground;

// Call when UIApplicationWillTerminateNotification
- (void)handleAppWillTerminate;

@end

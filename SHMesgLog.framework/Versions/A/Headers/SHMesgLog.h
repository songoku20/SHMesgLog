//
//  MesgLog.h
//  MesgLog
//
//  Created by Hoant on 2/4/16.
//  Copyright (c) 2016 Hoant. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AdSupport/AdSupport.h>
#import "SHLogParams.h"

@interface SHMesgLog : NSObject

-(void) sendLogClickBanner:(NSString *)app_id org:(NSString*)org cov:(NSInteger)cov;
-(void) setExt:(NSString*)ext;
-(NSString *) getVersion;
-(NSString *) getDeviceID; // Hoant version 2.6
-(void) sendLogConfirm:(NSString *)confirmExt; // Hoant version 2.6.5

-(BOOL) sendLogTrackingView:(SHLogParams *)params;

+ (id) shareInstance;

//For handle app
// call when UIApplicationDidEnterBackgroundNotification
-(void)handleAppQuit;
//call when UIApplicationDidBecomeActiveNotification
-(void)handleAppOpen;
//call when UIApplicationWillEnterForegroundNotification
-(void)handleAppEnterForeground;
//call when UIApplicationWillTerminateNotification
-(void)handleAppWillTerminate;

@end

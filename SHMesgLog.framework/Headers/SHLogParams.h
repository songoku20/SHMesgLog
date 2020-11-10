//
//  LogParams.h
//  SHMesgLog
//
//  Created by Le Minh Son on 1/24/19.
//  Copyright © 2019 Tung Ha. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef enum {
    viewType = 0,
    clickType = 1,
    scrollType = 2
} COVType;

typedef enum{
    noneLog = 0,
    pageviewLog = 1,
    revLog = 2,
    boxviewLog = 3
} LOGType;

@interface SHLogParams : NSObject

@property(nonatomic,weak) NSString* domain;
@property(nonatomic,weak) NSString* curl;
@property(nonatomic,weak) NSString* rurl;
@property(nonatomic,weak) NSString* vid;
@property(nonatomic) COVType cov;
@property(nonatomic) LOGType ltype;
@property(nonatomic,weak) NSString* boxid;
@property(nonatomic,weak) NSString* dspid;
@property(nonatomic,weak) NSString* algid;
@property(nonatomic,weak) NSString* ext;

@end

NS_ASSUME_NONNULL_END

//
//  TTBlueToothManager.h
//  TicTagSDK
//
//  Created by 陈宇 on 2018/3/20.
//  Copyright © 2018年 陈宇. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreBluetooth/CoreBluetooth.h>

typedef void(^successBlock)(void);
typedef void (^failBlock)(void);
@interface TTBlueToothManager : NSObject

@property (nonatomic,strong) successBlock bindSuccessBlock;
@property (nonatomic,strong) failBlock bindFailBlock;


/**
 Current device power Range:0~100%
 */
@property (nonatomic,readonly) NSString *electric;

/**
 Current clickTimes Range:0~15
 */
@property (nonatomic,readonly) NSString *clickTimes;

/**
 powerSavingMode Can save you a lot of electricity ,default is 1,if you want to close it,please set 0
 */
@property (nonatomic,assign) BOOL powerSaving;


+ (instancetype)shareTTBlueToothManager;

- (void)initSDK;

/**
 找到TicTag的block |  when find TicTag
 */
- (void)startSearchTicTagWithBlock:(void (^)(CBCentralManager *central,CBPeripheral *peripheral,NSDictionary *advertisementData, NSNumber *RSSI))block;

/**
 绑定指定TicTag的block |  when bind TicTag
 */
- (void)bindTicTagWithPeripheral:(CBPeripheral*)peripheral
                       withSuccessBlock:(successBlock)successBlock
                      andFailure:(failBlock)failBlock;

- (void)disBindTicTag;

@end

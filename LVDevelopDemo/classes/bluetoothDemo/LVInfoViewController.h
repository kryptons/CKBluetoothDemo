//
//  LVInfoViewController.h
//  LVDevelopDemo
//
//  Created by 陈文昊 on 16/6/28.
//  Copyright © 2016年 NSObject. All rights reserved.
//  蓝牙设备信息

#import <UIKit/UIKit.h>
#import <CoreBluetooth/CoreBluetooth.h>
@interface LVInfoViewController : UIViewController

/** 蓝牙设备 */
@property (nonatomic, strong) CBPeripheral *peripheral;

@property (nonatomic, strong) CBCentralManager *manager;

@end

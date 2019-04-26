//
//  RNPLocation.h
//  ReactNativePermissions
//
//  Created by Yonah Forst on 11/07/16.
//  Copyright © 2016 Yonah Forst. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RCTConvert+RNPStatus.h"

@interface RNPLocation : NSObject

+ (NSString *)getStatusForType:(NSString *)type :(NSString *) lastType;
- (void)request:(NSString *)type completionHandler:(void (^)(NSString *))completionHandler;
@property (nonatomic, readonly, strong) NSString * lastTypeRequested;

@end

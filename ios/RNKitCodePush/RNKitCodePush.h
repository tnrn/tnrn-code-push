//
//  RNKitCodePush.h
//  RNKitCodePush
//
//  Created by LvBingru on 2/19/16.
//  Copyright © 2016 erica. All rights reserved.
//

#if __has_include(<React/RCTBridge.h>)
#import <React/RCTBridgeModule.h>
#import <React/RCTEventEmitter.h>
#else
#import "RCTBridgeModule.h"
#import "RCTEventEmitter.h"
#endif

@interface RNKitCodePush : RCTEventEmitter <RCTBridgeModule>
+ (NSURL *)bundleURL;
@end

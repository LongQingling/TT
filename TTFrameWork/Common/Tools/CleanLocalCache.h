//
//  CleanLocalCache.h
//  TT
//
//  Created by 张福润 on 2017/4/6.
//  Copyright © 2017年 张福润. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CleanLocalCache : NSObject
+ (NSString *)getLoaclCacheSize;
+ (void)clean;
@end

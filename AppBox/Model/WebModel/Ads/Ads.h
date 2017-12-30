//
//  Ads.h
//  AppBox
//
//  Created by Vineet Choudhary on 30/12/17.
//  Copyright © 2017 Developer Insider. All rights reserved.
//

#import <Foundation/Foundation.h>

@class Ads;
@interface Ads : NSObject

@property(nonatomic, strong) NSString *title;
@property(nonatomic, strong) NSString *subtitle;
@property(nonatomic, strong) NSString *url;
@property(nonatomic, strong) NSNumber *featured;
@property(nonatomic, strong) NSNumber *active;

+ (NSArray<Ads *> *)getAllAds;
+ (void)loadAds;

@end

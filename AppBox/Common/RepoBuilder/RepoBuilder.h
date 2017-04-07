//
//  RepoBuilder.h
//  AppBox
//
//  Created by Vineet Choudhary on 07/04/17.
//  Copyright © 2017 Developer Insider. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "XCProject.h"

@interface RepoBuilder : NSObject {
    
}

+ (NSString *)isValidRepoForSetingFileAtPath:(NSString *)path Index:(NSNumber *)number;
+ (XCProject *)xcProjectWithRepoPath:(NSString *)repoPath andSettingFilePath:(NSString *)settingPath;

+ (void)setProjectSettingFromProject:(XCProject *)repoProject toProject:(XCProject *)project;

@end

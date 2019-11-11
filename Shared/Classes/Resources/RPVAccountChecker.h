//
//  RPVAccountChecker.h
//  iOS
//
//  Created by Matt Clarke on 07/03/2018.
//  Copyright © 2018 Matt Clarke. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@interface RPVAccountChecker : NSObject

+ (instancetype)sharedInstance;

- (void)signInWithViewController:(UIViewController*)viewController andCompletionHandler:(void (^)(NSString*, NSString*, NSArray*,NSURLCredential*))completionHandler;

- (void)checkUsername:(NSString*)username withPassword:(NSString*)password andCompletionHandler:(void (^)(NSString*, NSString*, NSArray*))completionHandler;

- (void)registerCurrentDeviceForTeamID:(NSString*)teamID withUsername:(NSString*)username password:(NSString*)password andCompletionHandler:(void (^)(NSError*))completionHandler;

- (void)registerCurrentWatchForTeamID:(NSString*)teamID withUsername:(NSString*)username password:(NSString*)password andCompletionHandler:(void (^)(NSError*))completionHandler;

@end

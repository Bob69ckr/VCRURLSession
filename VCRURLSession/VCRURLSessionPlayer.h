//
//  VCRURLSessionPlayer.h
//  VCRURLSession
//
//  Created by Plunien, Johannes on 07/01/16.
//  Copyright © 2016 Johannes Plunien. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol VCRURLSessionPlayerDelegate;

NS_ASSUME_NONNULL_BEGIN

@interface VCRURLSessionPlayer : NSURLProtocol

+ (BOOL)isReplaying;
+ (void)startReplayingWithDelegate:(id<VCRURLSessionPlayerDelegate>)delegate;
+ (void)stopReplaying;

@end

NS_ASSUME_NONNULL_END

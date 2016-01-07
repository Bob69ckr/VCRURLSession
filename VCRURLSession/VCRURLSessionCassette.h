//
//  VCRURLSessionCassette.h
//  VCRURLSession
//
//  Created by Plunien, Johannes on 06/01/16.
//  Copyright © 2016 Johannes Plunien. All rights reserved.
//

#import "VCRURLSessionPlayerDelegate.h"
#import "VCRURLSessionRecorderDelegate.h"
#import <Foundation/Foundation.h>

@class VCRURLSessionRecord;

NS_ASSUME_NONNULL_BEGIN

@interface VCRURLSessionCassette : NSObject <VCRURLSessionPlayerDelegate, VCRURLSessionRecorderDelegate>

@property (nonatomic, readonly) NSArray<VCRURLSessionRecord *> *records;

- (instancetype)initWithContentsOfFile:(NSString *)path;
- (BOOL)writeToFile:(NSString *)path;

@end

NS_ASSUME_NONNULL_END

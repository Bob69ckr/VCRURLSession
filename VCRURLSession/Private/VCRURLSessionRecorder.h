//
//  VCRURLSessionRecorder.h
//  VCRURLSession
//
//  Created by Plunien, Johannes on 06/01/16.
//  Copyright © 2016 Johannes Plunien. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol VCRURLSessionRecorderDelegate;

NS_ASSUME_NONNULL_BEGIN

@interface VCRURLSessionRecorder : NSURLProtocol

+ (BOOL)isRecording;
+ (void)startRecordingWithDelegate:(id<VCRURLSessionRecorderDelegate>)delegate;
+ (id<VCRURLSessionRecorderDelegate> _Nullable)stopRecording;

@end

NS_ASSUME_NONNULL_END

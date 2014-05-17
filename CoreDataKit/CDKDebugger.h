//
//  CDKDebugger.h
//  CoreDataKit
//
//  Created by Mathijs Kadijk on 17-05-14.
//  Copyright (c) 2014 Mathijs Kadijk. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CDKTypes.h"

/**
 `CDKDebugger` provides logging, error handling and other tricks.
 */
@interface CDKDebugger : NSObject

/**
 Messages at or above this level will be logged to the console.
 */
@property (nonatomic, assign) CDKDebuggerLogLevel logLevel;

/**
 Messages at or above this level will halt execution of code and give you opportunity to debug and investigate.
 */
@property (nonatomic, assign) CDKDebuggerLogLevel breakOnLogLevel;

/**
 Shared debugger that is used by default.

 @return The globally available debugger
 */
+ (instancetype)sharedDebugger;

/**
 Handle a log message respecting the log level.

 @param logLevel Level at which the message should be logged
 @param message  Message to log
 */
- (void)log:(CDKDebuggerLogLevel)logLevel message:(NSString *)message;

/**
 Handle error class by logging and halting execution if required by the set levels.

 @param error Error to handle
 */
- (void)handleError:(NSError *)error;

@end

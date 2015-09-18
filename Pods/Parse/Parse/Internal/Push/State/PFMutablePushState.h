/**
 * Copyright (c) 2015-present, Parse, LLC.
 * All rights reserved.
 *
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree. An additional grant
 * of patent rights can be found in the PATENTS file in the same directory.
 */

#import "PFPushState.h"

NS_ASSUME_NONNULL_BEGIN

@interface PFMutablePushState : PFPushState

@property (nullable, nonatomic, copy, readwrite) NSSet *channels;
@property (nullable, nonatomic, copy, readwrite) PFQueryState *queryState;

@property (nullable, nonatomic, strong, readwrite) NSDate *expirationDate;
@property (nullable, nonatomic, copy, readwrite) NSNumber *expirationTimeInterval;

@property (nullable, nonatomic, copy, readwrite) NSDictionary *payload;

///--------------------------------------
/// @name Payload
///--------------------------------------

- (void)setPayloadWithMessage:(nullable NSString *)message;

@end

NS_ASSUME_NONNULL_END
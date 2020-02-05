//
//  NSString+Random.h
//  OSSearchTest
//
//  Created by Sergii Onopriienko on 05.02.2020.
//  Copyright © 2020 Onopriienko Sergii. All rights reserved.
//

//#import <AppKit/AppKit.h>


#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSString (Random)

+ (NSString *)randomAlphanumericString;
+ (NSString *)randomAlphanumericStringWithLength:(NSInteger)length;

@end

NS_ASSUME_NONNULL_END

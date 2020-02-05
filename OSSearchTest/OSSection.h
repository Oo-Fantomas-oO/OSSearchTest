//
//  OSSection.h
//  OSSearchTest
//
//  Created by Sergii Onopriienko on 05.02.2020.
//  Copyright © 2020 Onopriienko Sergii. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface OSSection : NSObject

@property (strong, nonatomic) NSString* sectionName;
@property (strong, nonatomic) NSMutableArray* itemsArray;

@end

NS_ASSUME_NONNULL_END

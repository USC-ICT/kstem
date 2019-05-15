//
//  KStem.h
//  kstem
//
//  Created by Anton Leuski on 5/15/19.
//  Copyright © 2019 Anton Leuski. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface KStemmer : NSObject
- (NSString*)stem:(NSString*)string;
@end

NS_ASSUME_NONNULL_END

//
//  NSDictionary+Safety.h
//  FoundationCategory
//
//  Created by YongQiang Wei on 2019/4/3.
//  Copyright © 2019 YongQiang Wei. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSDictionary (Safety)
- (id)safeObjectForKey:(NSString *)key;

- (void)safeSetValue:(id)object forKey:(id)key;

- (id)objectForKeyCustom:(id)aKey;

- (id)safeKeyForValue:(id)value;
@end

NS_ASSUME_NONNULL_END

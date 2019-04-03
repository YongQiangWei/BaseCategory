//
//  NSDictionary+Category.m
//  FoundationCategory
//
//  Created by YongQiang Wei on 2019/4/3.
//  Copyright © 2019 YongQiang Wei. All rights reserved.
//

#import "NSDictionary+Category.h"

@implementation NSDictionary (Category)
- (NSString *)transJSONString{
    NSData *paramsJSONData = [NSJSONSerialization dataWithJSONObject:self options:(NSJSONWritingPrettyPrinted) error:nil];
    return [[NSString alloc] initWithData:paramsJSONData encoding:NSUTF8StringEncoding];
}
@end

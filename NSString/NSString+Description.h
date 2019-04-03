//
//  NSString+Description.h
//  FoundationCategory
//
//  Created by YongQiang Wei on 2019/4/3.
//  Copyright © 2019 YongQiang Wei. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
NS_ASSUME_NONNULL_BEGIN

@interface NSString (Description)
/**
 电话号码加密显示

 */
- (NSString*) getSecrectPhoneNumber;


/**
 银行卡号加密显示
 */
- (NSString*) getSecrectBankAccount;


/**
 转为手机格式，默认为-
 */
- (NSString*) mobilePhoneNumberFormat;



/**
 添加数字的千位符
 
 @param num <#num description#>
 @return <#return value description#>
 */
- (NSString*) countNumAndChangeformat;

/**
 *  NSString转为NSNumber
 *
 *  @return NSNumber
 */
- (NSNumber*) toNumber;

/**
 计算文字高度
 
 @param fontSize 字体
 @param width 最大宽度
 @return <#return value description#>
 */
- (CGFloat  ) heightWithFontSize:(CGFloat)fontSize width:(CGFloat)width;

/**
 计算文字宽度
 
 @param fontSize 字体
 @param maxHeight 最大高度
 @return <#return value description#>
 */
- (CGFloat  ) widthWithFontSize:(CGFloat)fontSize height:(CGFloat)maxHeight;
/**
 抹除小数末尾的0
 
 @return <#return value description#>
 */
- (NSString*) removeUnwantedZero;

/**
 //去掉前后空格
 
 @return <#return value description#>
 */
- (NSString*) trimmedString;
@end

NS_ASSUME_NONNULL_END

//
//  UIColor+Hex.h
//  easymarketing
//
//  Created by WenQiangXu on 15/4/15.
//  Copyright (c) 2015年 cubead. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIColor (Hex)
+ (UIColor *)colorWithHexString:(NSString *)color;

//从十六进制字符串获取颜色，
//color:支持@“#123456”、 @“0X123456”、 @“123456”三种格式
+ (UIColor *)colorWithHexString:(NSString *)color alpha:(CGFloat)alpha;
+(instancetype)gz_colorWithHex:(u_int32_t)hex;
@end

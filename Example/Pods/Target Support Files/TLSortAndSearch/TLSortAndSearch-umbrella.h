#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "ChineseInclude.h"
#import "ChineseToPinyinResource.h"
#import "HanyuPinyinOutputFormat.h"
#import "NSString+PinYin4Cocoa.h"
#import "PinyinFormatter.h"
#import "PinYinForObjc.h"
#import "PinyinHelper.h"
#import "PinYinSearch.h"
#import "TLSortString.h"
#import "TLSSHeader.h"

FOUNDATION_EXPORT double TLSortAndSearchVersionNumber;
FOUNDATION_EXPORT const unsigned char TLSortAndSearchVersionString[];


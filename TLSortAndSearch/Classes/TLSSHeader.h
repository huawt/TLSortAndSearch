

#import <Foundation/Foundation.h>

#if __has_include(<TLSortAndSearch/TLSSHeader.h>)

FOUNDATION_EXPORT double TLSortAndSearchVersionNumber;
FOUNDATION_EXPORT const unsigned char TLSortAndSearchVersionString[];

#import <TLSortAndSearch/ChineseInclude.h>
#import <TLSortAndSearch/PinyinForObjc.h>
#import <TLSortAndSearch/PinyinHelper.h>
#import <TLSortAndSearch/PinYinSearch.h>
#import <TLSortAndSearch/TLSortString.h>

#else

#import "ChineseInclude.h"
#import "PinyinForObjc.h"
#import "PinyinHelper.h"
#import "PinYinSearch.h"
#import "TLSortString.h"

#endif

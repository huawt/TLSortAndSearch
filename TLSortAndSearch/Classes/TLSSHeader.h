

#import <Foundation/Foundation.h>

#if __has_include(<TLSortAndSearch/TLSSHeader.h>)

FOUNDATION_EXPORT double TLSortAndSearchVersionNumber;
FOUNDATION_EXPORT const unsigned char TLSortAndSearchVersionString[];

#import <TLSortAndSearch/PinYinSearch.h>
#import <TLSortAndSearch/TLSortString.h>

#else

#import "PinYinSearch.h"
#import "TLSortString.h"

#endif

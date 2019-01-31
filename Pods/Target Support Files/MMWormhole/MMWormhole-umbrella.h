#ifdef __OBJC__
#import <Cocoa/Cocoa.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "MMWormhole.h"
#import "MMWormholeFileTransiting.h"
#import "MMWormholeCoordinatedFileTransiting.h"
#import "MMWormholeTransiting.h"

FOUNDATION_EXPORT double MMWormholeVersionNumber;
FOUNDATION_EXPORT const unsigned char MMWormholeVersionString[];


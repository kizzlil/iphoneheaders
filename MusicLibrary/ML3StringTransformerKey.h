/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "NSCopying.h"
#import <Foundation/NSObject.h>
#import "MusicLibrary-Structs.h"


__attribute__((visibility("hidden")))
@interface ML3StringTransformerKey : NSObject <NSCopying> {
@private
	unsigned short* _characters;
	unsigned _length;
	BOOL _isCopy;
}
-(void)setCharacters:(const unsigned short*)characters length:(unsigned)length;
-(void)dealloc;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(id)copyWithZone:(NSZone*)zone;
@end

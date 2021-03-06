//
//  AlbumDataController.h
//  SpinCity
//
//  Created by Michael Hunter on 1/29/15.
//  Copyright (c) 2015 Michael Hunter. All rights reserved.
//

#import <Foundation/Foundation.h>

@class Album;

@interface AlbumDataController : NSObject


- (NSUInteger)albumCount;

- (Album *)albumAtIndex:(NSUInteger)index;

- (void)addAlbumWithTitle:(NSString*)title
                   artist:(NSString*)artist
                  summary:(NSString*)summary price:(float)price
          locationInStore:(NSString*)locationInStore;


@end

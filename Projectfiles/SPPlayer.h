//
//  SPPlayer.h
//  Spring
//
//  Created by  on 2012/6/6.
//  Copyright (c) 2012 Kawaz. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SPPlayer : NSObject {
}

@property(readonly) NSUInteger identifier;
@property(readonly, strong) NSMutableArray* drawings;

+ (id)playerById:(NSUInteger)n;
- (id)initWithId:(NSUInteger)n;

@end
//
//  SBNewPriorityQueue.h
//  SBDataStructures
//
//  Created by Steve Brokaw on 10/1/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SBQueue.h"

@interface SBPriorityQueue : NSObject

@property (readonly) NSUInteger count;

- (id)initWithComparator:(NSComparator)cmp;
- (void)addObject:(id<NSObject>)obj;
- (id<NSObject>)removeHead;
- (id)objectAtHead;


@end

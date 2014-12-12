//
//  NSValue+IQGeometry.h
//  LSQWheelView
//
//  Created by Павел Литвиненко on 11.12.14.
//  Copyright (c) 2014 Casual Underground. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "IQGeometry+Line.h"

@interface NSValue (IQGeometry)

+ (id)valueWithIQLine:(IQLine)line;
- (IQLine)lineValue;

@end

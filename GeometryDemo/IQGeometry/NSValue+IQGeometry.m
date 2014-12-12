
//
//  NSValue+IQGeometry.m
//  LSQWheelView
//
//  Created by Павел Литвиненко on 11.12.14.
//  Copyright (c) 2014 Casual Underground. All rights reserved.
//

#import "NSValue+IQGeometry.h"

@implementation NSValue (IQGeometry)

+ (id)valueWithIQLine:(IQLine)line
{
    return [NSValue value:&line withObjCType:@encode(IQLine)];
}

- (IQLine)lineValue;
{
    IQLine line; [self getValue:&line]; return line;
}

@end

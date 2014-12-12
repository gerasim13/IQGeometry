//
//  NSArray+IQGeometry.m
//  LSQWheelView
//
//  Created by Павел Литвиненко on 11.12.14.
//  Copyright (c) 2014 Casual Underground. All rights reserved.
//

#import "NSArray+IQGeometry.h"
#import "IQGeometry+Point.h"
#import "IQGeometry+Distance.h"

CGPoint IQPointCentroidOfPoints(NSArray* points)
{
    CGFloat x = 0;
    CGFloat y = 0;

    for (NSValue *value in points)
    {
        x += [value CGPointValue].x;
        y += [value CGPointValue].y;
    }

    x = x/[points count];
    y = y/[points count];

    return CGPointMake(x, y);
}

CGPoint IQPointGetNearPoint(CGPoint basePoint, NSArray *points)
{
    CGFloat minimumDistance = 10000;
    CGPoint nearbyPoint;

    for (NSValue *aValue in points)
    {
        CGPoint aPoint = [aValue CGPointValue];

        CGFloat currentDistance = IQPointGetDistance(basePoint, aPoint);
        if (minimumDistance>currentDistance)
        {
            nearbyPoint = aPoint;
            minimumDistance = currentDistance;
        }
    }
    return nearbyPoint;
}

@implementation NSArray (IQGeometry)

- (CGPoint)centroidOfPoints
{
    return IQPointCentroidOfPoints(self);
}

- (CGPoint)nearPoint:(CGPoint)basePoint
{
    return IQPointGetNearPoint(basePoint, self);
}

@end

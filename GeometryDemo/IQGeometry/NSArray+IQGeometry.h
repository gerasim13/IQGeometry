//
//  NSArray+IQGeometry.h
//  LSQWheelView
//
//  Created by Павел Литвиненко on 11.12.14.
//  Copyright (c) 2014 Casual Underground. All rights reserved.
//

#import <Foundation/Foundation.h>

/* Centroid of points, A, B and C is (x1+x2+x3)/3, (y1+y2+y3)/3 */
CGPoint IQPointCentroidOfPoints(NSArray* points);
CGPoint IQPointGetNearPoint(CGPoint basePoint, NSArray *points);

@interface NSArray (IQGeometry)

- (CGPoint)centroidOfPoints;
- (CGPoint)nearPoint:(CGPoint)basePoint;

@end

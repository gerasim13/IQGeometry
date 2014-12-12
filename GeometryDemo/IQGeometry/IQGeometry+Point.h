//
//  IQGeometry+CGPoint.h
//  Geometry Extension
//
//  Created by Iftekhar Mac Pro on 8/25/13.
//  Copyright (c) 2013 Iftekhar. All rights reserved.
//

//________________________________________________________________________________________

#ifndef IQGeometryCGPoint_h
#define IQGeometryCGPoint_h

//________________________________________________________________________________________

#include <CoreGraphics/CoreGraphics.h>
#include "IQGeometry+Line.h"

//________________________________________________________________________________________

CF_EXTERN_C_BEGIN

//________________________________________________________________________________________

CGPoint IQPointGetMidPoint(CGPoint point1, CGPoint point2);

/*  (x1,y1)         (x,y)                           (x2,y2) */
/*  *-----------------*----------------------------------*  */
/*  <----distance----->                                     */
//Returns a point(x,y) lies between point1(x1,y1) and point2(x2,y2) by distance from point1(x1,y1).
CGPoint IQPointWithDistance(CGPoint point1, CGPoint point2, CGFloat distance);

/*
line1.beginPoint   line2.endPoint
            \        /
              \    /
                \/
                /\
              /    \
            /        \
 line2.beginPoint   line1.endPoint
 */
CGPoint IQPointOfIntersect(IQLine line1, IQLine line2);

CGFloat IQPointGetDistanceOfPoint(CGPoint point, IQLine line);

CGPoint IQPointRotate(CGPoint basePoint,CGPoint point, CGFloat angle);

CGPoint IQPointFlipHorizontal(CGPoint point, CGRect outerRect);

CGPoint IQPointFlipVertical(CGPoint point, CGRect outerRect);

CGPoint IQPointAspectFill(CGPoint point, CGSize destSize, CGRect sourceRect);

CGPoint IQPointOffset(CGPoint aPoint, CGFloat dx, CGFloat dy);

CGPoint IQPointScale(CGPoint aPoint, CGFloat wScale, CGFloat hScale);

// Flipping coordinates
CGPoint IQPointFlip(CGPoint point);

//________________________________________________________________________________________

CF_EXTERN_C_END

//________________________________________________________________________________________

#endif

//________________________________________________________________________________________

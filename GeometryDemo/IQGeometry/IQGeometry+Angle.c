//
//  IQGeometry+Angle.m
//  Geometry Extension
//
//  Created by Iftekhar Mac Pro on 8/25/13.
//  Copyright (c) 2013 Iftekhar. All rights reserved.
//

#include "IQGeometry+Angle.h"
#include "IQGeometry+Distance.h"
#include <math.h>

CGFloat IQDegreeToRadian(CGFloat angle)
{
    return angle*(M_PI/180.0);
}

CGFloat IQRadianToDegree(CGFloat radians)
{
    return radians*(180.0/M_PI);
}

CGFloat IQPointGetAngle(CGPoint centerPoint, CGPoint point1, CGPoint point2)
{
    //Find angle.
    CGFloat angle = atan2f(point2.y-centerPoint.y, point2.x-centerPoint.x) - atan2f(point1.y-centerPoint.y, point1.x-centerPoint.x);

    //If angle is less than 0. then adding 360 degree to it.
    return (angle>0 ? angle : angle+M_PI*2);
}

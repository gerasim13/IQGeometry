//
//  IQGeometry+CGLine.m
//  Geometry Extension
//
//  Created by Iftekhar Mac Pro on 8/25/13.
//  Copyright (c) 2013 Iftekhar. All rights reserved.
//

#include "IQGeometry+Line.h"
#include <math.h>

IQLine IQLineMake(CGPoint beginPoint, CGPoint endPoint)
{
    return (IQLine){.beginPoint = beginPoint, .endPoint = endPoint};
}

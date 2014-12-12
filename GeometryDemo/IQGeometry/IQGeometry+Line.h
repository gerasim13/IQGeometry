//
//  IQGeometry+CGLine.h
//  Geometry Extension
//
//  Created by Iftekhar Mac Pro on 8/25/13.
//  Copyright (c) 2013 Iftekhar. All rights reserved.
//

//________________________________________________________________________________________

#ifndef IQGeometryCGLine_h
#define IQGeometryCGLine_h

//________________________________________________________________________________________

#include <CoreGraphics/CoreGraphics.h>

//________________________________________________________________________________________

CF_EXTERN_C_BEGIN

//________________________________________________________________________________________

struct IQLine {
    CGPoint beginPoint;
    CGPoint endPoint;
};
typedef struct IQLine IQLine;

IQLine IQLineMake(CGPoint beginPoint, CGPoint endPoint);

//________________________________________________________________________________________

CF_EXTERN_C_END

//________________________________________________________________________________________

#endif

//________________________________________________________________________________________

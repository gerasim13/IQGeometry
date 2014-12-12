//
//  IQGeometry+CGAffineTransform.h
//  Geometry Extension
//
//  Created by Iftekhar Mac Pro on 8/25/13.
//  Copyright (c) 2013 Iftekhar. All rights reserved.
//

//________________________________________________________________________________________

#ifndef IQGeometryCGAffineTransform_h
#define IQGeometryCGAffineTransform_h

//________________________________________________________________________________________

#include <CoreGraphics/CoreGraphics.h>

//________________________________________________________________________________________

CF_EXTERN_C_BEGIN

//________________________________________________________________________________________

CGFloat IQAffineTransformGetAngle(CGAffineTransform t);
CGSize  IQAffineTransformGetScale(CGAffineTransform t);

//________________________________________________________________________________________

CF_EXTERN_C_END

//________________________________________________________________________________________

#endif

//________________________________________________________________________________________

//
//  IQGeometry+CGSize.h
//  Geometry Extension
//
//  Created by Iftekhar Mac Pro on 8/25/13.
//  Copyright (c) 2013 Iftekhar. All rights reserved.
//

//________________________________________________________________________________________

#ifndef IQGeometryCGSize_h
#define IQGeometryCGSize_h

//________________________________________________________________________________________

#include <CoreGraphics/CoreGraphics.h>

//________________________________________________________________________________________

CF_EXTERN_C_BEGIN

//________________________________________________________________________________________

CGSize IQSizeScale    (CGSize aSize, CGFloat wScale, CGFloat hScale);
CGSize IQSizeFitInSize(CGSize sourceSize, CGSize destSize);
CGSize IQSizeGetScale (CGSize sourceSize, CGSize destSize);
CGSize IQSizeFlip     (CGSize size);

//________________________________________________________________________________________

CF_EXTERN_C_END

//________________________________________________________________________________________

#endif

//________________________________________________________________________________________

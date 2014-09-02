//
//  IQGeometry.h
//  Geometry Extension
//
//  Created by Iftekhar Mac Pro on 8/25/13.
//  Copyright (c) 2013 Iftekhar. All rights reserved.
//

#import <Foundation/Foundation.h>

#if TARGET_OS_IPHONE
    #import "IQGeometry+AffineTransform.h"
    #import "IQGeometry+Angle.h"
    #import "IQGeometry+Distance.h"
    #import "IQGeometry+Line.h"
    #import "IQGeometry+Point.h"
    #import "IQGeometry+Rect.h"
    #import "IQGeometry+Size.h"
#else
    #import <IQGeometry/IQGeometry+AffineTransform.h>
    #import <IQGeometry/IQGeometry+Angle.h>
    #import <IQGeometry/IQGeometry+Distance.h>
    #import <IQGeometry/IQGeometry+Line.h>
    #import <IQGeometry/IQGeometry+Point.h>
    #import <IQGeometry/IQGeometry+Rect.h>
    #import <IQGeometry/IQGeometry+Size.h>
#endif

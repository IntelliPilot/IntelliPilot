//
//  vars_barometer.h
//  IntelliCopter
//
//  Created by Daniel Heo on 2016. 7. 12.
//  Copyright © 2016 http://dronix.kr. All rights reserved.
//

#ifndef _VARS_BAROMETER_H_
#define _VARS_BAROMETER_H_

typedef struct _barometer {

  float temparature;
  float pressure;
  float sealevelpressure;
} Barometer;

extern Barometer __barometer;

#endif

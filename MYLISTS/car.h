#ifndef __CAR_H
#define __CAR_H

#include "motor.h"
extern int carSpeed;
void Car_Init(void);
void Car_Forward(void);
void Car_Backward(void);
void Car_Left(void);
void Car_Right(void);
void Car_Stop(void);

void Car_SetSpeed(uint8_t sp);

#endif

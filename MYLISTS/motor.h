#ifndef __MOTOR_H
#define __MOTOR_H

#include "main.h"

// Khai báo hàm cho PWM
void Motor_Init(void);
void Motor_SetSpeedA(uint8_t speed);
void Motor_SetSpeedB(uint8_t speed);

// Ði?u khi?n t?ng d?ng co
void MotorA_Forward(void);
void MotorA_Backward(void);
void MotorA_Stop(void);

void MotorB_Forward(void);
void MotorB_Backward(void);
void MotorB_Stop(void);

#endif

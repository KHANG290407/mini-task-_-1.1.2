#include "car.h"

int carSpeed = 50;
void Car_Init(void)
{
    Motor_Init();
    Car_SetSpeed(carSpeed);
}

void Car_SetSpeed(uint8_t sp)
{
    carSpeed = sp;
    Motor_SetSpeedA(sp);
    Motor_SetSpeedB(sp);
}

void Car_Forward(void)
{
    MotorA_Forward();
    MotorB_Forward();
}

void Car_Backward(void)
{
    MotorA_Backward();
    MotorB_Backward();
}

void Car_Left(void)
{
    MotorA_Backward();
    MotorB_Forward();
}

void Car_Right(void)
{
    MotorA_Forward();
    MotorB_Backward();
}

void Car_Stop(void)
{
    MotorA_Stop();
    MotorB_Stop();
}

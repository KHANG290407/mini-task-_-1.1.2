#include "command.h"
#include "car.h"

void Command_Process(uint8_t cmd)
{
    switch(cmd)
    {
        case 'F': Car_Forward();  break;
        case 'B': Car_Backward(); break;
        case 'L': Car_Left();     break;
        case 'R': Car_Right();    break;
        case 'S': Car_Stop();     break;

        case '+':
            carSpeed += 10;
            if(carSpeed > 100) carSpeed = 100;
            Car_SetSpeed(carSpeed);
            break;

        case '-':
            carSpeed -= 10;
            if(carSpeed < 0) carSpeed = 0;
            Car_SetSpeed(carSpeed);
            break;
    }
}

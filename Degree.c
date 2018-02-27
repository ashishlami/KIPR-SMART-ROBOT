#include <kipr/botball.h>
int main()
{//circumference = pi * d , 1100 ticks/revolution
int inches=24, ticks;//inches: distance to travel, d= diameter of wheel
float d=2;
ticks= (inches/(3.14159*d)*1100);//computes the distance from inches to ticks
clear_motor_position_counter(0);
clear_motor_position_counter(3);
mtp(0,500,ticks);
mtp(3,500,ticks);
bmd(0);
bmd(3);
clear_motor_position_counter(0);
clear_motor_position_counter(3);
mtp(0,500,1400);

mtp(3,500,-1400);
bmd(0);
bmd(3);
clear_motor_position_counter(0);
clear_motor_position_counter(3);
mtp(0,500,ticks);
mtp(3,500,ticks);
bmd(0);
bmd(3);
}

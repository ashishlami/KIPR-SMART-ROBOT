#include <kipr/botball.h>
int main()
{

int inches=36;
float d=2;
float ticks= (inches/(3.14159*d)*1100);//inches: distance to travel, d= diameter of
wheel
//moving in straight lines with turns in place
clear_motor_position_counter(0);
clear_motor_position_counter(3);
mtp(0,1000,ticks);
mtp(3,1000,ticks);
bmd(0);
bmd(3);
clear_motor_position_counter(0);
clear_motor_position_counter(3);
mtp(0,1000,-650);
mtp(3,1000,650);
bmd(0);
bmd(3);

}

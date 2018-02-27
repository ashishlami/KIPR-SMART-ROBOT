#include <kipr/botball.h>
int main()
{
int ticks;
float d=2;
int ticks2= 11000;
int ticks1= 5000;
clear_motor_position_counter(0);
clear_motor_position_counter(3);
mtp(0,450,ticks1);
mtp(3,1000,ticks2);
bmd(0);
bmd(3);
clear_motor_position_counter(0);
clear_motor_position_counter(3);
mtp(0,450,0);
mtp(3,1000,0);
bmd(0);
bmd(3);


ao();
}

#include <kipr/wombat.h>

int main()
{
    printf("Grab those balls\n");
    
    enable_servos();
    
    set_servo_position(1,0);
    msleep(1000);
    
    set_servo_position(0,0);
    msleep(5000);
    
    set_servo_position(0,1966);
    msleep(1000);
    
    set_servo_position(1,2047);
    msleep(1000);
    
    set_servo_position(0,1655);
    msleep(1000);
    
    motor(0,100);
    motor(3,100);
    msleep(500);
    
    motor(0,100);
    motor(3,-100);
    msleep(100);
    
    ao();
    
    return 0;
}

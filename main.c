#include <kipr/wombat.h>

int main()
{
    printf("Grab those cubes\n");
    create_connect();
    enable_servos();
    set_servo_position(1,0);
    msleep(500);
    
    set_servo_position(0,2047);
    msleep(500);
    
    create_drive_direct(100,100);
    msleep(5000);
    set_servo_position(0,1400);
    msleep(1000);
    create_drive_direct(-100,-70);
    msleep(1000);
    set_servo_position(1,590);
    
    ao();
    return 0;
}

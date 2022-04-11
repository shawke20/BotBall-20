#include <kipr/wombat.h>

int main()
{
    printf("grab dose balls\n");
    
    enable_servos();
    
    set_servo_position(0,0);
    msleep(4000);
    
    set_servo_position(1,0);
    
    return 0;
}

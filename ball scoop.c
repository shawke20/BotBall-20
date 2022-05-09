#include <kipr/wombat.h>

int main()
{
        printf("give me light\n");
    enable_servos();
    
    set_servo_position(0,600);
    
    set_servo_position(1,2047);
    
    while (analog (0) >= 100)
    {
        motor(0,0);
        motor(3,0);
        msleep(1);
        
        printf(".");
    }
    
    printf("I Gave You light");
    
    motor(0,0);
    motor(3,0);
    msleep(1000);
    
    printf("________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________");
    
    set_servo_position(0,1867);
    msleep(500);
    
    motor(0,100);
    motor(3,100);
    msleep(1000);
    
    motor(0,0);
    motor(3,100);
    msleep(1450);
    
    motor(0,100);
    motor(3,100);
    msleep(8200);
    
	motor(0,-25);
    motor(3,25);
    msleep(6000);
    
    motor(0,100);
    motor(3,100);
    msleep(8000);
    
    motor(0,100);
    motor(3,-100);
    msleep(600);
    
    motor(0,100);
    motor(3,100);
    msleep(500);
    
    motor(0,0);
    motor(3,0);
    msleep(2000);
    
    motor(0,-100);
    motor(3,-100);
    msleep(900);
    
    
        
    ao();
    

    return 0;
}

#include <kipr/wombat.h>

int main()
{
    printf("Hello World\n");
    enable_servos();
    create_connect();

    set_servo_position(0,2047);
    msleep(1000);
    
    set_servo_position(1,0);
    msleep(1000);
    
    printf("program_enabled_system_set_ready-");
    msleep(1000);
    printf("enable_test_program-");
    msleep(1000);
    printf("test_complete_==_results----servo_test_complete_==_operational-----motor_test_complete_==_operational-----create_connect_test_complete_==_operational-----");
    msleep(1000);
    printf("all_systems_operational_wait_for_light-----");
     while (analog (0) >= 100)
    {
        motor(0,0);
        motor(3,0);
        msleep(1);
    }
    
    printf("light_found_enabling_program");
    msleep(30000);
    
    set_servo_position(1,1049);
    msleep(500);
    
    set_servo_position(0,0);
    msleep(500);
    
    create_drive_direct(-100,100);
    msleep(1650);

    create_drive_direct(100,100);
    msleep(8000);

    create_drive_direct(0,100);
    msleep(3100);

    create_drive_direct(100,100);
    msleep(6000);
    
    create_drive_direct(-100,100);
    msleep(1650);
    
    create_drive_direct(100,100);
    msleep(1500);
    
    create_drive_direct(0,0);
    msleep(1000);
    
    set_servo_position(0,2047);
    msleep(1000);
    
    printf("set_program_complete_all_systems_shut_down_set_ready_power_on-");
    
    return 0;
}

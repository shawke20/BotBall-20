#include <kipr/wombat.h>

int main()
{
    printf("I see everything fear me\n");
    
    camera_open();
    
    while(a_button () == 0)
    {
        camera_update();
        
        if(get_object_count(0) == 0);
        {
            printf("1 ");
        }
        if(get_object_count(0) > 0);
        {
            if ((get_object_center_column (0,0) >= 69) && (get_object_center_column (0,0) <= 89))
            {
                printf("2 ");
            }
        }
    }
    
    ao();
    
    return 0;
}

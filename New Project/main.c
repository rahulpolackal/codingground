#include <stdio.h>

int main()
{
    
    
    unsigned int low,high;
    low=86399;
    high=0xffffffff;
    if((low-high)>=86400)
    {
     	printf("Enabled\n");   
    }
    else
    {
     printf("Disabled\n");   
    }



    return 0;
}


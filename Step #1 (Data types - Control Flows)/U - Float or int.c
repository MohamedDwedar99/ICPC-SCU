#include "stdio.h"
 
 
int main(void)
{
    double x;
    scanf("%lf",&x);
    if (0 == x-(int)x)
    {
        printf("int %d",(int)x);
    }
    else
    {
        printf("float %d %.3f",(int)x,x-(int)x);
    }
    return 0;
}
#include "stdio.h"
 
 
int main(void)
{
    signed long long x,y,z;
    signed long long max,min;
    scanf("%lld %lld %lld",&x, &y,&z);
    if (x >= y && x >= z)
    {
        max = x;
        if (y >= z)
        {
            min = z;
        }
        else
        {
            min = y;
        }
    }
    else if (y >=z )
    {
        max = y;
        if (z >= x)
        {
            min = x;
        }
        else
        {
            min = z;
        }
    }
    else
    {
        max = z;
        if (y >= x)
        {
            min = x;
        }
        else
        {
            min = y;
        }
    }
    printf("%lld %lld",min,max);
    return 0;
}
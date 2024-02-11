#include "stdio.h"
 
 
int main(void)
{
    long long bound1[2];
    long long bound2[2];
    scanf("%lld %lld %lld %lld",&bound1[0],&bound1[1],&bound2[0],&bound2[1]);
    if (bound1[0] <= bound2[0])
    {
        if (bound1[1] < bound2[0])
        {
            printf("-1");
        }
        else if (bound1[1] < bound2[1])
        {
            printf("%lld %lld",bound2[0],bound1[1]);
        }
        else
        {
            printf("%lld %lld",bound2[0],bound2[1]);
        }
    }
    else
    {
        if (bound2[1] < bound1[0])
        {
            printf("-1");
        }
        else if (bound2[1] < bound1[1])
        {
            printf("%lld %lld",bound1[0],bound2[1]);
        }
        else
        {
            printf("%lld %lld",bound1[0],bound1[1]);
        }
    }
    return 0;
}
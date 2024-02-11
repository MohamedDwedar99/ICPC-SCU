#include "stdio.h"
 
 
int main(void)
{
    long long x,y;
    scanf("%lld %lld",&x,&y);
    x = x%10;
    y = y%10;
    printf("%lld",x+y);
    return 0;
}
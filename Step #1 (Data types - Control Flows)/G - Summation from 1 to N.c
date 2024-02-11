#include "stdio.h"
 
int main(void)
{
    long long x;
    scanf("%lld",&x);
    x = x*(x+1)/2;
    printf("%lld",x);
    return 0;
}
#include "stdio.h"
 
 
int main(void)
{
    long long x,y,z,k;
    scanf("%lld %lld %lld %lld",&x,&y,&z,&k);
    printf("Difference = %lld",(x*y)-(z*k));
    return 0;
}
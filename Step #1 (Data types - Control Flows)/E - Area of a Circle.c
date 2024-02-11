#include "stdio.h"
 
#define pi 3.141592653

int main(void)
{
    double R;
    scanf("%lf",&R);
    printf("%.9f",pi*R*R);
    return 0;
}
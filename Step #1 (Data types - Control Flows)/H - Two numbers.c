#include "stdio.h"
#include "math.h"
 
int main(void)
{
    double x,y;
    scanf("%lf %lf",&x,&y);
    printf("floor %.0f / %.0f = %d\n",x,y,(int)floor(x/y));
    printf("ceil %.0f / %.0f = %d\n",x,y,(int)ceil(x/y));
    printf("round %.0f / %.0f = %d\n",x,y,(int)round(x/y));
    return 0;
}
#include "stdio.h"
 
int main(void)
{
    int x;
    long long y;
    char z;
    float f;
    double d;
 
    scanf("%d %lld %c %f %lf", &x, &y, &z, &f, &d);
    printf("%d\n%lld\n%c\n%0.2f\n%0.1f", x, y, z, f, d);
 
    return 0;
}

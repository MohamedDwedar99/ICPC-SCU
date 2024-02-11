#include "stdio.h"
 
 
int main(void)
{
    int x = 0;
    scanf("%d",&x);
    x = x/1000;
    x = x%2;
    if (x == 0)
    {
        printf("EVEN");
    }
    else
    {
        printf("ODD");
    }
    return 0;
}
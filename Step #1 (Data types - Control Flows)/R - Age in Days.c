#include "stdio.h"
 
 
int main(void)
{
    int x= 0;
    int y,m,d;
    scanf("%d",&x);
    y = x/365;
    x = x-365*y;
    m = x/30;
    d = x - m*30;
    printf("%d years\n",y);
    printf("%d months\n",m);
    printf("%d days\n",d);
    return 0;
}
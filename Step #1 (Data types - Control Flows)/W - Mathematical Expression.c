#include "stdio.h"
 
 
int main(void)
{
    int x,y,w;
    char z,eq;
    int flag = 0;
    int result;
    scanf("%d %c %d %c %d",&x,&z,&y,&eq,&w);
    switch (z)
    {
        case '+':
            if ((x + y) == w)
            {
                flag =1;
            }
            result = x + y;
        break;
        case '-':
            if (x - y == w)
            { 
                flag = 1;
            }
            result = x - y;
        break;
        case '*':
            if (x * y == w)
            { 
                flag = 1;
            }
            result = x * y;
        break;
    }
    if (flag == 1)
    {
        printf("Yes");
    }
    else
    {
        printf("%d",result);
    }
    return 0;
}
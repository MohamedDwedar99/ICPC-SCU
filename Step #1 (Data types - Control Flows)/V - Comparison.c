#include "stdio.h"
 
 
int main(void)
{
    int x,y;
    char z;
    int flag = 0;
    scanf("%d %c %d",&x,&z,&y);
    switch (z)
    {
        case '>':
            if (x > y)
            {
                flag =1;
            }
        break;
        case '<':
            if (x < y)
            { 
                flag = 1;
            }
        break;
        case '=':
            if (x == y)
            { 
                flag = 1;
            }
        break;
    }
    if (flag == 1)
    {
        printf("Right");
    }
    else
    {
        printf("Wrong");
    }
    return 0;
}
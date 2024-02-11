#include <stdio.h>
#include <string.h>
 
int main(void)
{
    char c;
    scanf("%c",&c);
    if (c <= 'Z')
    {
        c = c + 32;
    }
    else if (c >= 'a')
    {
        c = c - 32;
    }
    printf("%c",c);
    return 0;
}
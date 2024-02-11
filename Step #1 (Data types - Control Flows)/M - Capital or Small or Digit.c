#include <stdio.h>
#include <string.h>
 
int main(void)
{
    char c;
    scanf("%c",&c);
    if (c <= 'Z' && c >= 'A')
    {
        printf("ALPHA\nIS CAPITAL");
    }
    else if (c <= 'z' && c >= 'a')
    {
        printf("ALPHA\nIS SMALL");
    }
    else if (c <= '9' && c >= '0')
    {
        printf("IS DIGIT");
    }
    return 0;
}
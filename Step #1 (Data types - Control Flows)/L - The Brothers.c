#include <stdio.h>
#include <string.h>
 
int main(void)
{
    char first[2][1000];
    char second[2][1000];
    scanf("%s %s",first[0],first[1]);
    scanf("%s %s",second[0],second[1]);
    if (strcmp(first[1],second[1]) == 0)
    {
        printf("ARE Brothers");
    }
    else
    {
        printf("NOT");
    }
    return 0;
}
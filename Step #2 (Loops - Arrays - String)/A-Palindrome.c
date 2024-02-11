#include <stdio.h>


int main (void)
{
    char str1[20] = {0};
    char str2[20] = {0};
    scanf("%s",str1);
    int i = 0;
    int j =0;
    int flag = 0;
    int count;
    while (str1[i+1] != '\0')
    {
        i++;
    }
    while (str1[i] == '0')
    {
        i--;
    }
    while (i >=0)
    {
        str2[j] = str1[i];
        j++;
        i--;
    }
    str2[j] = '\0';
    i = 0;
    printf("%s\n",str2);
    for (i = 0; i <= j;i++)
    {
        if (str1[i] != str2[i])
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
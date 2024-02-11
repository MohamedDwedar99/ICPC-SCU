#include <stdio.h>
#include <string.h>
#include <math.h>
 
int main(void)
{
    char s[20];
    scanf("%s",s);
    long long i = 0;
    long long flag = 0;
    long long num1,num2;
    long long op_index = 0;
    long long result = 0;
    num1 = num2 = 0;
    while (s[i] != '\0')
    {
        if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/')
        {
            flag = 1;
            op_index = i;
            i++;
            continue;
        }
        if (flag == 0)
        {
            num1 = num1*10 + (s[i]-'0');
        }
        else
        {
            num2 = num2*10 + (s[i]-'0');
        }
        i++;
    }
    if (s[op_index] == '+')
    {
        result = num1+num2;
    }
    else if (s[op_index] == '-')
    {
        result = num1-num2;
    }
    else if (s[op_index] == '/')
    {
        result = num1/num2;
    }
    else if (s[op_index] == '*')
    {
        result = num1*num2;
    }
    printf("%lld",result);
    return 0;
}
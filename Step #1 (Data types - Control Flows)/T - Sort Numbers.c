#include "stdio.h"
 
 
int main(void)
{
    long long arr[3];
    scanf("%lld %lld %lld",&arr[0],&arr[1],&arr[2]);
    if (arr[0] <= arr[1] && arr[0] <= arr[2])
    {
        printf("%lld\n",arr[0]);
        if (arr[1] <= arr[2])
        {
            printf("%lld\n",arr[1]);
            printf("%lld\n",arr[2]);
        }
        else
        {
            printf("%lld\n",arr[2]);
            printf("%lld\n",arr[1]);
        }
    }
    else if (arr[1] <= arr[2])
    {
        printf("%lld\n",arr[1]);
        if (arr[0] <= arr[2])
        {
            printf("%lld\n",arr[0]);
            printf("%lld\n",arr[2]);
        }
        else
        {
            printf("%lld\n",arr[2]);
            printf("%lld\n",arr[0]);
        }
    }
    else
    {
        printf("%lld\n",arr[2]);
        if (arr[0] <= arr[1])
        {
            printf("%lld\n",arr[0]);
            printf("%lld\n",arr[1]);
        }
        else
        {
            printf("%lld\n",arr[1]);
            printf("%lld\n",arr[0]);
        }
    }
    printf("\n%lld\n%lld\n%lld",arr[0],arr[1],arr[2]);
    return 0;
}
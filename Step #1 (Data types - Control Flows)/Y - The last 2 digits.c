#include "stdio.h"
 
int main(void)
{
    int arr[5];
    scanf("%d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3]);
    arr[0]%=100;
    arr[1]%=100;
    arr[2]%=100;
    arr[3]%=100;
    arr[4] = arr[0]*arr[1]*arr[2]*arr[3];
    arr[4] = arr[4] % 100;
    if (arr[4] <= 9)
    {
        printf("0%d", arr[4]);
    }
    else
    {
        printf("%d", arr[4]);
    }
    return 0;
}

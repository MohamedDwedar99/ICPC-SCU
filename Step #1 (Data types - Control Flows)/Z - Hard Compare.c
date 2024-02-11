#include "stdio.h"
#include "math.h"
int main(void)
{
    double arr[6];
    scanf("%lf %lf %lf %lf", &arr[0], &arr[1], &arr[2], &arr[3]);
    arr[4] = arr[1]*log(arr[0]);
    arr[5] = arr[3]*log(arr[2]);
    if (arr[4] > arr[5])
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
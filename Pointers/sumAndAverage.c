#include <stdio.h>
int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int *p = arr, sum = 0;
    float avg;
    for(int i = 0; i < 5; i++)
    {
        sum += *(p + i);
    }
    avg = sum / 5.0;
    printf("Sum = %d, Average = %.2f", sum, avg);
    return 0;
}

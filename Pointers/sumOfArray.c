#include <stdio.h>
int main()
{
    int arr[] = {5, 10, 15, 20, 25};
    int sum = 0;
    int *p = arr;
    for (int i = 0; i < 5; i++)
    {
        sum += *(p + i);
    }
    printf("Sum = %d", sum);
    return 0;
}

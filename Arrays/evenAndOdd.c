#include <stdio.h>
int main() 
{
    int arr[10], i, even = 0, odd = 0;
    printf("Enter 10 numbers: ");
    for(i = 0; i < 10; i++) 
    {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < 10; i++) 
    {
        if(arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    printf("Even numbers: %d\n", even);
    printf("Odd numbers: %d\n", odd);
}

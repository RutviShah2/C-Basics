#include <stdio.h>
int main() 
{
    int arr[] = {2, 4, 8, 12, 16, 18};
    int n = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
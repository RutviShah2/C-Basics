#include <stdio.h>
int main() 
{
    int n, min=9;
    scanf("%d", &n);
    while(n>0)
    {
        int d = n % 10;
        if(d < min) min = d;
        n /= 10;
    }
    printf("Smallest digit = %d", min);
    return 0;
}

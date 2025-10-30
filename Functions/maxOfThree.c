#include <stdio.h>
int maxOfThree(int a, int b, int c)
{
    if(a > b && a > c)
        return a;
    else if(b > c)
        return b;
    else
        return c;
}
int main()
{
    int x, y, z;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &x, &y, &z);
    printf("Largest = %d", maxOfThree(x, y, z));
    return 0;
}

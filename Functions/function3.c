#include <stdio.h>
int add(int x, int y)
{
    return x + y;
}
int main() 
{
    int result = add(8, 12);
    printf("Sum = %d", result);
    return 0;
}

#include <stdio.h>
void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    printf("Inside function: a = %d, b = %d\n", a, b);
}
int main()
{
    int x = 5, y = 10;
    swap(x, y);
    printf("In main: a = %d, b = %d\n", x, y);
    return 0;
}

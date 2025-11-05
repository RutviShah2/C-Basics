#include <stdio.h>
int main()
{
    int a = 10, b = 20;
    int *p = &a, *q = &b;
    printf("p = %p\n", p);
    p++;
    printf("After p++: %p\n", p);
    return 0;
}

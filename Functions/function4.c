#include <stdio.h>
int giveNumber() 
{
    return 42;
}
int main()
{
    int n = giveNumber();
    printf("Number is: %d", n);
    return 0;
}

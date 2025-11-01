#include <stdio.h>
int main() 
{
    int num = 5;
    int *p = &num;
    *p = 20;  
    printf("Value of num: %d", num);
    return 0;
}

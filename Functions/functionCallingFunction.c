#include <stdio.h>
void hello()
{
    printf("Hello, ");
}
void world() 
{
    hello();
    printf("World!\n");
}
int main()
 {
    world();
    return 0;
}

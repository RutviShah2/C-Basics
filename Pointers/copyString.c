#include <stdio.h>
int main()
{
    char src[100], dest[100];
    char *s = src, *d = dest;
    printf("Enter a string: ");
    gets(src);
    while(*s != '\0')
    {
        *d = *s;
        s++;
        d++;
    }
    *d = '\0';
    printf("Copied string: %s", dest);
    return 0;
}

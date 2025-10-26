#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
 {
    char str[50];
    printf("Enter text: ");
    gets(str);
    for(int i = 0; str[i]; i++)
        str[i] = toupper(str[i]);
    printf("Uppercase: %s", str);
    return 0;
}

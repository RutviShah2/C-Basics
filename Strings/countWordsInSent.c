#include <stdio.h>
#include <string.h>
int main()
 {
    char str[100];
    int count = 1;
    printf("Enter a sentence: ");
    gets(str);
    for(int i = 0; str[i] != '\0'; i++)
    if(str[i] == ' ' && str[i+1] != ' ')
    count++;
    printf("Total words = %d", count);
    return 0;
}

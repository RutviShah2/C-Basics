#include <stdio.h>
int main() {
    int a = 5, b = 10, c = 5;

    printf("(a < b) && (a == c): %d\n", (a < b) && (a == c));
    printf("(a < b) || (a != c): %d\n", (a < b) || (a != c));
    printf("!(a < b): %d\n", !(a < b));

    return 0;
}

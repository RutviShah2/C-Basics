#include <stdio.h>
#include <string.h>

struct Student
{
    char name[20];
    int age;
    float marks;
};

int main()
{
    struct Student s;

    strcpy(s.name, "Rutvii");
    s.age = 18;
    s.marks = 95.5;

    printf("Name: %s\n", s.name);
    printf("Age: %d\n", s.age);
    printf("Marks: %.2f\n", s.marks);

    return 0;
}

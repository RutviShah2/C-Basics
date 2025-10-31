#include <stdio.h>
float toCelsius(float f)
{
    return (f - 32) * 5 / 9;
}
float toFahrenheit(float c)
{
    return (c * 9 / 5) + 32;
}
int main()
{
    float temp;
    char choice;
    printf("Enter temperature value: ");
    scanf("%f", &temp);
    printf("Convert to (C/F): ");
    scanf(" %c", &choice);
    if (choice == 'C' || choice == 'c')
        printf("In Celsius: %.2f", toCelsius(temp));
    else
        printf("In Fahrenheit: %.2f", toFahrenheit(temp));
    return 0;
}

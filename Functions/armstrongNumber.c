#include <stdio.h>
#include <math.h>
int countDigits(int n) 
{
    int count = 0;
    while (n > 0)
    {
        count++;
        n /= 10;
    }
    return count;
}
int isArmstrong(int n)
{
    int sum = 0, temp = n;
    int digits = countDigits(n);
    while (temp > 0)
    {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }
    return (sum == n);
}
int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    if (isArmstrong(num))
        printf("%d is an Armstrong number", num);
    else
        printf("%d is not an Armstrong number", num);
    return 0;
}

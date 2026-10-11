// a C program to check whether a number is a Strong Number or not
#include <stdio.h>

int main() 
{
    int n, temp, digit, i, fact, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    while (n > 0) {
        digit = n % 10;
        fact = 1;

        for (i = 1; i <= digit; i++) {
            fact = fact * i;
        }

        sum = sum + fact;
        n = n / 10;
    }

    if (sum == temp) {
        printf("%d is a Strong Number.", temp);
    } else {
        printf("%d is not a Strong Number.", temp);
    }

    return 0;
}
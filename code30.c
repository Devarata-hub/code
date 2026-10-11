//Octal to Decimal Conversion (Without Array)
#include <stdio.h>

int main()
{
    int n, rem, decimal = 0, base = 1;

    printf("Enter an octal number: ");
    scanf("%d", &n);

    while (n > 0) {
        rem = n % 10;
        decimal = decimal + rem * base;
        base = base * 8;
        n = n / 10;
    }

    printf("Decimal number = %d", decimal);

    return 0;
}
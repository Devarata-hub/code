//Decimal to Octal Conversion (Without Array)
#include <stdio.h>

int main() {
    int n, rem, octal = 0, place = 1;

    printf("Enter a decimal number: ");
    scanf("%d", &n);

    while (n > 0) {
        rem = n % 8;
        octal = octal + rem * place;
        n = n / 8;
        place = place * 10;
    }

    printf("Octal number = %d", octal);

    return 0;
}


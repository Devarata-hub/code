//. Sum of Prime Numbers
include <stdio.h>

int main() {
    int n, i, j, sum = 0, prime;

    printf("Enter the limit: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i++) {
        prime = 1;

        for (j = 2; j < i; j++) {
            if (i % j == 0) {
                prime = 0;
                break;
            }
        }

        if (prime == 1) {
            sum = sum + i;
        }
    }

    printf("Sum of prime numbers = %d", sum);

    return 0;
}


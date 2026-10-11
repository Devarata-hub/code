//Sum of Cubes of Even Numbers Up to a Limit
#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter the limit: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i += 2) {
        sum = sum + (i * i * i);
    }

    printf("Sum of cubes of even numbers = %d", sum);

    return 0;
}


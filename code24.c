// C Program to Find the Sum of Positive Integers Until 0
#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter numbers (enter 0 to stop):\n");

    while (1) {
        scanf("%d", &n);

        if (n == 0) {
            break;
        }

        if (n > 0) {
            sum = sum + n;
        }
    }

    printf("Sum = %d", sum);

    return 0;
}


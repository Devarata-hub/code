//Sum of A.P. Series
#include <stdio.h>

int main() {
    int a, d, n, i, term, sum = 0;

    printf("Enter first term, common difference and number of terms: ");
    scanf("%d %d %d", &a, &d, &n);

    for (i = 1; i <= n; i++) {
        term = a + (i - 1) * d;
        sum = sum + term;
    }

    printf("Sum of A.P. Series = %d", sum);

    return 0;
}

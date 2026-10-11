//Sum of G.P. Series
#include <stdio.h>

int main() 
{
    int a, r, n, i, term, sum = 0;

    printf("Enter first term, common ratio and number of terms: ");
    scanf("%d %d %d", &a, &r, &n);

    term = a;

    for (i = 1; i <= n; i++) {
        sum = sum + term;
        term = term * r;
    }

    printf("Sum of G.P. Series = %d", sum);

    return 0;
}
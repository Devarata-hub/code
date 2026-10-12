// c program to calculate factorial of the number using recursive function.
#include<stdio.h>
int fact(int n);

int main()
{
    int n, r;

    printf("Enter a number: ");
    scanf("%d", &n);

    r = fact(n);

    printf("Factorial = %d", r);

    return 0;
}

int fact(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * fact(n - 1);
}

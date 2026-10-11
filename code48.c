//calculate the number of prime  number between interals.
#include <stdio.h>

int prime(int n)
{
    int i;

    if (n < 2)
        return 0;

    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
            return 0;
    }

    return 1;
}

int main()
{
    int start, end, i;

    printf("Enter the starting and ending intervals: ");
    scanf("%d %d", &start, &end);

    printf("Prime numbers are: ");

    for (i = start; i <= end; i++)
    {
        if (prime(i))
            printf("%d ", i);
    }

    return 0;
}

// c program to print the heart patttern.
#include<stdio.h>
int main()
{
    int n=6,j,i;
    // top part of the heart
    for(i=n/2;i<=n;i+=2)
 {
    for(j=1;j<n-i;j+=2)
    printf(" ");
    for(j=1;j<=i;j++)
    printf("*");
    for(j=1;j<=n-i;j++)
    printf(" ");
    for(j=1;j<=i;j++)
    printf("*");
    printf("\n");
 }
// for the lower part of the inverted triangle .
    for(i=n;i>=1;i--)\
    {
        for(j=i;j<n;j++)
        printf(" ");
        for(j=1;j<=2*i-1;j++)
        printf("*");
        printf("\n");
    }
    return 0;
}
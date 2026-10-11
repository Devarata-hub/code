#include<stdio.h>
int main()
{
    int i,j,k,n;
    printf("enter the  half row number");
    scanf("%d",&n);
    // for the upper half
    for(i=1;i<=n;i++)//for rows3
    {
        for(k=1;k<=n-i;k++) // for space 
        printf(" ");
        for(j=1;j<=2*i-1;j++)// for stars
        printf("*");
        printf("\n");
    }
    // for the lower hand
    for(i=n-1;i>=1;i--)
    {
        for(k=1;k<=n-i;k++)
        printf(" ");
        for(j=1;j<=2*i-1;j++)
        printf("*");
        printf("\n");
    }
    return 0;
}
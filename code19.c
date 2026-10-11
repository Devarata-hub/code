// c program to calculate the fibonacci series.
#include<stdio.h>
int main()
{
    int n,i;
    int a=0,b=1,temp;
    printf("enter the number");
    scanf("%d",&n);
    printf("Fibonacci series");
    for(i=1;i<=n;i++)
    {
    printf("%d",a);
    temp=a+b;
    a=b;
    b=temp;
    }
    printf("\n");
    return 0;
}
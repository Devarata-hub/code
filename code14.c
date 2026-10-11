// c program to display prime numbers between two intervals .
#include<stdio.h>
int main()
{
    int a,b,n,i,count;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    printf("the  prime numbers are");
    for(n=a;n<=b;n++)
    {
        count=0;
        for(i=1;i<=n;i++)
        {
          if (n%i==0)
          count++;
        }
        if (count==2)
        printf("%d",n);
    }
    return 0;
}


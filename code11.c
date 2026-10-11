#include<stdio.h>
int main()
{
    int n=5678,o,A;
    int p=1;
    A=n;
    o=n%10;
    while (n>=10)
    {
       n=n/10;
       p=p*10;
    }
    A=p*o+(A%p/10)*10+n;
    printf("The swap of first and last number is %d",A);
    return 0;
  }
    
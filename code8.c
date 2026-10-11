#include<stdio.h>
int main()
{
    int i=1;int f=1;int n=5;
    while(i<=5){
    f=f*i;
    i++;
    }

printf("The factorial of %d is %d\n",n,f);
return 0;
}

// c program to check the armstong number.
#include<stdio.h>
int main()
{
    int n,rem,sum=0,number;
    printf("Enter a number you want");
    scanf("%d",&n);
    number=n;
    while(number>0)
    {
    rem=number%10;
    sum=sum+rem*rem*rem;
    number=number/10;
    }
    if(sum==n)
    printf("%d is the armstong number\n",n);
    else
    printf("%d is not the armstong number",n);
    return 0;
}
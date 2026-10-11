#include<stdio.h>
int main()
{
    int n=5638,rem,rev=0,count=0;
    while(n!=0)
    {

        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
        count++;
    }
    printf("The reversed number is %d",rev);
    return 0;
}
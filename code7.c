#include<stdio.h>
int main()
{ 
    int n,c=0;
    printf("Enter the number ");
    scanf("%d",&n);
    while(n!=0)
    {
    n=n/10;
    c++;
    }
    printf("The  count of the number is %d",c);
    return 0;

}
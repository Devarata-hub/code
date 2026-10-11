#include<stdio.h>
int main()
{
    int n=3,i,j;
    char name='A';
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c",name);
            name++;
        }
        printf("\n");
    }
    return 0;
}
    

    
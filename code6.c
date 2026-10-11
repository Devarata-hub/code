#include<stdio.h>
int main()
{
    int i,j;
    char name='A';
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c",name);
        }
        name++;
        printf("\n");
    }
return 0;

}
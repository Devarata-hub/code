// c program to make heart pattern.
#include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<6;i++)
    {
        for(j=0;j<7;j++)
        {
            if((i==0 && (j==1 || j==2 ||j==4 ||j==5)) ||
            (i==1 && (j==0 || j==3 ||j==6)) ||
            (i==2 && (j==0 || j==6)) ||
            (i==3 && (j==1 || j==5)) ||
            (i==4 && (j==2 || j==4)) ||
            (i==5 && (j==3)))
        
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;

}
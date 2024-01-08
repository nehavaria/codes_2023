#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j;
    for(i=1; i<=5; i++)
    {
        printf("\n");
        for(j=1; j<=i; j++)
        {
            if(i%5==0)
            printf("*");
            else
            printf("1");
        }

    }
}


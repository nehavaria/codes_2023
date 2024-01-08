#include<stdio.h>
#include<stdlib.h>
int main()
{
    int rows,i,j,k,l=1;
    printf("\n ENTER THE NUMBER OF ROWS YOU WANT: ");
    scanf("%d",&rows);
    printf("pyramid pattern 1\n");
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=rows-i;j++)
        {
            printf(" ");
        }
        for(k=1; k<=i; k++, l++)
        {
            printf("%d",l);
        }
        printf("\n");
    }
    return 0;
}
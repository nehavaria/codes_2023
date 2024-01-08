#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,small,large,a[25];
    printf("\n ENTER THE SIZE OF ARRAY: ");
    scanf("%d",&n);
    printf("\n ENTER THE ELEMENTS OF YOUR ARRAY: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    large=a[0];
    small=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>large);
        {
            large=a[i];
        }
        if(a[i]<small)
        {
            small=a[i];
        }
    }
    printf("\n THE LARGEST ELEMENT IS %d AND THE SMALLEST ELEMENT IS %d",large,small);
    return 0;
}
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("\n ENTER YOUR  VALUE");
    scanf("%d",&a);
    b=1;
    x:
    if(a%b==0)
    {
        printf("\n%d",b);
        
    }
    b=b+1;
    if(b<28)
    {
        goto x;
    }
    return 0;   
}
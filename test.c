#include<stdio.h>
#include<conio.h>
void main()
{
    int temp =1;
    for(int i=0; i<=10; i+=(2*temp))
    {
        printf("test\n");
        temp+=1;
    }
}


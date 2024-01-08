#include<stdio.h>
#include<string.h>
#define MAX_LENGTH 1000
int main()
{
    char input[MAX_LENGTH];
    printf("\n ENTER MULTIPLE LINE STRING HERE");

    while(fgets(input,MAX_LENGTH,stdin)!=NULL)
    {
        input[strcspn(input,"\n")]='\0';
        printf("LENGTH OF THE LINE:%zu\n",strlen(input));

    }
    return 0;
}
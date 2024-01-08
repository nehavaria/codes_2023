#include <stdio.h>

void main()
{
    int a[5], i, j, *p, temp; // Fix: Removed conio.h and changed *temp to temp.
    printf("\n enter your values");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    p = &a[0];
    printf("\n you entered the following values");
    for (i = 0; i < 5; i++)
    {
        printf("\n %d", a[i]);
    }
    printf("\n after arranging values in ascending order");
    for (i = 0; i < 5; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            if (*(p + i) > *(p + j))
            {
                temp = *(p + i); 
                *(p + i) = *(p + j);
                *(p + j) = temp;
            }
        }
        printf("\n %d", *(p + i));
    }
    int test = 100;
    printf("Address of variable i is : ", &test);
}



#include <stdio.h>
#include <string.h>

struct person
{
    int no;
    char name[50];
    int age;
};

void main()
{
    struct person p1, p2;
    int size;

    printf("\nEnter your first person no: ");
    scanf("%d", &p1.no);

    printf("\nEnter your first person name: ");
    scanf("%s", p1.name); // Use %s to read a string

    printf("\nEnter your first person age: ");
    scanf("%d", &p1.age);

    printf("\nEnter your second person no: ");
    scanf("%d", &p2.no);

    printf("\nEnter your second person name: ");
    scanf("%s", p2.name); // Use %s to read a string

    printf("\nEnter your second person age: ");
    scanf("%d", &p2.age);

    printf("\n\nno\tname\tage");
    printf("\n%d\t%s\t%d", p1.no, p1.name, p1.age);
    printf("\n%d\t%s\t%d", p2.no, p2.name, p2.age);
}

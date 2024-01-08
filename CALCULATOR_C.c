#include<stdio.h>

int main() {
    int flag = 1;

    while (flag) {
        printf("------------CALCULATOR--------------------\n");
        printf("Select an option\n");
        printf("1) addition\n");
        printf("2) subtraction\n");
        printf("3) multiplication\n");
        printf("4) Division\n");
        printf("5) Exit\n");
        printf("------------------------------------------\n");

        int n;
        scanf("%d", &n);

        printf("Enter number 1 : ");
        int a;
        scanf("%d", &a);

        printf("\nEnter number 2 : ");
        int b;
        scanf("%d", &b);

        switch (n) {
            case 1:
                printf("Addition of %d and %d = %d\n", a, b, a + b);
                break;
            case 2:
                printf("Subtraction of %d and %d = %d\n", a, b, a - b);
                break;
            case 3:
                printf("Multiplication of %d and %d = %d\n", a, b, a * b);
                break;
            case 4:
                if (b != 0) {
                    printf("Division : %d and %d = %d\n", a, b, a / b);
                } else {
                    printf("Cannot divide by zero.\n");
                }
                break;
            case 5:
                printf("Goodbye !!!\n");
                flag = 0;
                break;
            default:
                printf("Invalid option. Please select a valid option.\n");
                break;
        }
    }
    
    return 0;
}

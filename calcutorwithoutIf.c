#include <stdio.h>
#define maxOperations 4
const float taxRate = 0.08;

int main()
{
    printf("welcome to calcultor\n");
    printf("choose your choice:\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");

    float num1, num2, result;
    int choice;
    printf("\nplease input your first number: \n");
    scanf("%f", &num1);
    printf("please input your second number: \n");
    scanf("%f", &num2);
    printf("please input your choice: \n");
    scanf("%d", &choice);
    (choice == 1) && (result = num1 + num2);
    (choice == 2) && (result = num1 - num2);
    (choice == 3) && (result = num1 * num2);
    (choice == 4 && num2 == 0) && (printf("Error:can't divine by zero\n")) && (choice = 0);
    (choice == 4) && (result = num1 / num2);
    (choice < 1 || choice > maxOperations) && (printf("invalid choice\n\n"));
    (choice >= 1 && choice <= maxOperations) && (result += result * taxRate) && (printf("the result is: %.2f\n", result));

    return 0;
}

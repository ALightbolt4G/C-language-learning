#include <stdio.h>
int main(){
    int num1, num2 , num3;
    printf("input number 1:\n");
    scanf("%d", &num1);
    printf("input number 2:\n");
    scanf("%d", &num2);
    printf("input number 3:\n");
    scanf("%d", &num3);
    if(num1 >= num2 && num1 >= num3){
        printf("Maximum number is: %d\n", num1);
    }
    else if(num2 >= num1 && num2 >= num3){
        printf("Maximum number is: %d\n", num2);
    }
    else{
        printf("Maximum number is: %d\n", num3);
    }
}
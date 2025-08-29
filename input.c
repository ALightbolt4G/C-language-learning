#include <stdio.h>

int main() {
    
    int age;
    float gpa;
    char grade;
    char name[30];
    
    printf("Enter your age: \n");
    scanf("%d", &age); // scanf = input. & => address.
    
    printf("Enter your gpa: \n");
    scanf("%f", &gpa);
    
    printf("Enter your grade: \n");
    scanf(" %c", &grade);
    
    getchar();
    printf("Enter your name: \n");
    fgets(name, sizeof(name), stdin); // fgets means file gets string.
    
    printf("%d\n", age);
    printf("%.2f\n", gpa);
    printf("%c\n", grade);
    printf("%s\n", name);
    
    return 0;
}
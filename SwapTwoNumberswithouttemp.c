#include <stdio.h>
int main(){
    int a, b;
    printf("input number 1:\n");
    scanf("%d", &a);
    printf("input number 2:\n");
    scanf("%d", &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("after swapping:\nnumber 1: %d\nnumber 2: %d\n", a, b);
    return 0;
}
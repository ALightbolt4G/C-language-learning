#include <stdio.h>
#include <stdbool.h>
//this for get boolean stdbool means standard boolean

int main() {
    
    // variable = A reusable container for a value.
    //  behaves as if it were the value it contains.
    
    
    // this are integers
    int age = 25;
    int year = 2025;
    int quantity = 2;
    // this are floats
    float gpa = 2.5;
    float price = 19.99;
    float temperature = -10.1;
    //this are doubles it can store 15 t0 16 digits after the decimal
    double pi = 3.14159265358979;
    double e = 2.7182818284590;
    //this are charcters
    char grade = 'A';
    char symbol = '!';
    char currency = '$';
    //this are strings
    char name[] = "Adham Hossam";
    char food[] = "pizza";
    char email[] = "fake2025@gmail.com";
    //this is boolean
    bool isOnline = true;  //true = 1 false = 0
    bool isStudent = true;
    bool isSale = false;
    
    /*
    %d => integer
    %f => float
    %lf => means long float => double
    %c => char
    %s => string
    */
    
    printf("You are %d years old\n", age);
    printf("the year is %d\n",year);
    printf("you have ordered %d × items\n", quantity);
    
    
    printf("Your gpa is %.1f\n", gpa);
    printf("The price is $%.2f\n", price);
    printf("The temperature is %f°F\n",temperature);
    
    
    printf("the value of pi is %.15lf\n", pi);
    printf("the value of e is %.15lf\n", e);
    
    printf("Your grade is %c\n", grade);
    printf("Your favourite symbol is %c\n", symbol);
    printf("The currency is %c\n", currency);
    
    
    printf("Hello, Iam %s\n", name);
    printf("I like %s\n", food);
    printf("My email is %s\n", email);
    
    
    printf("%d\n", isOnline);
    
    // this if statement but this a quick look to see boolean
    if(isOnline){
        printf("You are ONLINE");
    }
    else{
        printf("You are OFFLINE");
    }
    if(isStudent){
        printf("You are a student");
    }
    else{
        printf("You are not a student");
    }
    if(isSale){
        printf("This item is for sale");
    }
    else{
        printf("This item is not for sale");
    }
    
    return 0;
}
/*
int = whole numbers (4 bytes in modern systems
float = single-precision decimal number (4 bytes)
double = double-precision decimal number (8 bytes)
char = single charcter (1 byte)
char[] = array of charcters (size vaeies)
bool = true or false (1 byte, requires <stdbool.h>)
*/
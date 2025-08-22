int main(){
    //format specifier = special tokens that begin with a % symbol
    //                   followed by a character that specifies the data type 
    //                   and optional modifiers (width, precision ,flags).
    //                   they control how data is displayed or interpreted
    
    int age = 25;
    float price = 19.99;
    double pi = 3.1415926535;
    char currency = '$';
    char name[] = "adham hossam";
    
    printf("%d\n", age);
    printf("%f\n",price);
    printf("%lf\n", pi);
    printf("%c\n", currency);
    printf("%s\n", name);
    
    // width => specifies the minimum number of characters to print
    
    int num1 = 1;
    int num2 = 10;
    int num3 = 100;
    
    
    printf("%3d\n", num1);
    printf("%3d\n", num2);
    printf("%3d\n", num3);
    
    // precision => add a dot followed by an amount of digits to display it
    
    float price1 = 19.99;
    float price2 = 1.50;
    float price3 = -100.00;
    
    printf("%.2f\n",price1);
    printf("%.2f\n",price2);
    printf("%.2f\n",price3);
    /*
    %1.2f => %(width.precision)f
    */
    
    return 0;
}
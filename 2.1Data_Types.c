#include<stdio.h>
int main()
{
    //Declare variable
    int myInt ;
    float myFloat;
    char myChar ;
    double myDouble ;

    // Take input from the user
    printf("Enter an integer: ");
    scanf("%d", &myInt);
    
    printf("Enter a float: ");
    scanf("%f", &myFloat);
    
    printf("Enter a character: ");
    scanf(" %c", &myChar);  // Notice the space before %c to consume any newline character
    
    printf("Enter a double: ");
    scanf("%lf", &myDouble);

    // Print their values
    printf("Integer: %d", myInt);
    printf("\nFloat: %.2f", myFloat);
    printf("\nCharacter: %c", myChar);
    printf("\nDouble: %.2lf", myDouble);

    return 0;

}
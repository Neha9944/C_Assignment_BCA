#include <stdio.h>

int main() {
    int num1, num2;

    // Input two integers
    printf("Enter an integer: ");
    scanf("%d", &num1);
    
    printf("Enter a number to AND with:");
    scanf("%d", &num2);

    // Performing bitwise AND (&)
    printf(" Result of %d AND %d = %d\n",num1,num2, num1 & num2);

    // Performing bitwise OR (|)
     printf("Enter a number to OR with: ");
    scanf("%d", &num2);
    printf("Result of %d OR %d = %d\n",num1,num2, num1 | num2);

    // Performing bitwise XOR (^)
     printf("Enter a number to XOR with: ");
    scanf("%d", &num2);
    printf("Result of %d XOR %d = %d\n",num1,num2, num1 ^ num2);

    // Performing bitwise NOT (~)
    printf("Result of NOT %d = %d\n",num1,~num1);
   

    // Performing left shift (<<) by 1 bit (example)
    int shift;
    printf("Enter the number of positions to left shift: ");
    scanf("%d",&shift);
    printf("Result of %d << %d = %d\n",num1,shift,num1<<shift);

    // Performing right shift (>>) by 1 bit (example)
    printf("Enter the number of positions to right shift: ");
    scanf("%d",&shift);
    printf("Result of %d >> %d = %d\n",num1,shift,num1>>shift);

    return 0;
}

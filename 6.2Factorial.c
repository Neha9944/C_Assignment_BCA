#include <stdio.h>

int main() {
    int number, fact = 1, i = 1;

   printf("Enter a positive integer: ");
   scanf("%d",&number);
   if(number>=0){

  while(i<=number)
 {
    fact =fact*i;
    i++;

 }

printf("Factorial of %d is %d",number,fact);
}else {
    printf("Factorial of a negative number doesn't exist.");
}
    return 0;
}
#include <stdio.h>

int main() {
    int n, sum = 0, i = 1;

    // Get the value of n from the user
   printf("Enter a positive integer: ");
   scanf("%d",&n);

    // Calculate the sum of the first n natural numbers using a while loop
    while(i<=n){
        
        sum = sum+i;
        i++;
        
    }
    printf("The sum of the first %d natural numbers is: %d",n, sum);
    
    return 0;
}
#include <stdio.h>

int main() {
    int n, sum = 0, curr = 2;
    printf("Enter the number of even numbers: ");
    scanf("%d", &n);
    
    for(int i=1; i<=n; i++){
        sum+=curr;//  sum = sum+curr
        
        curr+=2;//curr =curr+2
        
    }
    
    printf("Sum of the first %d even numbers is: %d\n", n, sum);
    return 0;
}
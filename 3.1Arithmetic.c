#include <stdio.h>

int main(){
    
int a, b;
printf("Enter two integers: ");
scanf("%d%d",&a,&b);

    int sum = a+b;
    printf("Addition: %d + %d = %d\n",a,b,sum);

    int sub = a-b;
     printf("Subtraction: %d - %d = %d\n",a,b,sub);

    int mul = a*b;
    printf("Multiplication: %d * %d = %d\n",a,b,mul);

    int div = a/b;
    printf("Division: %d / %d = %d\n",a,b,div); 
    
    int rem = a%b;
    printf("Modulus: %d %% %d = %d\n",a,b,rem); 
    
    // Write Your Code Here
    
    
      return 0;
}

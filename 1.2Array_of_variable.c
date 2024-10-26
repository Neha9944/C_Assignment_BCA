#include<stdio.h>

int main()
{
    
    int arr[30], size, i, sum = 0;
    
    //Get size input from user
    printf("Enter the number of elements in the array: ");
    scanf("%d",&size);
    
    //Get all elements using for loop and store it in array
    printf("Enter %d elements: ",size);
    for(i = 0; i < size; i++)
          scanf("%d",&arr[i]);
          
    //add all elements to the variable sum.
    for(i = 0; i < size; i++)
          sum = sum + arr[i]; // same as sum += arr[i];
    
    //print the result
    printf("Sum of the elements: %d",sum);
    
    return 0;
}

#include<stdio.h>

int main()
{
    
    int arr[20],size, i, max;
    
    //Get size input from user
    printf("Enter the number of elements:\n");
    scanf("%d",&size);
    
    //Get all elements using for loop and store it in array
    printf("Enter %d elements:\n",size);
    for(i = 0; i < size; i++)
    {
          scanf("%d",&arr[i]);
    }
          // Initialize max with the first element
          max = arr[0];
          
    // Traverse the array to find the maximum
    for(i = 1; i < size; i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
    }
          
    
    //print the result
    printf("The maximum element is %d",max);
    
    return 0;
}
 

#include<stdio.h>

int main()
{
    
    int arr[20],n, i;
    
    //Get size input from user
    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    
    //Get all elements using for loop and store it in array
    printf("Enter %d elements:\n",n);
    for(i = 0; i < n; i++)
    {
          scanf("%d",&arr[i]);
    }
        
          
     // Reverse the array
    int rev[n], j = 0;  
    for(i = n-1; i >= 0; i--)  
    {  
        rev[j] = arr[i];  
        j++;  
    }  
     // Output the reversed array
    printf("Reversed array:\n");  
    for(i = 0; i < n; i++)  
    {  
        printf("%d ", rev[i]);  
    }  

    
    return 0;
}
 

   
   

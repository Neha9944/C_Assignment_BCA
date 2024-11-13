#include <stdio.h>

// Define the structure
struct Student {
    char name[50];
    int rollNo;
    float marks;
};

int main() {
    // Declare a pointer to the structure
    struct Student *ptr;
    
    // Create a structure variable
    struct Student student;
    
    // Point the pointer to the structure variable
    ptr = &student;
    
    // Take user input via the pointer
    printf("Enter name:\n");
    scanf("%49s", ptr->name); // Using %49s to prevent buffer overflow
    
    printf("Enter roll number:\n");
    scanf("%d", &ptr->rollNo);
    
    printf("Enter marks:\n");
    scanf("%f", &ptr->marks);
    
    // Display the structure members using the pointer
    printf("\nStudent Details:\n");
    printf("Name: %s\n", ptr->name);
    printf("Roll No: %d\n", ptr->rollNo);
    printf("Marks: %.2f\n", ptr->marks);
    
    return 0;
}

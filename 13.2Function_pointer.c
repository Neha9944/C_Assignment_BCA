#include <stdio.h>

// Define the structure Student
struct Student {
    char name[50];
    int age;
    float marks;
};

// Function to print student details using a pointer
void printStudentDetails(struct Student *ptr) {
    printf("\nStudent Details:\n");
    printf("Name: %s\n\n", ptr->name);
    printf("Age: %d\n", ptr->age);
    printf("Marks: %.2f\n", ptr->marks);
}

int main() {
    // Declare a Student structure
    struct Student student;
    
    // Take user input for the structure members
    printf("Enter name:\n");
    scanf("%49s", student.name);  // Using %49s to prevent buffer overflow
    
    printf("Enter age:\n");
    scanf("%d", &student.age);
    
    printf("Enter marks:\n");
    scanf("%f", &student.marks);
    
    // Call the function to print the details, passing the address of the structure
    printStudentDetails(&student);
    
    return 0;
}

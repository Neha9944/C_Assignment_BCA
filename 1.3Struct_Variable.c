#include <stdio.h>
#include <string.h>

// Define the 'Student' struct
struct Student {
    char name[100];
    int id;
    float grade;
};

// Function to print student details
void printStudent(struct Student s) {
    printf("Name: %s\n", s.name);
    printf("ID: %d\n", s.id);
    printf("Grade: %.2f\n", s.grade);
}

// Function to update the student's grade
void updateGrade(struct Student* s, float newGrade) {
    s->grade = newGrade;
}

int main() {
    struct Student student;

    // Read the student's name using fgets (safe for spaces)
    printf("Enter student's name: ");
    fgets(student.name, sizeof(student.name), stdin);

    // Remove the trailing newline character that fgets may include
    student.name[strcspn(student.name, "\n")] = '\0';

    // Read the student's ID and grade
    printf("Enter student's ID: ");
    scanf("%d", &student.id);

    printf("Enter student's grade: ");
    scanf("%f", &student.grade);

    // Print initial student details
    printf("\nStudent Details:\n");
    printStudent(student);

    // Update student's grade
    printf("\nEnter new grade for the student: ");
    float newGrade;
    scanf("%f", &newGrade);
    
    // Update and print the updated details
    updateGrade(&student, newGrade);
    printf("\nUpdated Student Details:\n");
    printStudent(student);

    return 0;
}

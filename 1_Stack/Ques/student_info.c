#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// Enum to represent the menu options
typedef enum{
    Add = 1, Display, Find, Edit, Remove, Exit
}Menu;


// Structure to store student information for a linked list
typedef struct StudentInfo
{
    char name[100];          // Array to store student name
    int age;
    int roll_no;
    float percentage;

    // Pointer to the next student node in the linked list
    struct StudentInfo *next;

}student_t;       // Alias name for 'struct Student_Info'

// Pointer to the first node of the linked list (head)
// Initialized to NULL because the list is empty initially
student_t *head = NULL;


// function declarations

void AddStudentInfo();
void ShowStudentsList();
void FindStudentByRollNo();
void EditStudentInfo();
void RemoveStudentInfo();

int main(){
    int choice = 0;

    while (choice != Exit)
    {
        printf("\n1. Add Student Information\n");
        printf("2. Display Students List\n");
        printf("3. Find the Student by Roll Number\n");
        printf("4. Edit the Student Information\n");
        printf("5. Delete the Student Information\n");
        printf("6. Exit\n");
    
        printf("\nEnter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case Add:
            AddStudentInfo();
            break;

        case Display:
            ShowStudentsList();
            break;

        case Find:
            FindStudentByRollNo();
            break;

        case Edit:
            EditStudentInfo();
            break;

        case Remove:
            RemoveStudentInfo();
            break;

        case Exit: 
            printf("Exiting...\n"); 
            break;
        
        default:
        printf("Invalid choice!!\n");
            break;
        }
    }
    
}

// Function to add a new student at the beginning of the linked list
void AddStudentInfo(){

    // Create a new node dynamically to store student information
    student_t *node = (student_t *)malloc(sizeof(student_t));

    printf("Enter the Name: ");
    scanf("%s", node->name);

    printf("Enter the Age: ");
    scanf("%d", &node->age);

    printf("Enter the Roll No.: ");
    scanf("%d", &node->roll_no);

    printf("Enter the Percentage: ");
    scanf("%f", &node->percentage);

    // Link the new node to the existing linked list
    // New node's next will point to the current head
    node->next = head;    

    head = node;         // Update head to point to the new node

    printf("\nStudent added successfully!\n");
} 

// Function to display all student records in the linked list
void ShowStudentsList(){

    // Temporary pointer used to traverse the linked list
    // Initialized with head 
    student_t *temp = head;

    if (temp == NULL)
    {
        printf("\nNo Records Found!!\n");
        return;
    }

    printf("\nName\tAge\tRoll_NO\t Percentage\n");

    while (temp != NULL)     // Traverse the linked list until the end (NULL)
    {
        printf("%s\t%d\t%d\t%.2f\n", temp->name, temp->age, temp->roll_no, temp->percentage);
        temp = temp->next;   // Move to the next node in the linked list
    }
    
}

// Function to search for a student using roll number
void FindStudentByRollNo(){
    int roll_no;

    // Temporary pointer used to traverse the linked list
    // Initialized with head (first node)
    student_t *temp = head;

    printf("Enter roll number to find: ");
    scanf("%d", &roll_no);

    while (temp != NULL)   // Traverse the linked list until the end
    {
        if (temp->roll_no == roll_no)
        {
            printf("\nStudent Found!!\n");
            printf("\nName\tAge\tRoll_NO\t Percentage\n");
            printf("%s\t%d\t%d\t%.2f\n", temp->name, temp->age, temp->roll_no, temp->percentage);
            return;
        }
        
        temp = temp->next;  // Move to the next node in the linked list
    }

    printf("\nStudent not found!\n");
}

// Function to edit student information based on roll number
void EditStudentInfo(){

    int roll_no;

    // Temporary pointer used to traverse the linked list
    // Initialized with head (first node)
    student_t *temp = head;

    printf("Enter roll number to edit: ");
    scanf("%d", &roll_no);

    while (temp != NULL)
    {
        if (temp->roll_no == roll_no)
        {
            printf("\nStudent Found! Editing Information...\n");

            printf("Enter new Name: ");
            scanf("%s", temp->name);

            printf("Enter new Age: ");
            scanf("%d", &temp->age);

            printf("Enter new Roll No.: ");
            scanf("%d", &temp->roll_no);

            printf("Enter new Percentage: ");
            scanf("%f", &temp->percentage);

            printf("Information updated successfully!\n");
            return;
        }
        
        temp = temp->next;  // Move to the next node in the linked list
    }

    printf("\nStudent not found!\n");
}


// Function to delete a student from the linked list based on roll number
void RemoveStudentInfo(){
    int roll_no;
    student_t *temp = head;    // Pointer to traverse the list, starting from head
    student_t *prev = NULL;    // Pointer to keep track of previous node

    printf("Enter roll number to delete: ");
    scanf("%d", &roll_no);

    // Traverse the list to find the student with the given roll number
    // Stop when we reach the end or find the matching node
    while (temp != NULL && temp->roll_no != roll_no) { 

        prev = temp;           // Move prev to current node
        temp = temp->next;     // Move temp to next node
    }

    if (temp == NULL) {
        printf("\nStudent not found!\n");
        return;
    }

    // If prev is NULL, the node to delete is the first node (head)
    if (prev == NULL)
    {
        head = temp->next;    // Move head to the next node
    }else
    {
        prev->next = temp->next;   // Skip the node to delete and connect previous to next
    }

    free(temp);
    printf("\nStudent deleted successfully!\n");
}



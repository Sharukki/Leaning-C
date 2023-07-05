#include <stdio.h>

#define MAX_LENGTH 50

// Define the struct for an employee
struct Employee {
    char lastName[MAX_LENGTH];
    char firstName[MAX_LENGTH];
    int employeeID;
    int last4SSN;
    char title[MAX_LENGTH];
};

int main() {
    // Create an array to store two employees
    struct Employee employees[2];

    // Prompt the user to enter each employee's credentials
    for (int i = 0; i < 2; i++) {
        printf("Enter details for Employee %d:\n", i + 1);

        printf("Last Name: ");
        scanf("%s", employees[i].lastName);

        printf("First Name: ");
        scanf("%s", employees[i].firstName);

        printf("Employee ID: ");
        scanf("%d", &employees[i].employeeID);

        printf("Last 4 Digits of SSN: ");
        scanf("%d", &employees[i].last4SSN);

        printf("Title: ");
        scanf("%s", employees[i].title);

        printf("\n");
    }

    // Print the employee's credentials
    printf("Employee 1:\n");
    printf("Last Name: %s\n", employees[0].lastName);
    printf("First Name: %s\n", employees[0].firstName);
    printf("Employee ID: %d\n", employees[0].employeeID);
    printf("Last 4 Digits of SSN: %d\n", employees[0].last4SSN);
    printf("Title: %s\n", employees[0].title);
    printf("\n");

    printf("Employee 2:\n");
    printf("Last Name: %s\n", employees[1].lastName);
    printf("First Name: %s\n", employees[1].firstName);
    printf("Employee ID: %d\n", employees[1].employeeID);
    printf("Last 4 Digits of SSN: %d\n", employees[1].last4SSN);
    printf("Title: %s\n", employees[1].title);

    return 0;
}


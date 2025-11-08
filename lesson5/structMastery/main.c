#include <stdio.h>
#include <string.h>

typedef enum EmployeeStatus {
    ACTIVE = 1,
    LEAVE,
    FIRED
} EmployeeStatus;

typedef struct Date {
    int day;
    int month;
    int year;
} Date;

typedef struct Employee {
    Date hire_date;
    char name[50];
    float salary;
    EmployeeStatus status;
} employee_t;

void promote_employee(employee_t *emp_ptr){
    emp_ptr->salary += 10000;
}

typedef union PayChange {
    float bonus_amount;
    float raise_percentage;
} PayChange;

typedef enum ChangeType {
    BONUS,
    RAISE
} ChangeType;

typedef struct EmployeeReview {
    ChangeType type;
    PayChange details;
} EmployeeReview;



void print_employee_data(employee_t *emp_ptr) {
    printf("---------------------\n");
    printf("Hire Date: %d-%d-%d\n", emp_ptr->hire_date.day, emp_ptr->hire_date.month, emp_ptr->hire_date.year);
    printf("Name: %s\n", emp_ptr->name);
    printf("Salary: %f\n", emp_ptr->salary);
    printf("---------------------\n");
}


int main() {
    // Structs, Challenge #1
    employee_t manager_data;
    employee_t *ptr_manager = &manager_data;
    strcpy(ptr_manager->name, "Bruh");
    ptr_manager->salary = 200000.0f;

    printf("New salary: %f\n", ptr_manager->salary);

    // Structs, Challenge #2
    employee_t employee_data;
    employee_t *ptr_employee = &employee_data;
    ptr_employee->hire_date.day = 15;
    ptr_employee->hire_date.month = 10;
    ptr_employee->hire_date.year = 2025;

    printf("Hire Date: %d, %d, %d\n", ptr_employee->hire_date.day, ptr_employee->hire_date.month, ptr_employee->hire_date.year);

    // Structs, Challenge #3
    printf("Before Promo - Manager Salary: %f\n", ptr_manager->salary);
    promote_employee(ptr_manager);
    printf("After Promo - Manager Salary: %f\n", ptr_manager->salary);

    // Structs, Challenge #4
    employee_t trainee = {
        {1, 1, 2026}, "Alice", 50000.0f
    };
    print_employee_data(&trainee);
    
    employee_t staff = {
        {1, 1, 2022}, "Josh", 150000.0f
    };
    print_employee_data(&staff);

    // Structs, Challenge $4 (with Designated Initializers)
    employee_t trainee2 = {
        .hire_date = {.day = 1, .month = 1, .year = 2026},
        .name = "Alice",
        .salary = 50000.0f,
        .status = LEAVE
    };
    print_employee_data(&trainee2);

    // Structs, Challenge #5
    employee_t team[3] = {
        {{1, 1, 2020}, "New", 20000.0f},
        {{1, 1, 2020}, "New", 20000.0f},
        {{1, 1, 2020}, "New", 20000.0f},
    };

    for (int i = 0; i < 3; i++) {
        print_employee_data(&team[i]);
    }

    // Enums, Challenge #1
    printf("FIRED code is: %d\n", FIRED);

    // Union, Challenge #1
    PayChange change;
    change.bonus_amount = 5000.0f;
    printf("Bonus amount: %f\n", change.bonus_amount);
    printf("Size of change: %zu\n", sizeof(change));

    // Union, Challenge #2
    EmployeeReview review1;
    review1.type = RAISE;
    review1.details.raise_percentage = 0.05f;
    printf("Raise percentage: %f\n", review1.details.raise_percentage);

    return 0;
}
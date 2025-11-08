#include <stdio.h>
#include <string.h>

typedef struct Employee {
    int id;
    char name[50];
    float salary;
} employee_t;


int main() {
    
    employee_t manager;
    manager.id = 1;
    strcpy(manager.name, "Derek");
    manager.salary = 200000;

    printf("Name: %s, salary: %f\n", manager.name, manager.salary);
    
    return 0;
}
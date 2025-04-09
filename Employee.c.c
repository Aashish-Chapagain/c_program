#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

struct employee {
    int id;
    char name[25];
    char designation[25];
    float salary;
};

int main() {
    size_t len;
    int n;

    printf("Enter the number of employees: ");
    scanf("%d", &n);
    getchar();

    if (n <= 0) {
        printf("Invalid number of employees.\n");
        return 1;
    }

    struct employee *ptr_emp = (struct employee *)malloc(n * sizeof(struct employee));
    if (ptr_emp == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    struct employee *pDetails = ptr_emp;

    // Input employee details
    for (int i = 0; i < n; i++, pDetails++) {
        printf("\nEnter the ID of employee %d: ", i + 1);
        scanf("%d", &pDetails->id);
        getchar();

        printf("Enter the name of the employee: ");
        fgets(pDetails->name, sizeof(pDetails->name), stdin);
        len = strlen(pDetails->name);
        if (len > 0 && pDetails->name[len - 1] == '\n') {
            pDetails->name[len - 1] = '\0';
        }

        printf("Enter the designation of the employee: ");
        fgets(pDetails->designation, sizeof(pDetails->designation), stdin);
        len = strlen(pDetails->designation);
        if (len > 0 && pDetails->designation[len - 1] == '\n') {
            pDetails->designation[len - 1] = '\0';
        }

        printf("Enter the salary of the employee: ");
        scanf("%f", &pDetails->salary);
        getchar();
    }

    // Output employee details
    printf("\n\tEmployee Details:\n");
    printf("--------------------------------------------------------\n");
    printf("ID\tName\t\tDesignation\t\tSalary\n");
    printf("--------------------------------------------------------\n");

    pDetails = ptr_emp;
    for (int i = 0; i < n; i++, pDetails++) {
        printf("%d\t%-15s%-20s%.2f\n", pDetails->id, pDetails->name, pDetails->designation, pDetails->salary);
    }

    printf("--------------------------------------------------------\n");

    free(ptr_emp);
    return 0;
}

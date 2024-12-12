#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

struct employee
{
    int id;
    char name[25];
    char designation[25];
    float salary;
};

int main()
{
    size_t len;
    int n;
    printf("Enter the number of employees : ");
    scanf("%d", &n);
    getchar();

    // managing the number is valid or not
    if (n <= 0)
    {
        printf("Invalid number of employees.\n");
        return 1;
    }

    // allocating the memory
    struct employee *ptr_emp = (struct employee *)malloc(n * sizeof(struct employee));

    if (ptr_emp == NULL)
    {
        printf("Memoray allocation failed ");
        return 1;
    }

    struct employee *pDetails = ptr_emp; // Details = accesing the pointer to input the data

    // accessing the structure and getting the input from the user
    for (int i = 0; i < n; i++, pDetails++)
    {

        // asking for the id of the employee
        printf("\nEnter the Id of the employee %d : ", i + 1);
        scanf("%d", &pDetails->id);
        getchar();

        // asking for the name of the employee
        printf("Enter the name of the employee: ");
        fgets(pDetails->name, sizeof(pDetails->name), stdin);
        // removing the newline tailed after using fgets
        len = strlen(pDetails->name);
        if (len > 0 && pDetails->name[len - 1] == '\n')
        {
            pDetails->name[len - 1] = '\0';
        }
        // asking for the designation of the employee
        printf("Enter the designation of the employee: ");
        fgets(pDetails->designation, sizeof(pDetails->designation), stdin);
           // removing the newline tailed after using fgets
        len = strlen(pDetails->designation);
        if (len > 0 && pDetails->designation[len - 1] == '\n')
        {
            pDetails->designation[len - 1] = '\0';
        }
        // asking for the salary
        printf("Enter the salary of the employee: ");
        scanf("%f", &pDetails->salary);
        getchar();
    }
    printf("\n \t The Entered details are :");
    pDetails = ptr_emp;
    for (int i = 0; i < n; i++, pDetails++)
    {
        printf("\nID : %d  Name : %s Designation : %s  Salary : %f", pDetails->id, pDetails->name, pDetails->designation, pDetails->salary);
    }

    free(ptr_emp);
    return 0;
}

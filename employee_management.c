#include <stdio.h>

struct employee
{
    int id;
    char name[20];
    int salary;
};

void addemployee();
void displayemployee();
void searchemployee();
void highestsalary();

int main()
{
    int choice;

    do
    {
        printf("\n===== Employee Management System =====");
        printf("\n1. Add Employee");
        printf("\n2. Display Employees");
        printf("\n3. Search Employee");
        printf("\n4. Highest Salary");
        printf("\n5. Exit");

        printf("\nEnter choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addemployee();
                break;

            case 2:
                displayemployee();
                break;

            case 3:
                searchemployee();
                break;

            case 4:
                highestsalary();
                break;

            case 5:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 5);

    return 0;
}

void addemployee()
{
    FILE *fp;
    struct employee e;

    fp = fopen("employee.txt", "a");

    if(fp == NULL)
    {
        printf("File cannot be opened.\n");
        return;
    }

    printf("Enter Employee ID: ");
    scanf("%d", &e.id);

    printf("Enter Employee Name: ");
    scanf("%s", e.name);

    printf("Enter Salary: ");
    scanf("%d", &e.salary);

    fprintf(fp, "%d %s %d\n", e.id, e.name, e.salary);

    fclose(fp);

    printf("Employee added successfully.\n");
}

void displayemployee()
{
    FILE *fp;
    struct employee e;

    fp = fopen("employee.txt", "r");

    if(fp == NULL)
    {
        printf("File not found.\n");
        return;
    }

    printf("\n===== Employee Records =====\n");

    while(fscanf(fp, "%d %s %d",
                 &e.id, e.name, &e.salary) != EOF)
    {
        printf("\nID     : %d", e.id);
        printf("\nName   : %s", e.name);
        printf("\nSalary : %d\n", e.salary);
    }

    fclose(fp);
}

void searchemployee()
{
    FILE *fp;
    struct employee e;
    int search_id;
    int found = 0;

    fp = fopen("employee.txt", "r");

    if(fp == NULL)
    {
        printf("File not found.\n");
        return;
    }

    printf("Enter Employee ID to search: ");
    scanf("%d", &search_id);

    while(fscanf(fp, "%d %s %d",
                 &e.id, e.name, &e.salary) != EOF)
    {
        if(search_id == e.id)
        {
            printf("\nEmployee Found");
            printf("\nID     : %d", e.id);
            printf("\nName   : %s", e.name);
            printf("\nSalary : %d\n", e.salary);

            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("Employee not found.\n");
    }

    fclose(fp);
}

void highestsalary()
{
    FILE *fp;
    struct employee e, highest;

    fp = fopen("employee.txt", "r");

    if(fp == NULL)
    {
        printf("File not found.\n");
        return;
    }

    if(fscanf(fp, "%d %s %d",
              &highest.id,
              highest.name,
              &highest.salary) == EOF)
    {
        printf("No employee records found.\n");
        fclose(fp);
        return;
    }

    while(fscanf(fp, "%d %s %d",
                 &e.id,
                 e.name,
                 &e.salary) != EOF)
    {
        if(e.salary > highest.salary)
        {
            highest = e;
        }
    }

    printf("\n===== Highest Salary Employee =====");
    printf("\nID     : %d", highest.id);
    printf("\nName   : %s", highest.name);
    printf("\nSalary : %d\n", highest.salary);

    fclose(fp);
}

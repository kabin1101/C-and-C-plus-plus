#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char name[20];
    char country[20];
    int birthyear;
    float salary;
} Employee;

void inputlistemployee()
{
    Employee ep[100];
    int current_year = 2025, numberofemployee, age;

    printf("Enter number of employee: ");
    scanf("%d", &numberofemployee);

    for (int i = 0; i < numberofemployee; i++)
    {
        printf("Enter employee name: ");
        scanf("%s", &ep[i].name);

        printf("Enter country: ");
        scanf("%s", &ep[i].country);
        getchar();

        while (1)
        {
            printf("Enter birthyear: ");
            scanf("%d", &ep[i].birthyear);

            age = current_year - ep[i].birthyear;
            if (age >= 60 || age <= 18)
            {
                printf("Employee age must less than 18 years old and greater than 6 years old");
            }
            else{
                break;
            }
        }
        
            

    loop2:
        printf("Enter salary: ");
        scanf("%.3f", &ep[i].salary);

        if (ep[i].salary >= 500 || ep[i].salary <= 100)
        {
            printf("Employee salary must less than 500 and greater than 100");
            goto loop2;
        }
    }
}

void displayemployee()
{
    Employee ep[100];

    for (int i = 0; i < sizeof(Employee); i++)
    {
        printf("%s\t|%s\t|%d\t|%.3f\t", ep[i].name, ep[i].country, ep[i].birthyear, ep[i].salary);
    }
}

void menu()
{
    printf("Employee management system\n");
    printf("1. Input Employee | 2. Display Employee Descending | 3. Save file | 4. Analyze | 5. exit\n");
}

int main(int argc, char const *argv[])
{
    int choice;

    do
    {
        menu();
        printf("Chon: ");
        scanf("%d", &choice);
        getchar();
        switch (choice)
        {
        case 1:
            inputlistemployee();
            break;
        case 2:
            displayemployee();
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        default:
            break;
        }
    } while (choice != 5);

    return 0;
}
